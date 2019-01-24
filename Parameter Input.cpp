#include <iostream>
using namespace std;

int tambahsatu (int x) {
	int hasil;
	hasil=x+1;
	return hasil;
}
int main () {
	int bilangan, hasil;
	cout<<"masukan sebuah bil bulat: ";
	cin>>bilangan;
	hasil=tambahsatu(bilangan);
	cout<<"nilai akhir: "<<hasil;
	return 0;
}
