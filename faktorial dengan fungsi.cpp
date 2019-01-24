#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int bil, n;
long int hasil;
cout<<"===Mencari Nilai Faktorial===";
cout<<"\n===dari Sebuah Bilangan ===";
cout<<"\n=============================";
cout<<"\n\nMasukan angka = ";
cin>> n;
hasil=1;
for(bil=n; bil>=1;bil--)
{ cout<<bil;
hasil*=bil;
if (bil>1)
cout<<" x ";
}
cout<<"\nJumlahnya = "<<hasil<<"\n";
getch();
}
