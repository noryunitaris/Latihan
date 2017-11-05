#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Program Menentukan Jenis Bilangan"<<endl;
	cout<<"`````````````````````````````````"<<endl;
	cout<<""<<endl;
	cout<<"masukkan bilangan : ";cin>>a;
	cout<<""<<endl;
	if (a < 0)
	{
		cout<<"yang anda input adalah bilangan negatif"<<endl;
	}
	else if (a==0)
	{
		cout<<"yang anda input adalah bilangan nol"<<endl;
	}
	else if (a>0)
	{
		cout<<"yang anda input adalah bilangan positif"<<endl;
	}
	
	return 0;
}
