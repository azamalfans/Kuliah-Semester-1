program contoh_type;
uses wincrt;
var total,gaji,tunjangan:real;
menikah:boolean;
anak:integer;
ket:string;
begin
gaji:=10000;
menikah:=true;
anak:=2;
tunjangan:=0.25*gaji*anak;
total:=gaji+tunjangan;
ket:='pegawai yang baik';
writeln('gaji bulanan=',gaji:3:3);
writeln('tunjangan=',tunjangan:3:3);
writeln('gaji total=',total:3:3);
writeln('status=',menikah);
writeln('jumlah anak=',anak);
writeln('Sebagai=',ket);
end.