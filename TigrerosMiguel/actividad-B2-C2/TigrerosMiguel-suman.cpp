//=========================================
//===>Nombre del programa:Calcular la suma de dos numeros
//===>Autor:Tigreros Estacio Miguel
//===>Archivo:suman.cpp
//===>Fecha de elaboracion:03/05/2022
//===>Fecha de actualizacion:21/05/2022
//=========================================

#include<iostream>
using namespace std;
int main()
{
	int TM_C=0,TM_a;
	float TM_S=0,TM_Y;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>TM_a;
do {
		cout<<"Ingrese un numero: ";
		cin>>TM_Y;
		TM_C=TM_C+1;
		TM_S=TM_S+TM_Y;
	} while (TM_C<TM_a);

cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Calcular la suma de dos numeros"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:suman.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

cout<<"La suma total es: "<<TM_S<<endl;
return 0;
}
