#include <iostream>
using namespace std;

void tambahsatu(int *x) {
	*x+=1;
}
int main (){
	int bilangan;
	cout<<"masukan sebuah bilangan bulat: ";
	cin>>bilangan;
	tambahsatu(&bilangan);
	cout<<"nilai akhir: "<<bilangan;
	return 0;
}
