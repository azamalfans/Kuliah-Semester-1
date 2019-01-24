#include <iostream>
using namespace std;
int main(){
	int temp,i,j,n,nilai['n'];
	cout<<"INSERTION SORT ASCENDING DAN DESCENDING"<<endl;
	cout<<"Banyak data yang akan dimasukkan : ";
	cin>>n;
	for(int a=1;a<=n;a++) {
		cout<<"Masukkan data ke- "<<a<<" : " ;
		cin>>nilai[a];
	}
	cout<<"Data Awal : ";
	for(i=1;i<=n;i++) {
		cout<<nilai[i]<<" ";
	}
	for(i=2;i<=n;i++) {
		temp=nilai[i];
		j=i-1;
		while(nilai[j]>temp && j>=0){
			nilai[j+1]=nilai[j];
			j--;
		}
		nilai[j+1]=temp;
	}
	cout<<endl<<"Ascending : ";
	for(int i=1;i<=n;i++) {
		cout<<nilai[i]<<" ";
	}
	cout<<endl<<"Descending : ";
	for(int i=n;i>=1;i--) {
		cout<<nilai[i]<<" ";
	} return 0;
}
