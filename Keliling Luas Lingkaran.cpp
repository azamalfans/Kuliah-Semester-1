#include <iostream>
using namespace std;
int main () {
	int r,d;
	float pi=3.14159265359,keliling,luas;
	cout<<"					KELOMPOK MATERI 4\n";
	cout<<"\n";
	cout<<"Keliling dan Luas Lingkaran\n";
	cout<<"\n";
	cout<<"Berapa jari-jari lingkarannya ? : ";
	cin>>r;
	cout<<"\n";
	cout<<"Bentar, otaknya keliling dulu . . :D";
	cout<<"\n";
	d=2*r;
	keliling=pi*d;
	luas=pi*r*r;
	cout<<"\nDengan pi sekian = "<< pi;
	cout<<"\n";
	cout<<"\nMenghasilkan keliling lingkaran = "<< keliling;
	cout<<"\n";
	cout<<"\nMenghasilkan luas lingkaran = "<< luas;
	return 0;
}
