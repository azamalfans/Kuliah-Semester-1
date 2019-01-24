#include <iostream>
using namespace std;

main(){
	int tabel[100][100],i,j,x,y;
	
	cout<<"=================================\n";
	cout<<" Menginputkan Matriks\n";
	cout<<"=================================\n";
	cout<<" Banyak baris= ";
	cin>>x;
	cout<<" Banyak kolom= ";
	cin>>y;
	
	for (i=0; i<x; i++){
		for(j=0; j<y; j++){
			cout<<"Masukan array elemen ke ["<<i+1<<","<<j+1<<"] : ";
			cin>>tabel[i][j];
		}
	}
	
	cout<<"Matriks yang anda masukan adalah \n";
	for (i=0; i<x; i++){
		cout<<" | ";
		for(j=0; j<y; j++){
			cout<<tabel[i][j]<<" ";
		}
		cout<<" | "<<endl;
	}
	return 0;
}
