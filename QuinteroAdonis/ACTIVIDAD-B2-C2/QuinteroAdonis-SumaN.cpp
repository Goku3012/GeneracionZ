//================================================
//==> Nombre del programa: Suma de dos número
//==> Archivo : SumaN.cpp
//==>Autor: Quintero Orellana Nezareth Adonis
//==>Fecha de elaboración: 25/04/2022
//==>Fecha ultima actualización: 19/05/2020
//=================================================

#include<iostream>
using namespace std;
int main()
{
	int ON_C=0,ON_a;
	float ON_S=0,ON_Y;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>ON_a;
do{
	       cout<<"Ingrese un numero: ";
	       cin>>ON_Y;
	       ON_C=ON_C+1;
	       ON_S=ON_S+ON_Y;
	}while(ON_C<ON_a);

cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos número"<<endl;
cout<<"//==> Archivo : SumaN.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 19/05/2020"<<endl;
cout<<"//================================================="<<endl;

cout<<"La suma total es: "<<ON_S<<endl;
return 0;
}
