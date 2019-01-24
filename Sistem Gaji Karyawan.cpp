#include <iostream>
using namespace std;
int main () {
	char nama[20],gol,a,b,c,d;
	int jam,una,unb,unc,und,un,ul,nor,lem;
	cout<<" masukkan nama anda: ";
	cin>>nama;
	cout<<"\n masukkan golongan anda: ";
	cin>>gol;
	cout<<"\n masukkan jumlah jam kerja anda: ";
	cin>>jam;
	lem=jam%48;
	nor=jam-lem;
	ul=15000*lem;
	if (gol==a)
{	una=nor*8000;
	cout<<" nama anda: "<<nama;
	cout<<"\n upah anda adalah: "<<una;
	cout<<"\n upah lembur anda: "<<ul;
}
	else if (gol==b)
{	unb=nor*10000;
	cout<<" nama anda: "<<nama;
	cout<<"\n upah anda adalah: "<<unb;
	cout<<"\n upah lembur anda: "<<ul;
}
	else if (gol==c)
{	unc=nor*13000;
	cout<<" nama anda: "<<nama;
	cout<<"\n upah anda adalah: "<<unc;
	cout<<"\n upah lembur anda: "<<ul;
}
	else
{	und=nor*20000;
	cout<<" nama anda: "<<nama;
	cout<<"\n upah anda adalah: "<<und;
	cout<<"\n upah lembur anda: "<<ul;
}
	return 0;
}

