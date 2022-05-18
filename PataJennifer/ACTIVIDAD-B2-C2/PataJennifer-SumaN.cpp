//===============================================================================================================
//============> Nombre del Programa: Suma de Varios Números
//============> Archivo: SumaN.cpp
//============> Autor: Pata Mina Jennifer Maibe
//============> Fecha de Creación: 23/04/2022
//============> Fecha de Actualización: 18/05/2022
//===============================================================================================================


#include<iostream>
using namespace std;
int main()
{

cout<<"//==============================================================================================================="<<endl;
cout<<"//============> Nombre del Programa: Suma de Varios Números"<<endl;
cout<<"//============> Archivo: SumaN.cpp"<<endl;
cout<<"//============> Autor: Pata Mina Jennifer Maibe"<<endl;
cout<<"//============> Fecha de Creación: 23/04/2022"<<endl;
cout<<"//============> Fecha de Actualización: 18/05/2022"<<endl;
cout<<"//==============================================================================================================="<<endl<<endl;

	int MJ_c=0,MJ_n;

	float MJ_a=0,MJ_x;

	cout<<"Ingrese la Cantidad de Números a Sumar: ";
	cin>>MJ_n;

	do{

	cout<<"Ingrese un Número: ";
	cin>>MJ_x;

	MJ_c=MJ_c+1;

	MJ_a=MJ_a+MJ_x;

	}while(MJ_c<MJ_n);

	cout<<"La Suma Total es: "<<MJ_a<<endl;

	return 0;
}
