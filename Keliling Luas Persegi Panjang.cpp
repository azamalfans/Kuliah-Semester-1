#include <iostream>
using namespace std;
int main () {
	float p,l,keliling,luas;
	cout<<"					KELOMPOK MATERI 4\n";
	cout<<"\n";
	cout<<"Keliling dan Luas Persegi Panjang\n";
	cout<<"\n";
	cout<<"Berapa panjang sisinya ? : ";
	cin>>p;
	cout<<"\n";
	cout<<"Berapa lebar sisinya ? : ";
	cin>>l;
	cout<<"\n";
	cout<<"Bentar, otaknya keliling dulu . . :D";
	cout<<"\n";
	luas=p*l;
	keliling=p+p+l+l;
	cout<<"\nMenghasilkan keliling persegi panjangnya = "<< keliling;
	cout<<"\n";
	cout<<"\nMenghasilkan luas persegi panjangnya = "<< luas;
	return 0;
}
