//=====> Autores: Pata Jennifer,
//=====> Fecha de Creación: 22/05/2022
//=====> Fecha de Actualización:23/05/2022 

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

	cout<<" 1.- Programas de Pata Jennifer"<<endl;
	cout<<" 2.-"<<endl;
	cout<<" 3.-"<<endl;
	cout<<" 4.-"<<endl;
	cout<<" 5.-"<<endl;
	cout<<" 0.- Salir del menú"<<endl<<endl;
	cout<<" Ingrese su opción: "<<endl;
	cin>>op;
	switch(op){

		case 1:
			system("clear");
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
		cout<<"Opción NO permitida! "<<endl;
	}

	if(op==0){
		cout<<"Deseas Salir  de Generación Z (presiona enter): "<<endl;
	}

	flag=cin.ignore(0).get();
}while(op!=0);
	return(0);
}


