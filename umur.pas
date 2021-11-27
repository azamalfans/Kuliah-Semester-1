program case_of_umurku;
uses wincrt;
var predikat:string;
    umur:byte;

begin
clrscr;
       write('Masukin Usia Kamu = ');
       readln(umur);
       case umur of
            0..1  :predikat:='bayi';
            2..11 :predikat:='bocah';
            12..17:predikat:='cabe-cabean';
            18..23:predikat:='abg';
            24..39:predikat:='dewasa';
            40..54:predikat:='bapak-bapak';
            55..64:predikat:='bangkotan';
       else
           predikat:='old';
       end;
           write('Usiamu Bisa Dibilang = ',predikat);
           readln;
end.