//=====> Autores: Pata Jennifer,
//=====> Fecha de Creación: 22 05/2022
//=====> Fecha de Actualización: 

#include<iostream>
#include<stdlib.h>
using namespace std;

#include"PJ_libreria.h"



int main()

{
	int op,flag;

	do{
		system("clear");

	cout<<"+*+*+*+* Generación Z  +*+*+*+*"<<endl<<endl;

	cout<<" 1.- Programas de Pata Jennifer \n.";
	cout<<" 2.-";
	cout<<" 3.-";
	cout<<" 4.-";
	cout<<" 5.-";

	cout<<" 0.- Salir del menú \n.";
	cout<<" Ingrese su opción: "<<endl;
	cin>>op;
	switch(op){

		case 1:
			PJ_menu();
			break;

		case 2:

			break;

		case 3:

			break;
		
		case 4:

			break;

		case 5:

			break;
	}

	if(op!=0 && op>5){
		cout<<"\nopción NO permitida! \n";
	}

	if(op==0){
		cout<<"Deseas Salir  de GeneraciónZ (presiona enter): "<<endl;
	}

	flag=cin.ignore().get();
}while(op!=0);
	return(0);
}

 
