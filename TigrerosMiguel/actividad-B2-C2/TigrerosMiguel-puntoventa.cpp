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
	} else {
		VT=A+PIVA-Pdsc;
		cout<<"El valor total de su compra a pagar es:$ "<<VT<<endl;
	}
	return 0;
}
