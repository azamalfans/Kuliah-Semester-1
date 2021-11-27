uses wincrt;
var x:real;
ket:string;
begin
ket:=('Tdk tuntas');
writeln('Nilainya ?');
readln(x);
if x >= 75 then ket:=('Tuntas');
writeln('Anda dinyatakan=',ket);
readln;
end.