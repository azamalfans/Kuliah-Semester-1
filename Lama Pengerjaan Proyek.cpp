#include <iostream>
using namespace std;
int main (){
    int t,ht,b,h,x;

    cout<<"===============================\n";
    cout<<"     Lama Pengerjaan Proyek\n";
    cout<<"===============================\n";
    cout<<" - Berapa Hari ? : ";
    cin>>x;
     t=x/365;
     ht=x%365;
     b=ht/30;
     h=ht%30;
     cout<<"\n-------------------------------\n";
     cout<<"            Hasil\n";
     cout<<"-------------------------------";
     cout<<"\n- Berapa Tahun   = "<< t;
     cout<<"\n- Berapa Bulan   = "<< b;
     cout<<"\n- Berapa Hari    = "<< h;
     cout<<"\n-------------------------------";

    return 0;
}
