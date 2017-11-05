#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x,y,p,selisih;
	cout<<" masukkan bilangan x : "; cin>>x;
	cout<<" masukkan bilangan y : "; cin>>y;
	
if (x>y){
	selisih=x-y;
	
	cout<<"selisih Nilai X dan Y yaitu "<<selisih*1;;
}

else if (y>x){
	selisih=y-x;
	
	cout<<"selisih Nilai Y dan X yaitu "<<selisih*1;;
}
	return 0;
}
