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
int dd,mm,yy,dd1,mm1,yy1,da,ma,ya;
		cout<<"Ingrese la fecha actual: Dia mes y año"<<endl;
		cin>>dd>>mm>>yy;
			cout<<"Ingrese la fecha de nacimiento:Dia Mes y año"<<endl;
			cin>>dd1>>mm1>>yy1;
			if (dd<dd1) {
				dd=dd+30;
				mm=mm-1,
					da=dd-dd1;
			}
			else {
				da=dd-dd1;
			}
		if (mm<mm1) {
			mm=mm+12; 
			yy=yy-1;
			ma=mm-mm1;
		}
		else {
			ma=mm-mm1;
		}
		ya=yy-yy1;

cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Calcular la edad de una persona"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:laedad.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

		cout<<"Usted tiene "<<ya<<" años "<<ma<<" meses "<< "y"<<da<<" dias "<<endl;
		return 0;
	}
