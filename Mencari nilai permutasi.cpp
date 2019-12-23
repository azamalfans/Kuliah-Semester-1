#include <iostream>
#include <math.h>
using namespace std;

int fak(int x) {
	if (x==1) return(1);
	return x * fak(x-1);
} 
int pengurangan(int n, int r) {
	int x;
	x=n-r;
	if (x==1) return(1);
	return x * fak(x-1);
}

int main () {
	int n,r,kombinasi,permutasi;
	cout << "Menghitung nilai nCr (n kombinasi r) dan"<<endl;
	cout << "Menghitung nilai nPr (n permutasi r)"<<endl<<endl;
	cout << "Masukkan nilai n = ";
	cin >> n;
	cout << "Masukkan nilai r = ";
	cin >> r;
	kombinasi=fak(n)/(pengurangan(n,r)*fak(r));
	cout << endl;
	cout << "Maka" << n << "C" << r << " adalah " << kombinasi<<endl;
	permutasi=fak(n)/pengurangan(n,r);
	cout << "Maka" << n << "P" << r << " adalah " << permutasi;
	
	return 0;	
}
