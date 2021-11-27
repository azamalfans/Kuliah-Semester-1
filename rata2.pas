program rata2;
uses wincrt;
var nilai,total,rata:real;
n,i:integer;
begin
write('berapa banyak data?');
readln(n);
i:=0;
total:=0;
while i<n do
begin
i:=i+1;
write('berapa data ke',i,'?');
readln(nilai);
total:=total+nilai;
end;
rata:=total/n;
writeln('total nilai',total:8:2);
writeln('rata-rata',rata:8:2);
readln;
end.