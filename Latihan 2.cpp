#include <iostream>
using namespace std;

int main(){
	char Pilih,P,S;
	int a, p,lb,t,l ;
	
	cout<<"PROGRAM MENGHITUNG LUAS"<<endl;
	cout<<"S = Segitiga" <<endl ;
	cout<<"P = Persegi Panjang" <<endl;
	cout<<"Pilih luas yang akan dihitung P atau S ? " ; cin>>Pilih;		


if(Pilih=='P'){
	system ("cls");
	cout << "Anda Menghitung luas persegi panjang" <<endl;
	cout <<""<<endl;
	cout <<"Berapa panjangnya ?"; cin>> p;
	cout <<"Berapa lebarnya  ?"; cin>> lb;
	l = p*lb;
	
	cout<< "Jadi luas persegi panjang adalah "<< l;
}
	else if (Pilih=='S'){
	system ("cls");
	cout<< "Anda Menghitung luas segitiga" <<endl;
	cout<<""<<endl;
	cout<<"Berapa alasnya ?"; cin>> a;
	cout<<"Berapa tingginya ?"; cin>> t;
	l = 0.5*a*t;
	
	cout<< "Jadi luas segitinya adalah "<< l;	
	}
	return 0;
}
