//=======================================÷//====> Nombre del Programa: Suma de Varios Numeros
//====> Archivo: SumaN.cpp
//====> Autor: Pata Mina Jennifer Maibe
//====> Fecha de Creación: 23/04/2022
//====> Fecha de Actualización: 15/05/2022//========================================

#include<iostream>
using namespace std;
int main()
{
	
cout<<"//======================================="<<endl<<endl;
cout<<"//====> Nombre del Programa: Suma de Varios Numeros"<<endl;
cout<<"//====> Archivo: SumaN.cpp"<<endl;
cout<<"//====> Autor: Pata Mina Jennifer Maibe"<<endl;
cout<<"//====> Fecha de Creación: 23/04/2022"<<endl;
cout<<"//====> Fecha de Actualización: 15/05/2022"<<endl;

cout<<"//========================================"<<endl<<endl;

#include<iostream>
	int MJ_C=0,MJ_a;
	float MJ_S=0,MJ_z;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>MJ_a;
	do{
	cout<<"Ingrese un numero: ";
	cin>>MJ_z;
	MJ_C=MJ_C+1;
	MJ_S=MJ_S+MJ_z;
	}while(MJ_C<MJ_a);
	cout<<"La suma total es: "<<MJ_S<<endl;
	return 0;
}
