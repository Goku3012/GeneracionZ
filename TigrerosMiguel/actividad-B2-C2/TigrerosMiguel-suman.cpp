#include<iostream>
using namespace std;
int main()
{
	int C=0,a;
	float S=0,Y;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>a;
do {
		cout<<"Ingrese un numero: ";
		cin>>Y;
		C=C+1;
		S=S+Y;
	} while (C<a);
cout<<"La suma total es: "<<S<<endl;
return 0;
}
