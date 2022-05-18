//================================================
//==> Nombre del programa:Calcular la edad 
//==> Archivo : LaEdad.cpp
//==>Autor: Quintero Orellana Nezareth Adonis
//==>Fecha de elaboración: 25/04/2022
//==>Fecha ultima actualización: 18/05/2022
//================================================
#include<iostream>
using namespace std;
int main()
{
	int ON_dd,ON_mm,ON_aa,ON_yy,ON_dd1,ON_mm1,ON_aa1,ON_yy1,ON_da,ON_ma,ON_ya;

	cout<<"Ingresa la Fecha Actual:Dia Mes y Año "<<endl;
	cin>>ON_dd>>ON_mm>>ON_aa>>ON_yy;
	cout<<"Ingrese la Fecha de Nacimiento:Dia Mes y Año "<<endl;
	cin>>ON_dd1>>ON_mm1>>ON_aa1>>ON_yy1;
	if(ON_dd<ON_dd1){
		ON_dd=ON_dd+30;
		ON_mm=ON_mm-1;
		ON_da=ON_dd-ON_dd1;
	}
	else{
		ON_da=ON_dd-ON_dd1;
	}
	if(ON_mm<ON_mm1){
		ON_mm=ON_mm+12;
		ON_yy=ON_yy-1;
		ON_ma=ON_mm-ON_mm1;
	}
	else{
		ON_ma=ON_mm-ON_mm1;
	}
	ON_ya=ON_yy-ON_yy1;
	
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa:Calcular la edad"<<endl;
cout<<"//==> Archivo : LaEdad.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 18/05/2022"<<endl;
cout<<"//================================================"<<endl;

	cout<<"Usted tiene "<<ON_ya<<"años "<<ON_ma<<"meses "<<"y "<<ON_da<<"dias "<<endl;
	return 0;
}
