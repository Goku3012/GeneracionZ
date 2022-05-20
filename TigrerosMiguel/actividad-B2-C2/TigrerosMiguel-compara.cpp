//===============================================
//===>Nombre del programa: Comparacion de 2 numeros
//===>Archivo:compara.cpp
//===>Autor:Tigreros Estacio Miguel
//===>Fecha de elaboracion:03/05/2022
//===>Fecha de actualizacion:19/05/2022
//===============================================

#include <iostream>
using namespace std;
int main ()
{
	float TM_a,TM_b;
	cout<<"Ingrese el valor de A: ";
	cin>>TM_a;
	cout<<"Ingrese el valor de B: ";
	cin>>TM_b;
	if (TM_a==TM_b){
		cout<<"El valor de A: "<<TM_a<<"es igual a B: "<<TM_b<<endl;
	} else {
		if (TM_a<TM_b){

cout<<"//==============================================="<<endl;
cout<<"//===>Nombre del programa: Comparacion de 2 numeros"<<endl;
cout<<"//===>Archivo:compara.cpp"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:19/05/2022"<<endl;
cout<<"//==============================================="<<endl;
			cout<<"El valor de A: "<<TM_a<<"es menor a B: "<<TM_b<<endl;
		} else {
			cout<<"El valor de B: "<<TM_b<<"es menor a A: "<<TM_a<<endl;
		}
	}
	return 0;
}
