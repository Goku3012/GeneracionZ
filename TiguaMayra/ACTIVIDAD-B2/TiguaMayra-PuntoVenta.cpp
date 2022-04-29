#include<iostream>
using namespace std;
int main()
{
        int B=0,q;
        float E=0,m,vt,tiva,tdes,iva=0.12,dsc=0.10,pt;
        cout<<"Ingresar la cantidad de productos a comprar: ";
        cin>>q;
        do{
        cout<<"Ingresar el valor del producto: ";
        cin>>m;
        B=B+1;
        E=E+m;
        tiva=E*iva;
        cout<<"El valor del iva de su compra es: $ " <<tiva<<endl;
        tdes=E*dsc;
        vt=tiva+tdes;
        }
        while(B<q);
        if(vt==B){
        cout<<"Su compra obtiene descuento de: "<<vt<<endl;
        iva=vt*tiva/100;
        dsc=vt*tdes/100;
        }else{
        pt=E+tiva-tdes;
        cout<<"El valor total a pagar de su compra es: $ "<<pt<<endl;
        }
        return 0;
}
