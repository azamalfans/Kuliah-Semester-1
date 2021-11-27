program Persegi_Panjang;
uses wincrt;
var L,le,p,K:real;
begin
writeln('Keliling & Luas Persegi Panjang');
write('Masukkan nilai panjang=');
readln(p);
write('Masukkan nilai lebar=');
readln(le);
K:=2*p+2*le;
L:=p*le;
writeln('Maka kelilingnya=',K:9:3);
writeln('Maka luasnya=',L:9:3);
end.