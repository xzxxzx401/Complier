#include "InputBuffer.h"

//set file name with str
InputBuffer::InputBuffer(const std::string &str)
{
	//init all argument
	fileName = str;

	memset(buffer, 0, sizeof(buffer));

	forwardPtr = backwardPtr = 0;

	curFilePos = 0;

	isFront = false;

	isFileExist = true;
	
	isBPInFront = true;

	//fill the first half of buffer
	fillBuffer();

}

//set file name with default setting
InputBuffer::InputBuffer(void)
{
	//init all argument
	fileName = default_file_name;

	memset(buffer, 0, sizeof(buffer));

	forwardPtr = backwardPtr = 0;

	curFilePos = 0;

	isFront = false;

	isFileExist = true;

	isBPInFront = true;

	//fill the first half of buffer
	fillBuffer();
}

//get a char from buffer
char InputBuffer::getchar(void)
{
	
	if (!isFileExist)//check file exist
	{
		return EOF;
	}
	else if (backwardPtr == forwardPtr)
	{
		//haven't check the front word yet
		return 0;
	}

	//check EOF
	if (buffer[backwardPtr] == EOF)
	{
		if (curFilePos == -1)
		{
			//file end ,return EOF
			return EOF;
		}

		//move ptr to another half buffer
		if (isBPInFront)
		{
			//move to the second half buffer
			backwardPtr = BUF_LEN;
			isBPInFront = false;
		}
		else
		{
			//move to the first half buffer
			backwardPtr = 0;
			isBPInFront = true;
		}
	}
	
	//get char and move the pointer
	char ch = buffer[backwardPtr++];

	return ch;

}

//get a char from buffer but not to move the pointer
char InputBuffer::peekchar(void)
{
	//check file exist
	if (!isFileExist)
	{
		return EOF;
	}

	//check EOF
	while (buffer[forwardPtr] == EOF)
	{
		if (curFilePos == -1)
		{
			++forwardPtr;

			//file end ,return EOF
			return EOF;
		}

		//move ptr to another half buffer
		if (isFront)
		{
			//move to the second half buffer
			forwardPtr = BUF_LEN;
		}
		else
		{
			//move to the first half buffer
			forwardPtr = 0;
		}

		//if this half of buffer difn't refresh,then refresh this part
		if (isBPInFront == isFront)
		{
			fillBuffer();
		}
	}

	//get char and move the pointer
	char ch = buffer[forwardPtr++];

	return ch;
}

//get data from file and fill the buffer
void InputBuffer::fillBuffer(void)
{
	//check if file is end
	if (curFilePos == -1)
	{
		return;
	}

	char ch;
	std::ifstream inFile(fileName, std::ios::in | std::ios::binary);

	//if file not exist, exit this function
	if (!inFile.is_open())
	{
		isFileExist = false;
		return;
	}

	//move file pointer to the position of last reading
	inFile.seekg(curFilePos, std::ios::beg);

	//getting data from file
	bool exitCode = true;
	for (int i = 0; i < BUF_LEN - 1 && exitCode; ++i)
	{
		inFile.get(ch);

		if (inFile.eof())
		{
			//stop getting data from file
			curFilePos = -1;

			ch = EOF;

			//end the loop
			exitCode = false;
		}
		else
		{
			#ifdef DEBUG
			cout << "DEBUG in InputBuffer::fillBuffer => num of ch is "
				<< (int)ch << endl;
			#endif // DEBUG
		}

		//put the char into the buffer
		if (!isFront)
		{
			//fill the first half buffer
			buffer[i] = ch;
		}
		else
		{
			//fill the second half buffer
			buffer[i + BUF_LEN] = ch;
		}
	}

	//set EOF of buffer
	if (!isFront)
	{
		//set EOF in the middle of buffer(first half end)
		buffer[BUF_LEN - 1] = EOF;
	}
	else
	{
		//set EOF in the end of buffer(second half end)
		buffer[BUF_LEN * 2 - 1] = EOF;
	}

	//get the last file position for next reading (-1 mean file ending)
	if (curFilePos != -1)
	{
		curFilePos = (long)inFile.tellg();
	}

	//change to another half buffer
	isFront = !isFront;
	
	inFile.close();
}

bool InputBuffer::getFileState(void) 
{ 
	return isFileExist;
}

void InputBuffer::moveBackFPtr(const int &step)
{
	for (int i = 0; i < step; ++i)
	{
		if (forwardPtr == backwardPtr)
		{
			break;
		}
		--forwardPtr;

		if (forwardPtr == BUF_LEN - 1)
		{
			--forwardPtr;
		}
		else if (forwardPtr == -1)
		{
			forwardPtr = BUF_LEN * 2 - 2;
		}
	}

}
