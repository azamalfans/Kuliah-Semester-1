#include <iostream>
using namespace std;
main () {
	int bil[100],x,batas,jum=0,max,min,angka,nmax,nmin;
	float rata;
	
	cout << "==========================================================\n";
	cout << "PROGRAM MENCARI RATA-RATA, JUMLAH, NILAI MIN DAN NILAI MAX\n";
	cout << "==========================================================\n";
	cout << endl;
	cout << "Masukkan banyak bilangan yang akan diinput = ";
	cin>>batas;
	for(x=1; x<=batas; x++){
		cout << "Masukkan bilangan "<<x<<" = ";
		cin >> bil [x];
		jum+=bil[x];
		max=bil[x];
		
		if (x==1){
			min=bil[x];
		}
		if (max>=nmax){
			nmax=max;
		}
		if (max<=min){
			nmin=max;
		}
	}
	rata=jum/batas;
	cout << "\nNilai terkecil   = " << nmin;
	cout << "\nNilai terbesar   = " << nmax;
	cout << "\nJumlahnya adalah = " << jum;
	cout << "\nRata-ratanya     = " << rata;
	
	return 0;
	
}
