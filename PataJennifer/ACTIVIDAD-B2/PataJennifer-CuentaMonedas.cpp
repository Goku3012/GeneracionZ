#include<iostream>
using namespace std;
int main()
{
	int n,c=0,c1=0,c2=0;
	float x,a=0,a1=0,a2=0;
	cout<<"Bienvenidos al Cuenta Monedas Don Naza "<<endl<<endl;
	cout<<"Ingrese la Cantidad de monedas a contar: "<<endl<<endl;
	cin>>n;
	do{
	cout<<"Ingrese su valor en monedas (0.10,0.25):$ "<<endl;
	cin>>x;
	c=c+1;
	a=a+x;
	if(x==(float)0.10){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El Resultado Fue: "<<endl<<endl;
	cout<<"Total de Monedas Contadas: "<<c<<endl<<endl;
	cout<<"Valor Total en Efectivo:$ "<<a<<endl<<endl;
	cout<<"Cantidad de monedas de 0.10ctvs: "<<c1<<endl<<endl;
	cout<<"Valor en Efectivo de monedas de 0.10ctvs:$ "<<a1<<endl<<endl;
	cout<<"Cantidad de monedas de 0.25ctvs: "<<c2<<endl<<endl;
	cout<<"Valor en Efectivo de monedas de 0.25ctvs:$ "<<a2<<endl<<endl;
	return 0;
}