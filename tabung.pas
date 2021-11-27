program tabung;
uses wincrt;
var t,r,J,Lp,V,Ka,La:real;
begin
writeln('Jumlah panjang rusuk - Luas permukaan - Volume Tabung');
write('Jari-jarinya ?');
readln(r);
write('Tingginya ?');
readln(t);
Ka:=2*pi*r;
La:=pi*r*r;
J:=2*Ka;
Lp:=2*La+Ka*t;
V:=La*t;
writeln('Jeng jeng jeng . . .');
writeln('Jumlah panjang rusuknya adalah . .',J:9:3);
writeln('Luas permukaannya ialah . .',Lp:9:3);
writeln('Volumenya yaitu . .',V:9:3);
end.