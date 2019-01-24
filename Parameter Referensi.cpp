#include <iostream>
using namespace std;

void kali2(int&x){
	x*=2;
	cout<<"nilai didalam fungsi: "<<x<<endl;
}
int main(){
	int bilangan;
	cout<<"masukkan sebuah bil bulat: ";
	cin>>bilangan;
	cout<<endl;
	cout<<"nilai awal: "<<bilangan<<endl;
	kali2 (bilangan);
	cout<<"nilai akhir: "<<bilangan<<endl;
	return 0;
}
