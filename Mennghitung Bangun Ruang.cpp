#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cstdio>
using namespace std;

int kubus (int a) {
	float luas, volume;
	luas=(a*a)*6;
	volume=a*a*a;
	cout << "Luas   = " << luas;
	cout << "\nVolume = " << volume;
}
int bola (int r) {
	float luas, phi=3.14;
	int volume;
	luas=4*phi*r*r;
	volume=(4*phi*r*r*r)/3;
	cout << "Luas   = " << luas;
	cout << "\nVolume = " << volume;
}
int kerucut (int r, int t) {
	float luas, phi=3.14;
	float volume, s;
	s=sqrt((r*r)+(t*t));
	luas=(r*r*phi)+(r*s*phi);
	volume=(1*phi*r*r*t)/3;
	cout << "Luas   = " << luas;
	cout << "\nVolume = " << volume;
}
int tabung (int r, int t) {
	float luas, volume, phi=3.14;
	luas=(r*r*phi*2) + (r*phi*2*t);
	volume=phi*r*r*t;
	cout << "Luas = " << luas;
	cout << "\nVolume = " << volume;	
}

int main () {
	int nomer, s, r, t;
awal :
	cout << "==================================="<<endl;
	cout << "= PROGRAM MENGHITUNG BANGUN RUANG ="<<endl;
	cout << "==================================="<<endl;
	cout << endl;
	
	cout << "-----------------------------------"<<endl;
	cout << "1. Menghitung luas dan volume kubus"<<endl;
	cout << "2. Menghitung luas dan volume bola"<<endl;
	cout << "3. Menghitung luas dan volume kerucut"<<endl;
	cout << "4. Menghitung luas dan volume tabung"<<endl;
	cout << "-----------------------------------"<<endl;
	cout << "\nPilih salah satu = ";
	cin >> nomer;
		
		system ("cls");
	switch (nomer)
 {
 	case 1:
 		cout << "====================="<<endl;
 		cout << "Luas dan Volume Kubus"<<endl;
 		cout << "====================="<<endl<<endl;
 		cout << "Masukkan sisi = ";
 		cin >> s;
 		cout << endl;
 		kubus (s);
	break;
	
	case 2:
		cout << "Luas dan Volume Bola"<<endl<<endl;
 		cout << "Masukkan sisi = ";
 		cin >> r;
 		cout << endl;
 		bola (r);
 	break;
 	
 	case 3:
		cout << "Luas dan Volume Kerucut"<<endl<<endl;
 		cout << "Masukkan sisi = ";
 		cin >> r;
 		cout << "Masukkan tinggi = ";
 		cin >> t;
 		cout << endl;
 		kerucut (r,t);
 	break;
 	
 	case 4:
		cout << "Luas dan Volume Tabung"<<endl<<endl;
 		cout << "Masukkan sisi  = ";
 		cin >> r;
 		cout << "Masukkan tinggi = ";
 		cin >> t;
 		cout << endl;
 		tabung (r,t);
 	break;
 	
 	default:
 	cout << "Maaf, anda belum beruntung";
 	break;
}
	
}
