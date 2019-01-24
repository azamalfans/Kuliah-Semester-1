#include <iostream>
using namespace std;
void kubus (int s) {
	int luas=6*s*s;
	cout<<"Luasnya adalah : "<<luas<<endl; 
	int volume=s*s*s;
	cout<<"Volumnya adalah : "<<volume<<endl; }
int main(){
	int s;
	cout<<"Masukkan sisi kubus: "<<endl;
	cin>>s;
	kubus(s);
	return 0;
}

