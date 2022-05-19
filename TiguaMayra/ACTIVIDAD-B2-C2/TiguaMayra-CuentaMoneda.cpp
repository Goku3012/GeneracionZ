
//================================================
//==> Nombre del programa: Cuenta Moneda
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Tigua Rodriguez Mayra
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

 #include<iostream>
using namespace std;
int main()
{
        int MR_n, MR_c=0, MR_c1=0, MR_c2=0;
        float MR_x, MR_a=0, MR_a1=0, MR_a2=0, MR_m=0.10;
        cout<<"Cantidad de monedas a ingresar : ";
        cin>>MR_n;
        do{
	cout<<"ingrese el valor de la moneda (0.10, 0.25) : ";
                cin>>MR_x;
                MR_c=MR_c+1;                                                     
		MR_a=MR_a+MR_x;
                if (MR_x==MR_m){
                        MR_c1=MR_c1+1;                                                      
			MR_a1=MR_a1+MR_x;
                }else{
                        MR_c2=MR_c2+1;
                        MR_a2=MR_a2+MR_x;
                }
}while(MR_c<MR_n);

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta Moneda"<<endl;
cout<<"//==> Archivo : CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas : "<<MR_c<<endl;
cout<<"Cantidad total en dinero contado : "<<MR_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<MR_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10cc : "<<MR_a1<<endl;
cout<<"Cantidad de monedas de 0.25cc ingresadas : "<<MR_c2<<endl;
cout<<"Cantidad total en dinero de monedas de 0.25cc : "<<MR_a2<<endl;
return 0;
}
