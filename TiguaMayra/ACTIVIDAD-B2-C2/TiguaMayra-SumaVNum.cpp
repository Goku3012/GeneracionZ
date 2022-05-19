#include<iostream>
using namespace std;
int main()
{
	int A=0,m;
	float T=0,r;
	cout<<"Ingresar la cantidad de numeros a sumar: ";
	cin>>m;
	do{
	cout<<"Ingresar un numero: ";
	cin>>r;
	A=A+1;
	T=T+r;
	}
	while(A<m);
	cout<<"La suma total es: "<<T<<endl;
	return 0;
}
