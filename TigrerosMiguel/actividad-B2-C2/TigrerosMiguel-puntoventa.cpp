//=========================================
//===>Nombre del programa:Compra de un producto
//===>Autor:Tigreros Estacio Miguel
//===>Archivo:puntoventa.cpp
//===>Fecha de elaboracion:03/05/2022
//===>Fecha de actualizacion:21/05/2022
//=========================================

#include<iostream>
using namespace std;
int main ()
{
	int TM_C=0,TM_P;
	float TM_A=0,TM_x,TM_Tb,TM_PIVA,TM_Pdsc,TM_IVA=0.12,TM_dsc=0.30,TM_VT;
	cout<<"Ingrese la cantidad de productos a comprar: ";
	cin>>TM_P;
	do {
		cout<<"Ingrese el valor del producto: ";
		cin>>TM_x;
		TM_C=TM_C+1;
		TM_A=TM_A+TM_x;
		TM_PIVA=TM_A*TM_IVA;
		cout<<"El valor del IVA de su compra es: $"<<TM_PIVA<<endl;
		TM_Pdsc=TM_A*TM_dsc;
		cout<<"El valor del descuento de su compra es: $"<<TM_Pdsc<<endl;
		TM_Tb=TM_PIVA*TM_Pdsc;
	}while (TM_C<TM_P);
	if (TM_Tb==TM_A) {

		cout<<"Su compra aplica a descuento: "<<TM_Tb<<endl;
		TM_IVA=TM_Tb*TM_PIVA/100;
		TM_dsc=TM_Tb*TM_Pdsc/100;
	} else { 
		cout<<"Su compra aplica a descuento: "<<TM_Tb<<endl;
		TM_IVA=TM_Tb*TM_PIVA/100;
		TM_dsc=TM_Tb*TM_Pdsc/100;
		TM_VT=TM_A+TM_PIVA-TM_Pdsc;
		TM_VT=TM_A+TM_PIVA-TM_Pdsc;	

cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Compra de un producto"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:puntoventa.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

		cout<<"El valor total de su compra a pagar es:$ "<<TM_VT<<endl;
	}

	return 0;
}
