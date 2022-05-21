//=========================================
//===>Nombre del programa:Calcular la edad de una persona
//===>Autor:Tigreros Estacio Miguel
//===>Archivo:laedad.cpp
//===>Fecha de elaboracion:03/05/2022
//===>Fecha de actualizacion:21/05/2022
//=========================================

#include<iostream>
using namespace std;
int main ()
{
int TM_dd,TM_mm,TM_yy,TM_dd1,TM_mm1,TM_yy1,TM_da,TM_ma,TM_ya;
		cout<<"Ingrese la fecha actual: Dia mes y año"<<endl;
		cin>>TM_dd>>TM_mm>>TM_yy;
			cout<<"Ingrese la fecha de nacimiento:Dia Mes y año"<<endl;
			cin>>TM_dd1>>TM_mm1>>TM_yy1;
			if (TM_dd<TM_dd1) {
				TM_dd=TM_dd+30;
				TM_mm=TM_mm-1,
					TM_da=TM_dd-TM_dd1;
			}
			else {
				TM_da=TM_dd-TM_dd1;
			}
		if (TM_mm<TM_mm1) {
			TM_mm=TM_mm+12; 
			TM_yy=TM_yy-1;
			TM_ma=TM_mm-TM_mm1;
		}
		else {
			TM_ma=TM_mm-TM_mm1;
		}
		TM_ya=TM_yy-TM_yy1;

cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Calcular la edad de una persona"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:laedad.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

		cout<<"Usted tiene "<<TM_ya<<" años "<<TM_ma<<" meses "<< "y"<<TM_da<<" dias "<<endl;
		return 0;
	}
