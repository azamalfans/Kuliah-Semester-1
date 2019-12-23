#include <iostream>
using namespace std;
int main (){
    int adiv,amod,bdiv,bmod,cdiv,cmod,ddiv,dmod,ediv,emod,x;

    cout<<"===============================\n";
    cout<<"         KONVERSI UANG\n";
    cout<<"         Kelipatan 25\n";
    cout<<"===============================\n\n";
    cout<<"- Masukkan Jumlah uang kamu ";
    cout<<" \n  Rp. ";
     cin>>x;
     adiv=x/1000; //rp 1000
     amod=x%1000; //rp 1000

     bdiv=amod/500; //rp 500
     bmod=amod%500; //rp 500

     cdiv=bmod/100; //rp 100
     cmod=bmod%100; //rp 100

     ddiv=cmod/50; //rp 50
     dmod=cmod%50; //rp 50

     ediv=dmod/25; //rp 25
     emod=dmod%25; //rp 25

     cout<<"\n-------------------------------\n";
     cout<<"        HASIL KONVERSI\n";
     cout<<"-------------------------------\n";
     cout<<"\n   - Uang 1000 ada = "<< adiv;
     cout<<"\n   - Uang 500  ada = "<< bdiv;
     cout<<"\n   - Uang 100  ada = "<< cdiv;
     cout<<"\n   - Uang 50   ada = "<< ddiv;
     cout<<"\n   - Uang 25   ada = "<< ediv;
     cout<<"\n\n-------------------------------";
     cout<<"\n        DIBUAT OLEH : ";
     cout<<"\n        -------------";
     cout<<"\n   - Rozak Ilham Aditya ";
     cout<<"\n   - Muhammad Ulil Albab ";
     cout<<"\n   - Rozakul Barkhi ";
     cout<<"\n   - Ar Rasyid Yudha Pradana ";
     cout<<"\n-------------------------------";

    return 0;
}
