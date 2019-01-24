  #include <iostream>
using namespace std;
int main()
{
	int i;

	cout<<"menampilkan bilangan ganjil"<<endl;
	cout<<"==========================="<<endl;
	cout<<"bilangan ganjil : ";

	for(i=1;i<=25;i++)
	{
		if(i%2!=0)cout<<i<<",";
	}
	return 0;
}
