#include <iostream>
using namespace std;
int main (){
    int r,d;
    float phi=3.14,keliling,luas;
    cout<<"===============================\n";
    cout<<"           KELOMPOK 5\n";
    cout<<"===============================\n\n";
    cout<<"Program Luas Keliling Lingkaran\n";
    cout<<"-------------------------------\n\n";
    cout<<"- Jari-Jari Lingkaran :";
     cin>>r;

    cout<<"\n-------------------------------";
    cout<<"\n            JAWABAN";
    cout<<"\n-------------------------------";
    d=r+r;
    luas=phi*r*r;
    keliling=phi*d;
    cout<<"\n- Phi Menggunakan    = "<< phi;
    cout<<"\n- Luas lingkaran     = "<< luas;
    cout<<"\n- keliling lingkaran = "<< keliling;
    cout<<"\n-------------------------------";
    return 0;
}
