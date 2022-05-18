//========================================//===> Nombre del Programa:Comparación de 2 números
//===> Archivo: Compara.cpp
//===> Autor: Pata Mina Jennifer Maibe
//===> Fecha de Creación: 23/04/2022
//===> Fecha de Actualización: 17/05/2022
//========================================


#include<iostream>
using namespace std;
int main()
{

cout<<"//========================================"<<endl;
cout<<"//===> Nombre del Programa:Comparación de 2 números"<<endl;
cout<<"//===> Archivo: Compara.cpp"<<endl;
cout<<"//===> Autor: Pata Mina Jennifer Maibe"<<endl;
cout<<"//===> Fecha de Creación: 23/04/2022"<<endl;
cout<<"//===> Fecha de Actualización: 17/05/2022"<<endl;
cout<<"//========================================"<<endl<<endl;

	float MJ_x,MJ_y;
	cout<<"Ingrese el valor de X: ";
	cin>>MJ_x;
	cout<<"Ingrese el valor de Y: ";
	cin>>MJ_y;
	if(MJ_x==MJ_y){
	cout<<"El valor de X: "<<MJ_x<<"es igual a Y: "<<MJ_y<<endl;
	}else{
	if(MJ_x<MJ_y){
	cout<<"El valor de X: "<<MJ_x<<" es menor a Y: "<<MJ_y<<endl;
	}else{
	cout<<"El valor de Y: "<<MJ_y<<" es menor a X: "<<MJ_x<<endl;
	}
	}
	return 0;
}
