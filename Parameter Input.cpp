#include <iostream>
using namespace std;

int tambahsatu (int x) {
	int hasil;
	hasil=x+1;
	return hasil;
}

int kalidua (int x) {
	int hasil;
	hasil=x*2;
	return hasil;
}

int main () {
	int bilangan, hasil1, hasil2;
	cout <<"Masukkan sebuah bilangan bulat : ";
	cin >> bilangan;
	cout << endl;
	hasil1=tambahsatu(bilangan);
	hasil2=kalidua(bilangan);
	cout << "Nilai fungsi satu : " <<hasil1<<endl;
	cout << "Nilai fungsi dua  : " <<hasil2;
	return 0;
}
