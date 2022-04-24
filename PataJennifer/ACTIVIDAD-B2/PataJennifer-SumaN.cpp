#include<iostream>
using namespace std;
int main()
{
	int C=0,a;
	float S=0,y;
	cout<<"Ingrese cantidad a sumar: ";
	cin>>a;
	do{
		cout<<"Ingrese un numero: ";
		cin>>y;
		C=C+1;
		S=S+y;
	}while(C<a);
	cout<<"La suma total ea: "<<S<<endl;
	return 0;
}
