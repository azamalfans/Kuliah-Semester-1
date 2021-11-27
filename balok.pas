program Balok;
uses wincrt;
var p,l,t,J,Lp,V:real;
begin
writeln('Jumlah panjang rusuk - Luas permukaan - Volume Balok');
write('Panjangnya berapa ?');
readln(p);
write('Lebarnya sih ?');
readln(l);
write('Tingginya juga hayoo . .');
readln(t);
J:=4*p+4*l+4*t;
Lp:=2*p*l+2*p*t+2*l*t;
V:=p*l*t;
writeln('Jumlah panjang rusuknya --->',J:9:3);
writeln('Luas permukaannya --------->',Lp:9:3);
writeln('Volumenya ----------------->',V:9:3);
end.