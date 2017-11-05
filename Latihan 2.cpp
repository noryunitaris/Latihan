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
}
