{This program is used to test all letters and symbols}
Program test1;
const
 cc=1;
var
 a,a2:integer;
 b:boolean;
 r:real;
 ar:array[0..1] of boolean;
 i:integer;
procedure print;
begin
 if(ar[1]=true)then
  writeln(a,' ',a2,' ',b,' ',cc,' ',r/0.2)
 else if(ar[0]=true)then
  writeln(a+a2,' ',a-a2,' ',a*a2,' ',a div a2,' ',a mod a2);
end;
function check(a,b:integer):boolean;
begin
 check:=(not (a=b) or (a<=b) or (a>=b))
 	and ((a>b) or (a<b) or (a<>b));
end;

begin
 a:=1;
 a2:=2;
 r:=0.13;
 for i:=0 to 1 do
 begin
  ar[i]:=check(a,a2);
  inc(a);
 end;
 print;
 readln;
end.
{End program}

