#include <iostream>
using namespace std;
int main () {	
	int a,b,c,d,e,f,g,h,i,j;
	cout<<"       Program menentukan pecahan mata uang kelipatan 25\n";
	cout<<"- uang :";
	cin>>a;
    cout<<"\n                   jawaban ";
    b=a/1000;
    c=a%1000;
    d=c/500;
    e=c%500;
    f=e/100;
    g=e%100;
    h=g/50;
    i=g%50;
    j=i/25;
	cout<<"\nPecahan 1000         = "<< b;
	cout<<" lembar/keping";
	cout<<"\nPecahan 500          = "<< d;
	cout<<" keping";
	cout<<"\nPecahan 100          = "<< f;
	cout<<" keping";
	cout<<"\nPecahan 50           = "<< h;
	cout<<" keping";
	cout<<"\nPecahan 25           = "<< j;
	cout<<" keping";
	return 0;
}
