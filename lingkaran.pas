program Lingkaran;
uses wincrt;
var r,L,K:real;
begin
writeln('Keliling & Luas Lingkaran');
write('Gua minta nilai jari-jarinya=');
readln(r);
K:=2*pi*r;
L:=pi*r*r;
writeln('Nih gua kasih kelilingnya=',K:9:3);
writeln('Gua kasih juga luasnya=',L:9:3);
end.