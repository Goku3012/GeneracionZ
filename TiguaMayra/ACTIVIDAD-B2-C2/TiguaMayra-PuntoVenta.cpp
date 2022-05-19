
//================================================
//==> Nombre del programa: Precio de varios productos
//==> Archivo : PuntoVenta.cpp
//==>Autor: Tigua Rodriguez Mayra
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main()
{
        int MR_b=0,MR_q;
        float MR_e=0,MR_m,MR_vt,MR_tiva,MR_tdes,MR_iva=0.12,MR_dsc=0.10,MR_pt;
        cout<<"Ingresar la cantidad de productos a comprar: ";
        cin>>MR_q;
        do{
        cout<<"Ingresar el valor del producto: ";
        cin>>MR_m;
        MR_b=MR_b+1;
        MR_e=MR_e+MR_m;
        MR_tiva=MR_e*MR_iva;
        cout<<"El valor del iva de su compra es: $ " <<MR_tiva<<endl;
        MR_tdes=MR_e*MR_dsc;
        MR_vt=MR_tiva+MR_tdes;
        }
        while(MR_b<MR_q);
        if(MR_vt==MR_b){
        cout<<"Su compra obtiene descuento de: "<<MR_vt<<endl;
        MR_iva=MR_vt*MR_tiva/100;
        MR_dsc=MR_vt*MR_tdes/100;
        }else{
        MR_pt=MR_e+MR_tiva-MR_tdes;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Precio de varios productos"<<endl;
cout<<"//==> Archivo : PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;


        cout<<"El valor total a pagar de su compra es: $ "<<MR_pt<<endl;
        }
        return 0;
}
