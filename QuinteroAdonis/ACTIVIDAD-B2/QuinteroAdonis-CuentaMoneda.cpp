#include<iostream>
using namespace std;
int main()
{
	int n,c=0,c1=0,c2=0;
	float x,a=0,a1=0,a2=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingresar el valor de la moneda (0.10,0.25): ";
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
	cout<<"El resultado fue: "<<endl;
	cout<<"cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"cantidad total en dinero contado: "<<a<<endl;
	cout<<"cantidad de monedas de 0.10 ingresadas: "<<c1<<endl;
	cout<<"cantidad total en dinero de monedas de 0.10: "<<a1<<endl;
	cout<<"cantidad de monedas de 0.25 ingresadas: "
<<c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25: "<<a2<<endl;

	return 0;
}
