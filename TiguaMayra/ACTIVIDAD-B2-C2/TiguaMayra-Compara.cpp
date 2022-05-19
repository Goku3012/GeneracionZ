
//================================================
//==> Nombre del programa: Comparacion de dos numeros
//==> Archivo : Compara.cpp
//==>Autor: Tigua Rodriguez Mayra
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main ()
{
	float MR_m,MR_a;
	cout<<"Ingrese el valor de M: ";
	cin>>MR_m;
	cout<<"Ingrese el valor de A: ";
	cin>>MR_a;
	if (MR_m==MR_a){
	cout<<"El valor de M: "<<MR_m<<" es igual a A: "<<MR_a<<endl;
	}else{
	if (MR_m>MR_a){

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos numeros"<<endl;
cout<<"//==> Archivo : Compara.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

	cout<<"El valor de M: "<<MR_m<<" es mayor a A: "<<MR_a<<endl;
	}else{
	cout<<"El valor de A: "<<MR_a<<" es mayor a M: "<<MR_m<<endl;
	}
	}
	return 0;
}
