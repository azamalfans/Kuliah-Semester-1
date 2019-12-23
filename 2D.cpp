#include <iostream>
using namespace std;
int main () {
	
	int tab[3][3]={{66,77,88,},{99,87,78},{96,85,70}},bil,kol;
	
	cout << "======================================"<<endl;
	cout << "	CONTOH PROGRAM ARRAY 2D			"<<endl;
	cout << "======================================"<<endl;
	cout << " Baris ke : ";
	cin >> bil;
	cout << " Kolom ke : ";
	cin >> kol;
	cout << "\n Array ke " << bil << "," << kol << " = " << tab [bil-1][kol-1];	
}
