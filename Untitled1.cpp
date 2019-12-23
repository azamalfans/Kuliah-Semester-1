#include <iostream>
using namespace std;
int main () {
	
	int tab[100],bil,i;
	cout << "======================================"<<endl;
	cout << " PROGRAM MENAMPILKAN ARRAY YANG DIINPUT "<<endl;
	cout << "======================================"<<endl;
	cout << " Masukkan berapa banyak elemen bilangan = ";
	cin >> bil;
	i=0;
	for (i>=0; i<bil; i++) {
		cout << " Masukkan nilai ke " << i+1 << " : ";
		cin >> tab [i];
	}
	cout << "======================================";
	cout << " Bilangan yang anda masukkan adalah = ";
	cout << endl;
	i=0;
	for (i>=0; i<bil; i++){
		cout << " Ke-" << i+1 << " : " << tab [i];
		cout << endl;
	}
	cout << endl;
	cout << "======================================";
	
	return 0;
}
