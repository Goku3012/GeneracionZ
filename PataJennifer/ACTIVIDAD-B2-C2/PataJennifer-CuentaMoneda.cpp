//===============================================================================================================
//=======> Nombre del Programa: Cuenta Monedas "DonNaza"
//=======> Archivo: CuentaMoneda.cpp
//=======> Autor: Pata Mina Jennifer Maibe
//=======> Fecha de Creación:23/04/2022
//=======> Fecha de Actualización:19/05/2022
//===============================================================================================================

#include<iostream>
using namespace std;
int main()
{

cout<<"//==============================================================================================================="<<endl;
cout<<"//=======> Nombre del Programa: Cuenta Monedas DonNaza"<<endl;
cout<<"//=======> Archivo: CuentaMoneda.cpp"<<endl;
cout<<"//=======> Autor: Pata Mina Jennifer Maibe"<<endl;
cout<<"//=======> Fecha de Creación:23/04/2022"<<endl;
cout<<"//=======> Fecha de Actualización:19/05/2022"<<endl;
cout<<"//==============================================================================================================="<<endl;

	int MJ_n,MJ_c=0,MJ_c1=0,MJ_c2=0,MJ_c3=0;

	float MJ_x,MJ_a=0,MJ_a1=0,MJ_a2=0,MJ_a3=0;
	
	cout<<"Bienvenidos al Cuenta Monedas Don Naza "<<endl<<endl;
	
	cout<<"Ingrese la Cantidad de monedas a contar: "<<endl<<endl;
	cin>>MJ_n;
	
	do{
	
		cout<<"Ingrese su valor en monedas (0.10,0.25,0.50):$ "<<endl;
	        cin>>MJ_x;

        	MJ_c=MJ_c+1;
         	MJ_a=MJ_a+MJ_x;
	
	if(MJ_x==(float)0.10){
	
		MJ_c1=MJ_c1+1;
		MJ_a1=MJ_a1+MJ_x;

	}else if(MJ_x==(float)0.25){
		
		MJ_c2=MJ_c2+1;
		MJ_a2=MJ_a2+MJ_x;

	}else{
		
		MJ_c3=MJ_c3+1;
		MJ_a3=MJ_a3+MJ_x;}

	}while(MJ_c<MJ_n)
	;
	cout<<"El Resultado Fue: "<<endl<<endl;
	
	cout<<"Total de Monedas Contadas: "<<MJ_c<<endl<<endl;
	cout<<"Valor Total en Efectivo:$ "<<MJ_a<<endl<<endl;
	cout<<"Cantidad de monedas de 0.10ctvs: "<<MJ_c1<<endl;
	cout<<"Valor en Efectivo de monedas de 0.10ctvs:$ "<<MJ_a1<<endl<<endl;
	cout<<"Cantidad de monedas de 0.25ctvs: "<<MJ_c2<<endl;
	cout<<"Valor en Efectivo de monedas de 0.25ctvs:$ "<<MJ_a2<<endl<<endl;
	cout<<"Cantidad de monedas de 0.50ctvs: "<<MJ_c3<<endl<<endl;
	cout<<"Valor en Efectivo de monedas de 0.50ctvs:$ "<<MJ_a3<<endl;

	return 0;
}
