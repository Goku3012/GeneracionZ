//================================================
//==> Nombre del programa:Calcular la cantidad de moneda a ingresar
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Quintero Orellana Nezareth Adonis
//==>Fecha de elaboración: 25/04/2022
//==>Fecha ultima actualización: 18/05/2022
//=================================================
#include<iostream>
using namespace std;
int main()
{
	
	int ON_n,ON_c=0,ON_c1=0,ON_c2=0;
	float ON_x,ON_a=0,ON_a1=0,ON_a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>ON_n;
	do{
		cout<<"Ingresar el valor de la moneda (0.10,0.25): ";
	cin>>ON_x;
	ON_c=ON_c+1;
	ON_a=ON_a+ON_x;
	if(ON_x==(float)0.10){
		ON_c1=ON_c1+1;
		ON_a1=ON_a1+ON_x;
	}else{
		ON_c2=ON_c2+1;
		ON_a2=ON_a2+ON_x;
	 }

	}while(ON_c<ON_n);
	
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa:Calcular la cantidad de moneda a ingresar"<<endl;
cout<<"//==> Archivo : CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 18/05/2022"<<endl;
cout<<"//================================================="<<endl;
	cout<<"El resultado fue: "<<endl;
	
	cout<<"cantidad de monedas ingresadas: "<<ON_c<<endl;
	cout<<"cantidad total en dinero contado: "<<ON_a<<endl;
	cout<<"cantidad de monedas de 0.10 ingresadas: "<<ON_c1<<endl;
	cout<<"cantidad total en dinero de monedas de 0.10: "<<ON_a1<<endl;
	cout<<"cantidad de monedas de 0.25 ingresadas: "
<<ON_c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25: "<<ON_a2<<endl;

	return 0;
}
