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
	int n,c=0,c1=0,c2=0;
	float x,a=0,a1=0,a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda(0.10,0.25):$ ";
		cin>>x;
		c=c+1;
		a=a+x;
		if(x==(float)0.10){
			c1=c1+1;
			a1=a1+x;
		}else{
			c2=c2+1;
			a2=a2+x;
		}
		
	}while(c<n);
	
cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Comparacion de numeros"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:cuentamoneda.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/202"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

cout<<"El reaultado fue: "<<endl;
cout<<"cantidad de monedas ingresadas: "<<c<<endl;
cout<<"cantidad de donero contado:$ "<<a<<endl;
cout<<"cantidad de monedas de 0.10ctvs ingresadas: "<<c1<<endl;
cout<<"cantidad total en dinero de monedas de 0.10ctvs:$ "<<a1<<endl;
cout<<"cantidad de monedas de 0.25ctvs ingresadas: "<<c2<<endl;
cout<<"cantodad total en dinero de monedas de 0.25ctvs:$ "<<a2<<endl;
return 0;
}


