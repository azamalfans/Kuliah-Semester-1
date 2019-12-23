#include <iostream>
using namespace std;

void kali2(int&x) {
	x*=2;
	cout << "Nilai didalam fungsi : " << x << endl;
}

int main () {
	int bilangan;
	cout << "Masukkan sebuah bilangan bulat : ";
	cin >> bilangan;
	cout << endl;
	cout << "Nilai awal : " << bilangan << endl;
	kali2 (bilangan);
	cout << "Nilai akhir : " << bilangan << endl;
	
	return 0;
}
