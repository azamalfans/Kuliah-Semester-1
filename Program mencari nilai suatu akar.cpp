#include <iostream>
#include <math.h>
using namespace std;

int bil_a (int a){
	int nilai_a;
	nilai_a=a*a;
}
int bil_b (int b){
	int nilai_b;
	nilai_b=b*b;
}
int bil_c (int c){
	int nilai_c;
	nilai_c=c*c;
}

int main () {
	int a, b, c;
	float hasil;
	
	cout << "========================================="<<endl;
	cout << "| Program mencari nilai dari suatu akar |"<<endl;
	cout << "========================================="<<endl<<endl;
	
	cout << "Masukkan nilai a = ";
	cin >> a;
	cout << "Masukkan nilai b = ";
	cin >> b;
	cout << "Masukkan nilai c = ";
	cin >> c;
	
	hasil=sqrt(bil_a(a)+bil_b(b)+bil_c(c));
	
	cout << endl;
	cout << "Hasil kuadrat nilai a = " << bil_a(a)<<endl;
	cout << "Hasil kuadrat nilai b = " << bil_b(b)<<endl;
	cout << "Hasil kuadrat nilai c = " << bil_c(c)<<endl<<endl;
	cout << "Hasil akar kuadrat semua nilai = " << hasil<<endl;	
}
