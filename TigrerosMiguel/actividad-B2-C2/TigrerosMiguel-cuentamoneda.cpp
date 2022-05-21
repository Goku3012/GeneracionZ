//=========================================
//===>Nombre del programa:Comparacion de numeros
//===>Autor:Tigreros Estacio Miguel
//===>Archivo:cuentamoneda.cpp
//===>Fecha de elaboracion:03/05/2022
//===>Fecha de actualizacion:21/05/2022
//=========================================

#include<iostream>
using namespace std; 
int main()
{
	int TM_n,TM_c=0,TM_c1=0,TM_c2=0;
	float TM_x,TM_a=0,TM_a1=0,TM_a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>TM_n;
	do{
		cout<<"Ingrese el valor de la moneda(0.10,0.25):$ ";
		cin>>TM_x;
		TM_c=TM_c+1;
		TM_a=TM_a+TM_x;
		if(TM_x==(float)0.10){
			TM_c1=TM_c1+1;
			TM_a1=TM_a1+TM_x;
		}else{
			TM_c2=TM_c2+1;
			TM_a2=TM_a2+TM_x;
		}
		
	}while(TM_c<TM_n);
	
cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Comparacion de numeros"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:cuentamoneda.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/202"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

cout<<"El reaultado fue: "<<endl;
cout<<"cantidad de monedas ingresadas: "<<TM_c<<endl;
cout<<"cantidad de donero contado:$ "<<TM_a<<endl;
cout<<"cantidad de monedas de 0.10ctvs ingresadas: "<<TM_c1<<endl;
cout<<"cantidad total en dinero de monedas de 0.10ctvs:$ "<<TM_a1<<endl;
cout<<"cantidad de monedas de 0.25ctvs ingresadas: "<<TM_c2<<endl;
cout<<"cantodad total en dinero de monedas de 0.25ctvs:$ "<<TM_a2<<endl;
return 0;
}


