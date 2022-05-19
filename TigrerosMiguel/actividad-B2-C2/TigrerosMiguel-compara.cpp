# include <iostream>
using namespace std;
int main ()
{
	float a,b;
	cout<<"Ingrese el valor de A: ";
	cin>>a;
	cout<<"Ingrese el valor de B: ";
	cin>>b;
	if (a==b){
		cout<<"El valor de A: "<<a<<"es igual a B: "<<b<<endl;
	} else {
		if (a<b){
			cout<<"El valor de A: "<<a<<"es menor a B: "<<b<<endl;
		} else {
			cout<<"El valor de B: "<<b<<"es menor a A: "<<a<<endl;
		}
	}
	return 0;
}
