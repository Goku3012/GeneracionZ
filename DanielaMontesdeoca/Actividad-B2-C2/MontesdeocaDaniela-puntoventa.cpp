//===============================================
//===>Nombre del programa:Punto de venta de productos
//===>Archivo:puntoventa.cpp
//===>Autor:Montesdeoca Castillo Daniela Mishelle
//===>Fecha de elaboracion:02/05/2022
//===>Fecha de actualizacion:17/05/2022
//===============================================

#include<iostream>
using namespace std;
int main()
{
	int MD_c=0,MD_p;
	float MD_x,MD_a=0,MD_vb,MD_Viva,MD_Vdes,MD_Vf,MD_iva=0.12,MD_des=0.30;
	cout<<"Ingrese la cantidad de producto a comprar: ";
	cin>>MD_p;
	do{
		cout<<"Ingrese el valor del producto: "; 
		cin>>MD_x;
		MD_c=MD_c+1;
		MD_a=MD_a+MD_x;
		MD_Viva=MD_a*MD_iva;
		cout<<"El valor del iva de su compra es: $ "<<MD_Viva<<endl;
		MD_Vdes=MD_a*MD_des;
		cout<<"El valor del descuento de su compra es: $ "<<MD_Vdes<<endl;
		MD_vb=MD_Viva+MD_Vdes;
	}while(MD_c<MD_p);
	if(MD_vb==MD_a){
		cout<<"Su compra aplica a descuentos: "<<MD_vb<<endl;
		MD_iva=MD_vb*MD_Viva/100;
		MD_des=MD_vb*MD_Vdes/100;
	}else{
		MD_Vf=MD_a+MD_Viva-MD_Vdes;

cout<<"//==============================================="<<endl;
cout<<"//===>Nombre del programa:Punto de venta de productos"<<endl;
cout<<"//===>Archivo:puntoventa.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl;


		cout<<"El valor total de su compra a pagar es: $ "<<MD_Vf<<endl;
	}
	return 0;
}

