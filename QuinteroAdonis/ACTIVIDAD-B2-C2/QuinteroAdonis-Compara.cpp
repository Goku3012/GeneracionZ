//================================================
//==> Nombre del programa:Comparacion de 2 numeros
//==> Archivo : Compara.cpp
//==>Autor: Quintero Orellana Nezareth Adonis
//==>Fecha de elaboración: 25/04/2022
//==>Fecha ultima actualización: 18/05/2022
//=================================================
#include<iostream>
using namespace std;
int main()
{
	
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa:Comparacion de 2 numeros"<<endl;
cout<<"//==> Archivo : Compara.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 18/05/2022"<<endl;
cout<<"//================================================="<<endl<<endl;
	float ON_x,ON_y;
	cout<<"Ingrese el valor de X: ";
	cin>>ON_x;
	cout<<"Ingrese el valor de Y: ";
	cin>>ON_y;
	if(ON_x==ON_y){
	cout<<"El valor de X: "<<ON_x<<"es igual a Y: "<<ON_y<<endl;
	}else{
	if(ON_x<ON_y){
	cout<<"El valor de X: "<<ON_x<<"es menor a Y: "<<ON_y<<endl;
	}else{
	cout<<"El valor de Y: "<<ON_y<<"es menor a X: "<<ON_x<<endl;
	}
	}
	return 0;
}
