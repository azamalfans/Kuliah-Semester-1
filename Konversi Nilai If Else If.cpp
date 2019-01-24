#include <iostream>
using namespace std;
int main () {
	int x;
	cout<<"masukkan nilai anda: ";
	cin>>x;
	cout<<"\n";
	if (x>=86)
	cout<<"nilai anda A";
	else if (x>=75)
	cout<<"nilai anda B";
	else if (x>=65)
	cout<<"nilai anda C";
	else if (x>=55)
	cout<<"nilai anda D";
	else if (x<55)
	cout<<"nilai anda E";
	return 0;
}

