//***** Funciones Tigua Rodriguez Mayra Alexandra
//
//
//
//
//

int TM_SumaVNum()
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


int TM_Compara()
{

	float MR_m,MR_a;
	cout<<"Ingrese el valor de M: ";
	cin>>MR_m;
	cout<<"Ingrese el valor de A: ";
	cin>>MR_a;
	if (MR_m==MR_a){
	cout<<"El valor de M: "<<MR_m<<" es igual a A: "<<MR_a<<endl;
	}else{
	if (MR_m>MR_a){

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos numeros"<<endl;
cout<<"//==> Archivo : Compara.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

	cout<<"El valor de M: "<<MR_m<<" es mayor a A: "<<MR_a<<endl;
	}else{
	cout<<"El valor de A: "<<MR_a<<" es mayor a M: "<<MR_m<<endl;
	}
	}
	return 0;
}


int TM_PuntoVenta()
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


int TM_CuentaMoneda()
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


int TM_Edad()
{

	int MR_dd,MR_mm,MR_yy,MR_dd1,MR_mm1,MR_yy1,MR_da,MR_ma,MR_ya;
	
	cout<<"Ingresa la Fecha Actual: Dia Mes y Año "<<endl;
	cin>>MR_dd>>MR_mm>>MR_yy;
	cout<<"Ingresa la Fecha de Nacimiento: Dia Mes y Año "<<endl;
	cin>>MR_dd1>>MR_mm1>>MR_yy1;
	if(MR_dd<MR_dd1){
		MR_dd=MR_dd+30;
		MR_mm=MR_mm-1;
		MR_da=MR_dd-MR_dd1;
	}
	else{
		MR_da=MR_dd-MR_dd1;
	}
	if(MR_mm<MR_mm1){
		MR_mm=MR_mm+12;
		MR_yy=MR_yy-1;
		MR_ma=MR_mm-MR_mm1;
	}
	else{
		MR_ma=MR_mm-MR_mm1;
	}
	MR_ya=MR_yy-MR_yy1;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad de una persona"<<endl;
cout<<"//==> Archivo : Edad.cpp"<<endl;
cout<<"//==>Autor: Tigua Rodriguez Mayra"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

cout<<"Ustd Tiene "<<MR_ya<<" años "<<MR_ma<<" meses "<<" y "<<MR_da<<" dias "<<endl;
	return 0;
}





int TM_menu()
{

	int op,flag;

	do{
		system("clear");

		cout<<"+++++ Bienvenidos +++++"<<endl;
		cout<<"***** Programas de TiguaMayra *****"<<endl<<endl;
                cout<<" 1.- Suma de varios números"<<endl;
                cout<<" 2.-Comparación de dos numeros"<<endl;
                cout<<" 3.-Precio de varios productos"<<endl;
                cout<<" 4.-Cuenta Moneda"<<endl;
                cout<<" 5.-Edad de una persona"<<endl;
		cout<<" 0.- Salir del menú"<<endl<<endl;
        	cout<<" Ingrese su opción: "<<endl;
       		cin>>op;
        switch(op){ 

		case 1:
			system("clear");
			TM_SumaVNum();
			break;

	        case 2:
			system("clear");
			TM_Compara();
			break;

		case 3:
			system("clear");
		        TM_PuntoVenta();
			break;

		case 4:
			system("clear");
		        TM_CuentaMoneda();
			break;

		case 5: 
			system("clear");
			TM_Edad();
			break;
	}

       	 if(op!=0 && op>5){
               	 cout<<"Opción NO permitida! "<<endl;
        }

      	  if(op==0){
               	 cout<<"Deseas Salir del Menú de Programas  (presiona enter): "<<endl;
        }
	

        	flag=cin.ignore().get();
        	}while(op!=0);
        	return(0);
}

