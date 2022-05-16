#include<iostream>
using namespace std;
int main()
{
	int C=0,a;
	float S=0,z;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>a;
	do{
	cout<<"Ingrese un numero: ";
	cin>>z;
	C=C+1;
	S=S+z;
	}while(C<a);
	cout<<"La suma total es: "<<S<<endl;
	return 0;
}
