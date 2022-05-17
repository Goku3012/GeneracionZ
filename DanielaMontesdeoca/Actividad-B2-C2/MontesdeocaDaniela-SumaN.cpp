//===============================================
//===>Nombre del programa: Suma de 2 nuneros
//===>Archivo:SumaN.cpp
//===>Autor:Montesdeoca Castillo Daniela Mishelle
//===>Fecha de elaboracion:02/05/2022
//===>Fecha de actualizacion:17/05/2022
//===============================================

#include<iostream>
using namespace std;
int main()
{ 
	int MD_c=0,MD_a;
	float MD_s=0,MD_b;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>MD_a;
	do{
		cout<<"Ingrese un nunero: ";
		cin>>MD_b;
		MD_c=MD_c+1;
		MD_s=MD_s+MD_b;
	}while(MD_c<MD_a);

cout<<"//==============================================="<<endl;
cout<<"//===>Nombre del programa: Suma de 2 nuneros"<<endl;
cout<<"//===>Archivo:SumaN.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl;
	cout<<"La suma total es: "<<MD_s<<endl;
	return 0;
}
