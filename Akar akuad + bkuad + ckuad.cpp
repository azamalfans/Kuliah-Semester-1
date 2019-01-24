#include <iostream>
#include <math.h>
using namespace std;
int akuad(int a) {
	int x;
	x=a*a;
	return x;
}
int bkuad(int b) {
	int y;
	y=b*b;
	return y;
}
int ckuad(int c) {
	int z;
	z=c*c;
	return z;
}
int main () {
	int a,b,c;
	float hasil;
	cout<<"Menghitung akar dari (a^2 + b^2 + c^2)"<<endl;
	cout<<"masukkan nilai a : ";
	cin>>a;
	cout<<"Masukkan nilai b : ";
	cin>>b;
	cout<<"masukkan nilai c : ";
	cin>>c;
	hasil=sqrt(akuad(a)+bkuad(b)+ckuad(c));
	cout<<"Maka akar dari "<<a<<"^2 + "<<b<<"^2 + "<<c<<"^2 = "<<hasil;
	return 0;
}
