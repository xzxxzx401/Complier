#ifndef _INPUTBUFFER_
#define _INPUTBUFFER_

#include <fstream>
#include <iostream>
#include <string>

#define BUF_LEN 256
#define default_file_name "test.pas"
//#define DEBUG

class InputBuffer
{
private:
	char buffer[BUF_LEN * 2];
	int forwardPtr, backwardPtr;//Ptr of buffer
	long curFilePos;//current file position (-1 mean file end)
	bool isFront;//if first half buffer was the last filled one
	bool isBPInFront;//if the bufferPtr in the first half buffer
	bool isFileExist;
	std::string fileName;

	void fillBuffer(void);

public:
	InputBuffer(void);

	InputBuffer(const std::string&);

	char getchar(void);

	char peekchar(void);

	bool getFileState(void);

	void moveBackFPtr(const int&);

};

#endif //_INPUTBUFFER_