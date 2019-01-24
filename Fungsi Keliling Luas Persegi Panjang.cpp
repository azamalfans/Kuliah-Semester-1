#include <iostream>
using namespace std;

float keliling (float p,float t){
    float kel;
    kel=(2*p)+(2*t);
    return kel;
}

void luas(float p, float t){
    float lluas;
    lluas=p*t;
    cout<<"luasnya adalah: "<<lluas<<endl;
}

int main()
{
    float p, t;
    cout << "menghitung luas dan keliling persegi panjang"<< endl<<endl;
    cout<<"masukkan panjang: ";
    cin>>p;
    cout<<"masukkan tinggi: ";
    cin>>t;
    cout<<endl;
    cout<<"kelilingnya adalah: "<<keliling(p,t)<<endl;
    luas(p,t);
    return 0;
}
