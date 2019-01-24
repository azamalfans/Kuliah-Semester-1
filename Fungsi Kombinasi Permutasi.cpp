#include <iostream>
using namespace std;
int faktorial(int x) {
	if (x==1) return(1);
	return x * faktorial(x-1);
}
int pengurangan(int n, int r) {
	int x;
	x=n-r;
	if (x==1) return(1);
	return x * faktorial(x-1);
}
int main(){
	int n,r,kombinasi,permutasi;
	cout<<"Menghitung nilai nCr (n kombinasi r) dan"<<endl;
	cout<<"menghitung nilai nPr (n permutasi r)"<<endl<<endl;
	cout<<"masukkan nilai n: ";
	cin>>n;
	cout<<"masukkan nilai r: ";
	cin>>r;
	kombinasi=faktorial(n)/(pengurangan(n,r)*faktorial(r));
	cout<<"maka "<<n<<"C"<<r<<" adalah "<<kombinasi<<endl;
	permutasi=faktorial(n)/pengurangan(n,r);
	cout<<"maka "<<n<<"P"<<r<<" adalah "<<permutasi;
	return 0;
}
