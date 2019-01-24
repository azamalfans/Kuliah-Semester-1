#include <iostream>
#include <math.h>
using namespace std;
void kubus (int s) {
	int luas=6*s*s;
	cout<<"Luasnya adalah : "<<luas<<endl; 
	int volume=s*s*s;
	cout<<"Volumnya adalah : "<<volume<<endl; }
void bola (float r, float pi=3.14159265359){
	float luas=4*pi*r*r;
	cout<<"Luasnya adalah : "<<luas<<endl;
	float volume=(4*pi*r*r*r)/3;
	cout<<"Volumnya adalah : "<<volume<<endl; }
void kerucut(float t,float r,float pi=3.14159265359  ) {
	float luas=pi*r*(r+(sqrt(r*r+t*t)));
	cout<<"Luasnya adalah : "<<luas<<endl;
	float volume=(pi*r*r*t)/3;
	cout<<"Volumenya adalah : "<<volume<<endl; }
void tabung (float r,float t,float pi=3.14159265359){
	float luas=(2*pi*r*r)+(t*pi*2*r);
	cout<<"Luasnya adalah : "<<luas<<endl;
	float volume=pi*r*r*t;
	cout<<"Volumnya adalah : "<<volume<<endl; }
int main (){
	int pilih;
cout<<"1. Luas & Volume Kubus"<<endl;
cout<<"2. Luas & Volume Bola"<<endl;
cout<<"3. Luas & Volume Kerucut"<<endl;
cout<<"4. Luas & Volume Tabung"<<endl;
cout<<"Pilih tujuan hidupmu : ";
cin>>pilih;
cout<<endl;
switch (pilih)
{case 1:
	int s;
	cout<<"Masukkan sisi kubus: "<<endl;
	cin>>s;
	kubus(s);
	break;
	case 2:
	int rb;
	cout<<"Masukkan jari jari bola : "<<endl;
	cin>>rb;
	bola(rb);
	break;
	case 3:
	float rk,tk;
	cout<<"Masukkan jari jari kerucut : "<<endl;
	cin>>rk;
	cout<<"Masukkan tinggi kerucut : "<<endl;
	cin>>tk;
	kerucut(rk,tk);
	break;
	case 4:
	int rt,tt;
	cout<<"Masukkan jari jari tabung : "<<endl;
	cin>>rt;
	cout<<"Masukkan tinggi tabung : "<<endl;
	cin>>tt;
	tabung(rt,tt);
	default:
	cout<<"Jomblo memang selalu salah yah :v";
}
return 0;
}
