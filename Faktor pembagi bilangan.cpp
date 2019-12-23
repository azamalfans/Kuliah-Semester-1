#include <iostream>
using namespace std;

int main () {
	int bil, i;

	cout<<"====================================="<<endl;
	cout<<"== PROGRAM PEMBAGI SEBUAH BILANGAN =="<<endl;
	cout<<"====================================="<<endl;
	
	
	cout<<"\nMasukkan sebuah bilangan bulat : ";
	cin>>bil;
	cout<<endl;
	cout<<"Pembagi bilangan "<< bil <<" adalah : \n"; 
	for (i=1; i<=bil; i++)
		if (bil % i == 0)
		cout << i << " ";
	 
		return 0;
}
