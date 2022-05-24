//===== Funciones Quintero Orellana Nezareth Adonis
//
//
//
//
//

int ON_Compara()

{
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa:Comparacion de 2 numeros"<<endl;
cout<<"//==> Archivo : Compara.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 18/05/2022"<<endl;
cout<<"//================================================="<<endl<<endl;
        float ON_x,ON_y;
        cout<<"Ingrese el valor de X: ";
        cin>>ON_x;
        cout<<"Ingrese el valor de Y: ";
        cin>>ON_y;
        if(ON_x==ON_y){
        cout<<"El valor de X: "<<ON_x<<"es igual a Y: "<<ON_y<<endl;
        }else{
        if(ON_x<ON_y){
        cout<<"El valor de X: "<<ON_x<<"es menor a Y: "<<ON_y<<endl;
        }else{
        cout<<"El valor de Y: "<<ON_y<<"es menor a X: "<<ON_x<<endl;
        }
        }
        return 0;
}


int ON_CuentaMoneda()

{

        int ON_n,ON_c=0,ON_c1=0,ON_c2=0;
        float ON_x,ON_a=0,ON_a1=0,ON_a2=0;                                          
	cout<<"Cantidad de monedas a ingresar: ";
        cin>>ON_n;
        do{
                cout<<"Ingresar el valor de la moneda (0.10,0.25): ";
        cin>>ON_x;
        ON_c=ON_c+1;
        ON_a=ON_a+ON_x;
        if(ON_x==(float)0.10){
                ON_c1=ON_c1+1;
                ON_a1=ON_a1+ON_x;
        }else{
                ON_c2=ON_c2+1;
                ON_a2=ON_a2+ON_x;
         }

        }while(ON_c<ON_n);

cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa:Calcular la cantidad de moneda a ingresar"<<endl;
cout<<"//==> Archivo : CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 18/05/2022"<<endl;
cout<<"//================================================="<<endl;

        cout<<"El resultado fue: "<<endl;
        cout<<"cantidad de monedas ingresadas: "<<ON_c<<endl;
        cout<<"cantidad total en dinero contado: "<<ON_a<<endl;
        cout<<"cantidad de monedas de 0.10 ingresadas: "<<ON_c1<<endl;
        cout<<"cantidad total en dinero de monedas de 0.10: "<<ON_a1<<endl;
        cout<<"cantidad de monedas de 0.25 ingresadas: "
<<ON_c2<<endl;
        cout<<"cantidad total en dinero de monedas de 0.25: "<<ON_a2<<endl;

        return 0;
}


int ON_LaEdad()

{
        int ON_dd,ON_mm,ON_aa,ON_yy,ON_dd1,ON_mm1,ON_aa1,ON_yy1,ON_da,ON_ma,ON_ya;

        cout<<"Ingresa la Fecha Actual:Dia Mes y Año "<<endl;
        cin>>ON_dd>>ON_mm>>ON_aa>>ON_yy;
	
        cout<<"Ingrese la Fecha de Nacimiento:Dia Mes y Año "<<endl;
        cin>>ON_dd1>>ON_mm1>>ON_aa1>>ON_yy1;

        if(ON_dd<ON_dd1){
                ON_dd=ON_dd+30;
                ON_mm=ON_mm-1;
                ON_da=ON_dd-ON_dd1;
        }
        else{
                ON_da=ON_dd-ON_dd1;
        }                                                                     if(ON_mm<ON_mm1){
                ON_mm=ON_mm+12;
                ON_yy=ON_yy-1;
                ON_ma=ON_mm-ON_mm1;
        }
        else{
                ON_ma=ON_mm-ON_mm1;
        }
        ON_ya=ON_yy-ON_yy1;

cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa:Calcular la edad"<<endl;
cout<<"//==> Archivo : LaEdad.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 18/05/2022"<<endl;
cout<<"//================================================"<<endl;

        cout<<"Usted tiene "<<ON_ya<<"años "<<ON_ma<<"meses "<<"y "<<ON_da<<"dias "<<endl;

        return 0;
}


int ON_PuntoVenta()

{
        int ON_C=0,ON_P;

        float ON_A=0,ON_x,ON_Tb,ON_PIVA,ON_Pdsc,ON_IVA=0.12,ON_dsc=0.30,ON_VT;

        cout<<"Ingrese la Cantidad de Productos a Comprar: ";
        cin>>ON_P;
        do{
                cout<<"Ingrese el Valor del Producto: ";
		cin>>ON_x;

                ON_C=ON_C+1;
                ON_A=ON_A+ON_x;
                ON_PIVA=ON_A*ON_IVA;

                cout<<"El Valor del Iva de su compra es:$ "<<ON_PIVA<<endl;
	ON_Pdsc=ON_A*ON_dsc;

                cout<<"El Valor del Descuento de su Compra es:$ "<<ON_Pdsc<<endl;
                ON_Tb=ON_PIVA+ON_Pdsc;                                                                                                              }while(ON_C<ON_P);
        if(ON_Tb==ON_A){

                cout<<"Su compra aplica a Descuento: "<<ON_Tb<<endl;
                ON_IVA=ON_Tb*ON_PIVA/100;
                ON_dsc=ON_Tb*ON_Pdsc/100;
        }else{
                ON_VT=ON_A+ON_PIVA-ON_Pdsc;
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de vento de productos"<<endl;
cout<<"//==> Archivo : PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Netzaret Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 19/05/2022"<<endl;
cout<<"//================================================"<<endl;

                cout<<"El Valor Total de su Compra a pagar es:$ "<<ON_VT<<endl;
        }
        return 0;
}


int ON_SumaN()

{
        int ON_C=0,ON_a;
        float ON_S=0,ON_Y;
        cout<<"Ingrese la cantidad de numeros a sumar: ";
        cin>>ON_a;
do{
               cout<<"Ingrese un numero: ";
               cin>>ON_Y;
               ON_C=ON_C+1;
               ON_S=ON_S+ON_Y;
        }while(ON_C<ON_a);
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos número"<<endl;
cout<<"//==> Archivo : SumaN.cpp"<<endl;
cout<<"//==>Autor: Quintero Orellana Nezareth Adonis"<<endl;
cout<<"//==>Fecha de elaboración: 25/04/2022"<<endl;
cout<<"//==>Fecha ultima actualización: 19/05/2020"<<endl;
cout<<"//================================================="<<endl;
cout<<"La suma total es: "<<ON_S<<endl;
return 0;
}




int ON_menu()

{
	int op,flag;

	do{
		system("clear");

		cout<<"===== Bienvenidos ====="<<endl;
		cout<<"===== Programa de QuinteroAdonis ====="<<endl<<endl;
		cout<<"1.- Comparacion de 2 Numeros \n ";
		cout<<"2.- Cuento Moneda Nemilk.\n ";
		cout<<"3.- Calculo de Edades.\n ";
		cout<<"4.- Punto de Venta Productos variados.\n ";
		cout<<"5.- Suma de varios Numeros.\n ";

	cout<<"0.- Salir del menu.\n ";
	cout<<" Ingrese su opcion: "<<endl;
	cin>>op;
	switch(op){

		case 1:
			system("clear");
			ON_Compara();
			break;

	        case 2:
			system("clear");
			ON_CuentaMoneda();
			break;

		case 3
			system("clear");
		        ON_LaEdad();
			break;

		case 4
			system("clear");
		        ON_PuntoVenta();
			break;

		case 5 
			system("clear");
			ON_SumaN();
			break;
	}

	if(op!=0 && op>5){
		cout<<"\nOpcion NO permitida! \n";
	}

	if(op==0){
		cout<<"Deseas Salir de GeneracionZ (presiona enter): "<<endl;
	}

	flag=cin.ignore().get();
	}while(op!=0);
	return(0);
}


