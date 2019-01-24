#include <iostream>
using namespace std;
int faktorial(int x) {
	if (x==1) return(1);
	return x * faktorial(x-1);
}
int main(){
	int bilangan, hasil;
	cout<<"masukkan bilangan: ";
	cin>>bilangan;
	hasil=faktorial(bilangan);
	cout<<bilangan<<"! = "<<hasil;
	return 0;
}
