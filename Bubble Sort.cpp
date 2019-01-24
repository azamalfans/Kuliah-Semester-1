#include <iostream>
using namespace std;
int main() {
	int nilai['n'], temp, n;
	cout<<"BUBBLE SORT ASCENDING DAN DESCENDING"<<endl;
	cout<<"Banyak data yang akan di masukan : ";
	cin>>n;
	for (int a=1; a<=n; a++) {
		cout<<"=> Masukan data ke- "<<a<<" : ";
		cin>>nilai[a];
	}
	cout<<endl<<"Data Awal : ";
	for(int a=1; a<=n; a++) {
		cout<<nilai[a]<<" ";
	}
	for(int a=n-1; a>=1; a--) {
		for(int b=1; b<=a; b++) {
			if(nilai[b]>nilai[b+1]) {
				temp=nilai[b+1];
				nilai[b+1]=nilai[b];
				nilai[b]=temp;
			}
		}
	}
	cout<<endl<<"Ascending : ";
	for (int a=1; a<=n; a++) {
		cout<<nilai[a]<<" ";
	}
	cout<<endl<<"Descending : ";
	for (int a=n; a>=1; a--) {
		cout<<nilai[a]<<" ";
	} return 0;
}
