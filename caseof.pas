uses wincrt;
var x:integer;
begin
writeln('Berapa nilai anda?');
readln(x);
case x of
0..40:write('Nilai anda sangat buruk');
46..60:write('Nilai anda jelek');
61..75:write('Nilai anda sedang');
76..85:write('Nilai anda cukup baik');
86..100:write('Nilai anda sangat baik');
end;
readln;
end.
