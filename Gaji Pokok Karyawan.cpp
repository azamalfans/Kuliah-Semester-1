#include <iostream>
using namespace std;
int main () {
	int GP,TA,TI,UM=500000,PJ,TG;
	cout<<"					KELOMPOK MATERI 4\n";
	cout<<"Gaji Karyawan Perusahaan Lancar Jaya Abadi\n";
	cout<<"Gaji Pokokmu berapa gan ? : Rp. ";
	cin>>GP;
	
	cout<<"					Ini kalkulasinya bang . . . ";
	TA=0.15*GP;
	TI=0.1*GP;
	PJ=0.12*GP;
	TG=GP+TA+TI+UM-PJ;
	cout<<"\n Gaji Pokokmu						= Rp. "<< GP;
	cout<<"\n Tunjangan Anak						= Rp. "<< TA;
	cout<<"\n Tunjangan Istri					= Rp. "<< TI;
	cout<<"\n Uang Makan						= Rp. "<< UM;
	cout<<"\n Pajak yang nunggak					= Rp. "<< PJ;
	cout<<"\n Ini cash yang kamu dapat				= Rp. "<< TG;
	return 0;
}
