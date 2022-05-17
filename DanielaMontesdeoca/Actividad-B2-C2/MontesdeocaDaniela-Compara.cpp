//==============================================
//===>Nombre del programa: Comparacion de 2 nuneros
//===>Archivo:Compara.cpp
//===>Autor:Montesdeoca Castillo Daniela Mishelle
//===>Fecha de elaboracion:02/05/2022
//===>Fecha de Actualizacion:16/05/2022
//===============================================

#include<iostream>
using namespace std;
int main()
{
	float MD_x,MD_y;
	cout<<"Ingrese el valor de X: ";
	cin>>MD_x;
	cout<<"Ingrese el valor de Y: ";
	cin>>MD_y;
	if(MD_x==MD_y){
	cout<<"El valor de X: "<<MD_x<<"es igual a Y: "<<MD_y<<endl;
	}else{
	if(MD_x<MD_y){

cout<<"//=============================================="<<endl;
cout<<"//===>Nombre del programa: Comparacion de 2 nuneros"<<endl;
cout<<"//===>Archivo:Compara.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:16/05/2022"<<endl;
cout<<"//==============================================="<<endl;
	cout<<"El valor de X: "<<MD_x<<"es menor a Y:"<<MD_y<<endl;
	}else{
	cout<<"El valor de Y: "<<MD_y<<"es menor a X:"<<MD_x<<endl;
	}
	}
	return 0;
}
