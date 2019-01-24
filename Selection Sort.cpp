#include<iostream>
using namespace std;
int main() {
    int i,j,n,loc,temp,min,a[30];
	cout<<"SELECTION SORT ASCENDING DAN DESCENDING"<<endl;
    cout<<"Banyak data yang akan di masukan : ";
    cin>>n;
    for(i=0;i<n;i++) {
        cout<<"Masukan data ke- "<<i+1<<" : ";
		cin>>a[i];
    } for(i=0;i<n-1;i++) {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++) {
            if(min>a[j]) {
                min=a[j];
                loc=j;
            }
        } temp=a[i];
    	a[i]=a[loc];
        a[loc]=temp;
    } cout<<endl<<"Ascending : ";
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    } cout<<endl<<"Descending : ";
    for(i=n-1;i>=0;i--) {
        cout<<a[i]<<" ";
    } return 0;
}
