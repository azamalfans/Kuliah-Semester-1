#include <iostream>
using namespace std;
int main(){
	int nilai['n'],temp,n;
	//bubble sort ascending dan descending
	cout<<"banyak data yg akan dimasukkan : ";
	cin>>n;
	cout<<endl<<" "<<endl;
	for (int a=1; a<=n; a++){
		cout<<"masukkan data ke- "<<a<<" : ";
		cin>>nilai[a];
	}
	cout<<endl<<"data awal : ";
	for (int a=1; a<=n; a++){
		cout<<", "<<nilai[a];
	}
	for (int a=n-1; a>=1; a--){
		for (int b=1; b<=a; b++){
			if(nilai[b]>nilai[b+1]){
				temp=nilai[b+1];
				nilai[b+1]=nilai[b];
				nilai[b]=temp;
			}
		}
	}
	cout<<endl<<"ascending . . .";
	for (int a=1; a<=n; a++){
		cout<<endl<<nilai[a]<<", ";
	}
	cout<<endl<<"descending . . .";
	for (int a=n; a>=1; a--){
		cout<<endl<<nilai[a]<<", ";
	}	return 0;
}
