#include<iostream>
using namespace std;
int main()
{
	int c=0,a;
	float s=0,z;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>a;
	do{
	cout<<"Ingrese un numero: ";
	cin>>z;
	c=c+1;
	s=s+z;
	}while(c<a);
	cout<<"La suma total es: "<<s<<endl;
	return 0;
}

