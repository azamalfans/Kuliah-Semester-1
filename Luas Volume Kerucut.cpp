#include <iostream>
#include <math.h>
using namespace std;
void kerucut(float t,float r,float pi=3.14159265359  ) {
	float luas=pi*r*(r+(sqrt(r*r+t*t)));
	cout<<"Luasnya adalah : "<<luas<<endl;
	float volume=(pi*r*r*t)/3;
	cout<<"Volumenya adalah : "<<volume<<endl; }
int main(){
	float r,t;
	cout<<"Masukkan jari jari kerucut : "<<endl;
	cin>>r;
	cout<<"Masukkan tinggi kerucut : "<<endl;
	cin>>t;
	kerucut(r,t);
	return 0;
	}
