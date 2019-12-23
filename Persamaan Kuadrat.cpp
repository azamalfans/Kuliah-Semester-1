#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
int a, b, c;
float x1, x2, D;

cout << " =============================\n";
cout << "  PROGRAM PERSAMAAN KUADRAT \n";
cout << " =============================\n\n";
cout << " Input Nilai a = "; cin >> a;
cout << " \n Input Nilai b = "; cin >> b;
cout << " \n Input Nilai c = "; cin >> c;

D=((b*b)-4*(a*c));

 if (a==0){
  cout<<"\n Bukan Persamaan Kuadrat.";
}

else if (D>0){
	
x1=((-b)+(sqrt(D)))/2*a;
x2=((-b)-(sqrt(D)))/2*a;
cout << " \n x1 = " <<x1<<endl;
cout << " x2 = " <<x2<<endl;

cout << "\n Akar-akarnya real dan berbeda.\n\n";
}

else if (D==0){
	
x1=(-b)/(2*a);
x2=x1;
cout << "\n x1 = " <<x1<<endl;
cout << " x2 = " <<x2<<endl;

cout << "\n Akar-akarnya real dan sama.\n\n";
}

else if (D<0) {
	
x1=(((-b)/2*a)+(sqrt(-D)/(2*a)));
x2=(((-b)/2*a)-(sqrt(-D)/(2*a)));
cout << " \n x1 = " <<x1<<endl;
cout << " x2 = " <<x2<<endl;

cout << "\n Akar Imaginer.\n\n";
}

cout << " =============================\n";
cout << "  CREATED BY ROZAKUL BARKHI \n";
cout << " =============================\n\n";

 return 0;
}
