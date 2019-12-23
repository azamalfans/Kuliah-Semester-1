#include <iostream>
using namespace std;

int main () {
	char nama [10], golongan;
	float upah, lembur, jam, jumlah;
	
cout << "UPAH MENGHITUNG UPAH KARYAWAN"<<endl;
cout << "================================\n";
cout << " Nama Karyawan      = "; gets(nama);
cout << " Golongan (A/B/C/D) = "; cin >> golongan;
cout << " Jam Kerja          = "; cin >> jam;
cout << "================================\n";	

cout << "\nNama Karyawan = " <<nama<<endl;
if (golongan == 'A' || golongan == 'a' )
{
upah = (8000*jam) + (15000*jam);	
}
else if (golongan == 'B' || golongan == 'b' )
{
upah = (10000*jam) + (15000*jam);	
}
else if (golongan == 'C' || golongan == 'c' )
{
upah = (13000*jam) + (15000*jam);
}
else if (golongan == 'D' || golongan == 'd' )
{
upah = (20000*jam) + (15000*jam);
}

cout << "Upah Kerja    = "<<upah<<endl;

return 0;
}
