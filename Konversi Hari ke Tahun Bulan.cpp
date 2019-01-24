#include <iostream>
using namespace std;
int main () {
	int hari,bulan,tahun,sisaharitahun,sisaharibulan;
	cout<<"Konversi Hari ke dalam format Tahun, Bulan, dan Hari\n";
	cout<<"Kamu mau berapa hari ? : ";
	cin>>hari;
	
	cout<<"					Bismillah . . . ";
	tahun=hari/365;
	sisaharitahun=hari%365;
	bulan=sisaharitahun/30;
	sisaharibulan=sisaharitahun%30;
	cout<<"\n Berapa Tahun ?						= "<< tahun;
	cout<<" tahun";
	cout<<"\n Berapa Bulan ?						= "<< bulan;
	cout<<" bulan";
	cout<<"\n Berapa Hari ?						= "<< sisaharibulan;
	cout<<" hari";
	return 0;
}
