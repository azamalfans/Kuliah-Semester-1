#include <iostream>
#include <conio.h>
using namespace std;

main(){

int i;

	cout<<"------------------------------------------------------------ \n";
	cout<<"-- PROGRAM MENGHITUNG BILANGAN GANJIL YANG HABIS DIBAGI 5 --\n";
	cout<<"------------------------------------------------------------ \n";
	
	cout<< "\nBilangan ganjil yang tidak habis dibagi 5 : " <<endl;
	for (i=1; i<25; i++){
		if (i%2 !=0 && i%5 !=0) cout << i << ", ";
	}
	
cout<<endl<<endl<<endl;

return 0;
}
