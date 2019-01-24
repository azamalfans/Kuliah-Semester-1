#include <iostream>
using namespace std;

void tambahsatu(int x, int *hasil) {
	*hasil=x+1;
}
int main (){
	int bilangan, hasil;
	cout<<"masukan sebuah bilangan bulat: ";
	cin>>bilangan;
	tambahsatu(bilangan, &hasil);
	cout<<"nilai akhir: "<<hasil;
	return 0;
}
