#include <iostream>

using namespace std;

main() {

	float jum, bil;
	
	cout<<" ==================================\n";
	cout<<" Program menghitung jumlah deret \n";
	cout<<" ==================================\n"<<endl;
	
	for (bil=1; bil<=99; bil++) {
	cout<<bil<<"/"<<bil+1;
	jum=jum+(bil/(bil+1));
	if (bil<99) {
	cout<<" + ";
	}
	
}

	cout<<" = "<<jum;
	cout<<endl<<endl;
	
	return 0;
}
