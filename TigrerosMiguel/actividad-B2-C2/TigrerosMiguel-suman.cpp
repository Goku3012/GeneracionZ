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

cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Calcular la suma de dos numeros"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:suman.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

cout<<"La suma total es: "<<S<<endl;
return 0;
}
