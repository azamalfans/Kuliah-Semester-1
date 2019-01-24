#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
float x,n,min,max,bil,i,jum,rata2;
jum=0;
cout<<"===-----------------------------------------------==="<<endl;
cout<<"|MENGHITUNG NILAI RATA-RATA, MINIMAL DAN MAKSIMAL|"<<endl;
cout<<"===-----------------------------------------------==="<<endl;
cout<<"Masukkan jumlah bilangan : "; cin>>n;
cout<<"masukan bilangan ke-1: "; cin>>x;
jum=x;
for(i=2;i<=n;i++){ 
    cout<<"Masukan bilangan ke-"<<i<<": "; cin>>bil;
 jum+=bil;
 min=x;
 max=x;
   if ((bil>x)){
       max=bil;
   } else if((bil<x)){
       min=bil;
   }
   rata2=jum/n;
}
cout<<endl;
cout<<"Nilai jumlahnya adalah : "<<jum<<endl;
cout<<"Nilai maximal adalah : "<<max<<endl;
cout<<"Nilai minimal adalah : "<<min<<endl;
cout<<"Nilai rata-rata adalah : "<<rata2<<endl;
getch();

}
