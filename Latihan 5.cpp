#include <iostream>
using namespace std;

int main(){
	int t,b,h;
	cout<<"        Using the Criteria       "<<endl;
	cout<<"+++++++++++++++++++++++++++++++++"<<endl;
	cout<<""<<endl;
	cout<<"masukkan tinggi badan(cm) : "; cin>>t;
	cout<<"masukkan berat badan(kg) : "; cin>>b;
	cout<<""<<endl;
	
	if (b<(t/2.5))
	{
		cout<<"Criteria Underwight"<<endl;
	}
	else if (t/2.5 <= b <= t/2.3)
	{
		cout<<"Criteria Normal"<< endl;
	}
	else if ((t/2.3)<b) 
	cout<<"Criteria Overwight"<<endl;
}
