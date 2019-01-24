#include <iostream>
using namespace std;
void tabung (float r,float t,float pi=3.14159265359){
	float luas=(2*pi*r*r)+(t*pi*2*r);
	cout<<"Luasnya adalah : "<<luas<<endl;
	float volume=pi*r*r*t;
	cout<<"Volumnya adalah : "<<volume<<endl; }
int main(){
	int r,t;
	cout<<"Masukkan jari jari tabung : "<<endl;
	cin>>r;
	cout<<"Masukkan tinggi tabung : "<<endl;
	cin>>t;
	tabung(r,t);
	return 0;
}
