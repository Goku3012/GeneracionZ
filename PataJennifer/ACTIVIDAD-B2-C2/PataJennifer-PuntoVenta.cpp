//===============================================================================================================
//==========> Nombre del Programa: Punto de Venta de varios Productos
//==========> Archivo: PuntoVenta.cpp
//==========> Autor: Pata Mina Jennifer Maibe
//==========> Fecha de Creación: 23/04/2022
//==========> Fecha de Actualización: 19/05/2022
//===============================================================================================================

#include<iostream>
using namespace std;
int main()
{

cout<<"//==============================================================================================================="<<endl;
cout<<"//==========> Nombre del Programa: Punto de Venta de varios Productos"<<endl;
cout<<"//==========> Archivo: PuntoVenta.cpp"<<endl;
cout<<"//==========> Autor: Pata Mina Jennifer Maibe"<<endl;
cout<<"//==========> Fecha de Creación: 23/04/2022"<<endl;
cout<<"//==========> Fecha de Actualización: 19/05/2022"<<endl;
cout<<"//==============================================================================================================="<<endl;

	int MJ_c=0,MJ_n;

	float MJ_a=0,MJ_x,MJ_Piva,MJ_Pdsc,MJ_iva=0.12,MJ_dsc=0.10,MJ_vf;

	cout<<"Ingrese la Cantidad de Productos a Comprar: ";
	cin>>MJ_n;
	do{
		cout<<"Ingrese el valor del Producto:$ ";
		cin>>MJ_x;

		MJ_c=MJ_c+1;
		MJ_a=MJ_a+MJ_x;
		MJ_Piva=MJ_a*MJ_iva;

		cout<<"El Valor del Iva de su compra es: $ "<<MJ_Piva<<endl;
	MJ_Pdsc=MJ_a*MJ_dsc;

		cout<<"El valor del Descuento de su Compra es: $ "<<MJ_Pdsc<<endl;
		
	}while(MJ_c<MJ_n);{

		MJ_vf=MJ_a+MJ_Piva-MJ_Pdsc;
		cout<<"El Valor Total de su Compra a pagar es: $ "<<MJ_vf<<endl;
	}
	return 0;
}
