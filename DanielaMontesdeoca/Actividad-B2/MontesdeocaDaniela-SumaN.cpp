#include<iostream>
using namespace std;
int main()
{ 
	int c=0,a;
	float s=0,b;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>a;
	do{
		cout<<"Ingrese un nunero: ";
		cin>>b;
		c=c+1;
		s=s+b;
	}while(c<a);
	cout<<"La suma total es: "<<s<<endl;
	return 0;
}
