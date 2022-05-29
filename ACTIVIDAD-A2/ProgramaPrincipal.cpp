//=====> Autores: Pata Jennifer,Quintero Adonis,Tigua Mayra
//=====> Fecha de Creación: 22/05/2022
//=====> Fecha de Actualización:29/05/2022 

#include<iostream>
#include<stdlib.h>
using namespace std;
#include"PJ_libreria.h"
#include"ON_libreria.h"
#include"TM_libreria.h"
#include"MD_libreria.h"

int main()

{
	int op,flag;

	do{
		system("clear");

	cout<<"+*+*+*+* Generación Z  +*+*+*+*"<<endl<<endl;

	cout<<" 1.- Programas de Pata Jennifer"<<endl;
	cout<<" 2.- Programas de Quintero Adonis"<<endl;
	cout<<" 3.- Programas de Tigua Mayra"<<endl;
	cout<<" 4.- Programas de Montesdeoca Daniela"<<endl;
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
			system("clear");
			ON_menu();
			break;

		case 3:
			system("clear");
			TM_menu();
			break;
		
		case 4:

			system("clear");
			MD_menu();
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
