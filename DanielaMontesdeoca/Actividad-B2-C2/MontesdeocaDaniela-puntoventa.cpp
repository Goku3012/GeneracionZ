#include<iostream>
using namespace std;
int main()
{
	int c=0,p;
	float x,a=0,vb,Viva,Vdes,Vf,iva=0.12,des=0.30;
	cout<<"Ingrese la cantidad de producto a comprar: ";
	cin>>p;
	do{
		cout<<"Ingrese el valor del producto: "; 
		cin>>x;
		c=c+1;
		a=a+x;
		Viva=a*iva;
		cout<<"El valor del iva de su compra es: $ "<<Viva<<endl;
		Vdes=a*des;
		cout<<"El valor del descuento de su compra es: $ "<<Vdes<<endl;
		vb=Viva+Vdes;
	}while(c<p);
	if(vb==a){
		cout<<"Su compra aplica a descuentos: "<<vb<<endl;
		iva=vb*Viva/100;
		des=vb*Vdes/100;
	}else{
		Vf=a+Viva-Vdes;
		cout<<"El valor total de su compra a pagar es: $ "<<Vf<<endl;
	}
	return 0;
}

