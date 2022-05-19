//================================================
//==> Nombre del programa: Punto de vento de productos
//==> Archivo : PuntoVenta.cpp
//==>Autor: Quintero Orellana Netzaret Adonis
//==>Fecha de elaboración: 25/04/2022
//==>Fecha ultima actualización: 19/05/2022
//================================================

#include<iostream>
using namespace std;
int main()
{
	int ON_C=0,ON_P;
	float ON_A=0,ON_x,ON_Tb,ON_PIVA,ON_Pdsc,ON_IVA=0.12,ON_dsc=0.30,ON_VT;
	cout<<"Ingrese la Cantidad de Productos a Comprar: ";
	cin>>ON_P;
	do{
		cout<<"Ingrese el Valor del Producto: ";
		cin>>ON_x;
		ON_C=ON_C+1;
		ON_A=ON_A+ON_x;
		ON_PIVA=ON_A*ON_IVA;
		cout<<"El Valor del Iva de su compra es:$ "<<ON_PIVA<<endl;
		ON_Pdsc=ON_A*ON_dsc;
		cout<<"El Valor del Descuento de su Compra es:$ "<<ON_Pdsc<<endl;
		ON_Tb=ON_PIVA+ON_Pdsc;
	}while(ON_C<ON_P);
	if(ON_Tb==ON_A){
		cout<<"Su compra aplica a Descuento: "<<ON_Tb<<endl;
		ON_IVA=ON_Tb*ON_PIVA/100;
		ON_dsc=ON_Tb*ON_Pdsc/100;
	}else{
		ON_VT=ON_A+ON_PIVA-ON_Pdsc;

cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de vento de productos"<<endl;
cout<<"//==> Archivo : PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Netzaret Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 19/05/2022"<<endl;
cout<<"//================================================"<<endl;

		cout<<"El Valor Total de su Compra a pagar es:$ "<<ON_VT<<endl;
	}
	return 0;
}
