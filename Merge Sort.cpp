#include <iostream>
using namespace std;
void Merge(int *a, int low, int high, int mid) {
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high) {
		if (a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else {
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high) {
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++) {
		a[i] = temp[i-low];
	}
}
void MergeSort(int *a, int low, int high) {
	int mid;
	if (low < high) {
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}
int main() {
	int n, i, a[n];
	cout<<"MERGE SORT ASCENDING DAN DESCENDING"<<endl;
    cout<<"Banyak data yang akan di masukan : ";
    cin>>n;
	for(i = 0; i < n; i++) {
		cout<<"Masukkan data ke- "<<i+1<<" : ";
		cin>>a[i];
	}
	MergeSort(a, 0, n-1);
    cout<<endl<<"Ascending : ";
	for (i = 0; i < n; i++)
        cout<<" "<<a[i];
    cout<<endl<<"Descending : ";
	for (i=n-1; i>=0; i--)
        cout<<" "<<a[i];
	return 0;
}
