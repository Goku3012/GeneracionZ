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
	int C=0,P;
	float A=0,x,Tb,PIVA,Pdsc,IVA=0.12,dsc=0.30,VT;
	cout<<"Ingrese la cantidad de productos a comprar: ";
	cin>>P;
	do {
		cout<<"Ingrese el valor del producto: ";
		cin>>x;
		C=C+1;
		A=A+x;
		PIVA=A*IVA;
		cout<<"El valor del IVA de su compra es: $"<<PIVA<<endl;
		Pdsc=A*dsc;
		cout<<"El valor del descuento de su compra es: $"<<Pdsc<<endl;
		Tb=PIVA*Pdsc;
	}while (C<P);
	if (Tb==A) {

		cout<<"Su compra aplica a descuento: "<<Tb<<endl;
		IVA=Tb*PIVA/100;
		dsc=Tb*Pdsc/100;
	} else{
		cout<<"Su compra aplica a descuento: "<<Tb<<endl;
		IVA=Tb*PIVA/100;
		dsc=Tb*Pdsc/100;
	} else{
		VT=A+PIVA-Pdsc;
		VT=A+PIVA-Pdsc;	

cout<<"//========================================="<<endl;
cout<<"//===>Nombre del programa:Compra de un producto"<<endl;
cout<<"//===>Autor:Tigreros Estacio Miguel"<<endl;
cout<<"//===>Archivo:puntoventa.cpp"<<endl;
cout<<"//===>Fecha de elaboracion:03/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:21/05/2022"<<endl;
cout<<"//========================================="<<endl;

		cout<<"El valor total de su compra a pagar es:$ "<<VT<<endl;
	}
	return 0;
}
