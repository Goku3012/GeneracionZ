//===============================================
//===>Nombre del programa:Calcular la edad de una persona
//===>Archivo:Laedad.cpp
//===>Autor:Montesdeoca Castillo Daniela Mishelle
//===>Fecha de elaboracion:02/05/2022
//===>Fecha de actualizacion:17/05/2022
//===============================================

#include<iostream>
using namespace std;
int main()
{ 
	int MD_aa,MD_ma,MD_da,MD_an,MD_mn,MD_dn,MD_a,MD_m,MD_d;
	cout<<"Ingrese la fecha actual (aaaa mn dd): ";
	cin>>MD_aa>>MD_mn>>MD_da;
	cout<<"Ingrese la fecha de nacimiento (aaaa mn dd): ";
	cin>>MD_an>>MD_mn>>MD_dn;
	if(MD_da>=MD_dn){
		MD_d=MD_da-MD_dn;
	}else{
		MD_dn=MD_dn+30;
		MD_ma=MD_ma-1;
		MD_d=MD_da-MD_dn;
	}
	if(MD_ma>=MD_mn){
		MD_m=MD_ma-MD_mn;
	}else{
		MD_mn=MD_mn+12;
		MD_aa=MD_aa-1;
		MD_m=MD_ma-MD_mn;
	}
	MD_a=MD_aa-MD_an;

cout<<"//==============================================="<<endl;
cout<<"//===>Nombre del programa:Calcular la edad de una persona"<<endl;
cout<<"//===>Archivo:Laedad.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl;

	cout<<"La persona tiene "<<MD_a<<" años "<<MD_m<<" meses y "<<MD_d<<" dias ";
	return 0;
}
