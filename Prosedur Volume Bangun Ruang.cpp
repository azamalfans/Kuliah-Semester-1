#include <iostream>
using namespace std;
void volume_limas()
{
double p, l, t;
cout<<"Volume limas segi empat"<<endl;
cout<<"Masukkan panjang: ";
cin>>p;
cout<<"Masukkan lebar: ";
cin>>l;
cout<<"Masukkan tinggi: ";
cin>>t;
cout<<"Volume limas segi empat: "<<p*l*t/3<<endl;
}
void volume_kerucut()
{
double r, t;
cout<<"Volume kerucut"<<endl;
cout<<"Masukkan jari2: ";
cin>>r;
cout<<"Masukkan t: ";
cin>>t;
cout<<"Volume kerucut: "<<3.14*r*r*t/3<<endl;
}
void volume_bola()
{
double r;
cout<<"Volume bola"<<endl;
cout<<"Masukkan nilai r= ";
cin>>r;
cout<<"Volume bola= "<<4*3.14*r*r*r/3<<endl;
}
int main()
{
volume_limas();
volume_kerucut();
volume_bola();
return 0;
}
