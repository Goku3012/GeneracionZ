
//================================================
//==> Nombre del programa: Edad de una persona
//==> Archivo : Edad.cpp
//==>Autor: Tigua Rodriguez Mayra
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main()
{
	int MR_dd,MR_mm,MR_yy,MR_dd1,MR_mm1,MR_yy1,MR_da,MR_ma,MR_ya;
	
	cout<<"Ingresa la Fecha Actual: Dia Mes y Año "<<endl;
	cin>>MR_dd>>MR_mm>>MR_yy;
	cout<<"Ingresa la Fecha de Nacimiento: Dia Mes y Año "<<endl;
	cin>>MR_dd1>>MR_mm1>>MR_yy1;
	if(MR_dd<MR_dd1){
		MR_dd=MR_dd+30;
		MR_mm=MR_mm-1;
		MR_da=MR_dd-MR_dd1;
	}
	else{
		MR_da=MR_dd-MR_dd1;
	}
	if(MR_mm<MR_mm1){
		MR_mm=MR_mm+12;
		MR_yy=MR_yy-1;
		MR_ma=MR_mm-MR_mm1;
	}
	else{
		MR_ma=MR_mm-MR_mm1;
	}
	MR_ya=MR_yy-MR_yy1;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad de una persona"<<endl;
cout<<"//==> Archivo : Edad.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

	cout<<"Ustd Tiene "<<MR_ya<<" años "<<MR_ma<<" meses "<<" y "<<MR_da<<" dias "<<endl;
	return 0;
}
