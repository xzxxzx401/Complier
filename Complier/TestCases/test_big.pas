{This program is used to test all letters and symbols}
Program test1;
const
 cc=2;
var
 a,a2:integer;
 b:boolean;
 r:real;
 ar:array[0..1] of boolean;
 i,j,k:integer;
procedure print;
 var i2:integer;
begin
 for i2:=1 to 100 do
  begin
    if(ar[1]=true)then
      writeln(a,'''',a2,' ',b,' ',cc,' ',r/0.2)
    else if(ar[0]=true)then
      writeln(a+a2,' ',a-a2,' ',a*a2,' ',a div a2,' ',a mod a2);
    end;
end;
function check(a,b:integer):boolean;
begin
 check:=(not (a=b) or (a<=b) or (a>=b))
 	and ((a>b) or (a<b) or (a<>b));
 print;
end;
begin
 a:=1;
 a2:=2;
 r:=0.13;
 for i:=0 to 1 do
 begin
  for j:=0 to 1 do
  begin
   for k:=0 to 1 do
   begin
    ar[i+j+k]:=check(a,a2);
    inc(a);
   end;
  end;
 end;
 print;
 readln;
end.
{End program}

