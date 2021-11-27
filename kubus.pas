program kubus;
uses wincrt;
var s,J,Lp,V:real;
begin
writeln('Jumlah panjang rusuk - Luas permukaan - Volume Kubus');
write('Berapa panjang sisinya ?');
readln(s);
J:=12*s;
Lp:=s*s*6;
V:=s*s*s;
writeln('Jumlah panjang rusuknya adalah',J:9:3);
writeln('Luas permukaan yaitu',Lp:9:3);
writeln('Volume kubusnya hayo berapa ?',V:9:3);
end.