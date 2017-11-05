#include<iostream>
using namespace std;

int main(){
	int l,hl,g,p,gt,gb,jm,jam;
	cout<<"Program Gajih Jam Kerja"<<endl;
	cout<<""<<endl;
	cout<<"Berapa jam anda bekerja dalam 1 minggu : "; cin>>jam;
	cout<<"berapa gaji anda dalam 1 minggu : "; cin>>g;
	
	if (jam > 40)
	{
		system ("cls");
		l = jam - 40 ;
		jm = l*1.5;
		hl = g*jm;
		gt =  g - p;
		p = hl*0.15;
		gb = gt - (jam*40) +((g-40)  *jam *1.5);
		cout<<""<<endl;
		cout<<"Total jam lembur : " <<l<< " jam dalam seminggu"<<endl;
		cout<<"upah lembur :Rp "<<hl<<endl;
		cout<<"besar pajak :Rp "<<p<<endl;
		cout<<"gaji bersih anda anda adalah :Rp "<<gb<<endl;
	}
}
