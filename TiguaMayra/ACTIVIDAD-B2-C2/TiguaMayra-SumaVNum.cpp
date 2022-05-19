//================================================
//==> Nombre del programa: Suma de varios  números
//==> Archivo : SumaVNum.cpp
//==>Autor: Tigua Rodriguez Mayra
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main()
{
	int MR_a=0,MR_m;
	float MR_t=0,MR_r;
	cout<<"Ingresar la cantidad de numeros a sumar: ";
	cin>>MR_m;
	do{
	cout<<"Ingresar un numero: ";
	cin>>MR_r;
	MR_a=MR_a+1;
	MR_t=MR_t+MR_r;
	}
	while(MR_a<MR_m);

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios números"<<endl;
cout<<"//==> Archivo : SumaVNum.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

	cout<<"La suma total es: "<<MR_t<<endl;
	return 0;
}
