#include <iostream>
using namespace std;
int main () {
	
	int tab[3][3][3]={{{66,77,88},{99,87,87},{23,32,45}},{{23,34,56},{24,52,12},{23,80,50}},{{23,45,23},{21,12,13},{12,45,23}}},bil,i,kol;
	cout << "\n==========================";
	cout << " Contoh program array ";
	cout << "\n==========================";
	cout << " Baris ke : ";
	cin >> bil;
	cout << " Kolom ke : ";
	cin >> kol;
	cout << " Shaf ke : ";
	cin >> i;
	cout << "\n Array ke " << bil << "," << kol << " = " << tab [bil-1][kol-1];	
}
