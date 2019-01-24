#include <iostream>
using namespace std; 
int partition(int a[],int l,int u) {
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    do {
        do i++; 
        while(a[i]<v&&i<=u);
        do j--;
        while(v<a[j]);
        if(i<j) {
			temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    } while(i<j);
    a[l]=a[j];
    a[j]=v;
    return(j);
}
void quick_sort(int a[],int l,int u) {
    int j;
    if(l<u) {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
int main() {
    int a[50],n,i;
	cout<<"QUICK SORT ASCENDING DAN DESCENDING"<<endl;
    cout<<"Banyak data yang akan di masukan : ";
    cin>>n;
    for(i=0;i<n;i++) {
    	cout<<"=> Masukan data ke- "<<i+1<<" : ";
        cin>>a[i];
	}
    quick_sort(a,0,n-1);
    cout<<endl<<"Ascending : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Descending : ";
    for(i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;        
}
