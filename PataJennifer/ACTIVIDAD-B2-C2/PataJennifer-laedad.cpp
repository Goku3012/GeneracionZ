//===============================================================================================================
//========> Nombre del Programa: Calcular la edad de una Persona
//========> Archivo:laedad.cpp
//========> Autor: Pata Mina Jennifer Maibe
//========> Fecha de Creación:23/04/2022
//========> Fecha de Actualización:19/05/2022
//===============================================================================================================


#include<iostream>
using namespace std;
int main()
{

cout<<"//==============================================================================================================="<<endl;
cout<<"//========> Nombre del Programa: Calcular la edad de una Persona"<<endl;
cout<<"//========> Archivo:laedad.cpp"<<endl;
cout<<"//========> Autor: Pata Mina Jennifer Maibe"<<endl;
cout<<"//========> Fecha de Creación:23/04/2022"<<endl;
cout<<"//========> Fecha de Actualización:19/05/2022"<<endl;
cout<<"//==============================================================================================================="<<endl<<endl;

	int MJ_da,MJ_ma,MJ_aa,MJ_dn,MJ_mn,MJ_an,MJ_d,MJ_m,MJ_a;
	
	cout<<"Ingrese la Fecha Actual: Dia Mes  Año "<<endl;
	cin>>MJ_da>>MJ_ma>>MJ_aa;

	cout<<"Ingrese la Fecha de su  Nacimiento: Dia Mes  Año "<<endl;
	cin>>MJ_dn>>MJ_mn>>MJ_an;

	if(MJ_da<MJ_dn){
		MJ_da=MJ_da+30;
		MJ_ma=MJ_ma-1;
		MJ_d=MJ_da-MJ_dn;
	}
	else{
		MJ_d=MJ_da-MJ_dn;
	}
	if(MJ_ma<MJ_mn){
		MJ_ma=MJ_ma+12;
		MJ_aa=MJ_aa-1;
		MJ_m=MJ_ma-MJ_mn;
	}
	else{
		MJ_m=MJ_ma-MJ_mn;
	}
	MJ_a=MJ_aa-MJ_an;
	cout<<"Ustd Tiene "<<MJ_a<<" años "<<MJ_m<<" meses "<<" y "<<MJ_d<<" dias "<<endl;
	return 0;
}

