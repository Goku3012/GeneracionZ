//===============================================
//===>Nombre del programa:Calcular la cantidad de moneda a ingresar
//===>Archivo:CuentaMoneda.cpp
//===>Autor:Montesdeoca Castillo Daniela Mishelle
//===>Fecha de elaboracion:02/05/2022
//===>Fecha de actualizacion:17/05/2022
//===============================================

#include<iostream>
using namespace std;
int main()
{
	int MD_n,MD_c=0,MD_c1=0,MD_c2=0;
	float MD_x,MD_a=0,MD_a1=0,MD_a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>MD_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>MD_x;
		MD_c=MD_c+1;
		MD_a=MD_a+MD_x;
		if(MD_x==(float)0.10){
			MD_c1=MD_c1+1;
			MD_a1=MD_a1+MD_x;
		}else{
			MD_c2=MD_c2+1;
			MD_a2=MD_a2+MD_x;
		}
	}while(MD_c<MD_n);

cout<<"//==============================================="<<endl;
cout<<"//===>Nombre del programa:Calcular la cantidad de moneda a ingresar"<<endl;
cout<<"//===>Archivo:CuentaMoneda.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl;
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad total en dinero contado: "<<MD_a<<endl;
	cout<<"Cantidad total de monedas de 0.10 ingresadas: "<<MD_c1<<endl;
	cout<<"Cantidad total de dinero de monedas de 0.10: "<<MD_a1<<endl;
	cout<<"Cantidad de monedas de 0.25 ingresadas: "<<MD_c2<<endl;
	cout<<"Cantidad total de dinero de monedas de 0.25: "<<MD_c2<<endl;
	return 0;
}
	     
