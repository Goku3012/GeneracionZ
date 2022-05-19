#include<iostream>
using namespace std;
int main ()
{
	float m,a;
	cout<<"Ingrese el valor de M: ";
	cin>>m;
	cout<<"Ingrese el valor de A: ";
	cin>>a;
	if (m==a){
	cout<<"El valor de M: "<<m<<" es igual a A: "<<a<<endl;
	}else{
	if (m>a){
	cout<<"El valor de M: "<<m<<" es mayor a A: "<<a<<endl;
	}else{
	cout<<"El valor de A: "<<a<<" es mayor a M: "<<m<<endl;
	}
	}
	return 0;
}
