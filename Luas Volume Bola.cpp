#include <iostream>
using namespace std;
void bola (float r, float pi=3.14159265359){
	float luas=4*pi*r*r;
	cout<<"Luasnya adalah : "<<luas<<endl;
	float volume=(4*pi*r*r*r)/3;
	cout<<"Volumnya adalah : "<<volume<<endl; }
int main(){
	int r;
	cout<<"Masukkan jari jari bola : "<<endl;
	cin>>r;
	bola(r);
	return 0;
}
	

