//***** Funciones Pata Mina Jennifer Maibe
//
//
//
//
//

int PJ_SumaN()
{

	cout<<"//================================================="<<endl;
	cout<<"//============> Nombre del Programa: Suma de Varios Números"<<endl;
	cout<<"//============> Archivo: SumaN.cpp"<<endl;
	cout<<"//============> Autor: Pata Mina Jennifer Maibe"<<endl;
	cout<<"//============> Fecha de Creación: 23/04/2022"<<endl;
	cout<<"//============> Fecha de Actualización: 18/05/2022"<<endl;
	cout<<"//================================================="<<endl<<endl;

        int MJ_c=0,MJ_n;

        float MJ_a=0,MJ_x;

        cout<<"Ingrese la Cantidad de Números a Sumar: "<<endl;
        cin>>MJ_n;

        do{

        cout<<"Ingrese un Número: "<<endl;
        cin>>MJ_x;

        MJ_c=MJ_c+1;

        MJ_a=MJ_a+MJ_x;

        }while(MJ_c<MJ_n);

        cout<<"La Suma Total es: "<<MJ_a<<endl;

        return 0;
}



int PJ_Compara()
{

	cout<<"//=========================================================="<<endl;
	cout<<"//===> Nombre del Programa:Comparación de 2 números"<<endl;
	cout<<"//===> Archivo: Compara.cpp"<<endl;
	cout<<"//===> Autor: Pata Mina Jennifer Maibe"<<endl;
	cout<<"//===> Fecha de Creación: 23/04/2022"<<endl;
	cout<<"//===> Fecha de Actualización: 17/05/2022"<<endl;
	cout<<"//==========================================================="<<endl<<endl;

        float  MJ_x,MJ_y;

 	cout<<"Ingrese el valor de X: "<<endl;
        cin>>MJ_x;   

	cout<<"Ingrese el valor de Y: "<<endl;
        cin>>MJ_y;

        if(MJ_x==MJ_y){

	cout<<"El valor de X: "<<MJ_x<<" es igual a Y: "<<MJ_y<<endl;
        }else{

        if(MJ_x<MJ_y){

	 cout<<"El valor de X: "<<MJ_x<<" es menor a Y: "<<MJ_y<<endl;
        }else{

	 cout<<"El valor de Y: "<<MJ_y<<" es menor a X: "<<MJ_x<<endl;
        }
        }
        return 0;
}


int PJ_PuntoVenta()
{

	cout<<"//======================================================================"<<endl;
	cout<<"//==========> Nombre del Programa: Punto de Venta de varios Productos"<<endl;
	cout<<"//==========> Archivo: PuntoVenta.cpp"<<endl;
	cout<<"//==========> Autor: Pata Mina Jennifer Maibe"<<endl;
	cout<<"//==========> Fecha de Creación: 23/04/2022"<<endl;
	cout<<"//==========> Fecha de Actualización: 19/05/2022"<<endl;
	cout<<"//======================================================================"<<endl<<endl;

        int MJ_c=0,MJ_n;

        float MJ_a=0,MJ_x,MJ_Piva,MJ_Pdsc,MJ_iva=0.12,MJ_dsc=0.10,MJ_vf;

	cout<<"Ingrese la Cantidad de Productos a Comprar: "<<endl;
        cin>>MJ_n;
        do{
	cout<<"Ingrese el valor del Producto:$ "<<endl;
                cin>>MJ_x;

                MJ_c=MJ_c+1;
                MJ_a=MJ_a+MJ_x;
                MJ_Piva=MJ_a*MJ_iva;

	cout<<"El Valor del Iva de su compra es de: $ "<<MJ_Piva<<endl;
        MJ_Pdsc=MJ_a*MJ_dsc;

	cout<<"El valor del Descuento de su Compra es de: $ "<<MJ_Pdsc<<endl;  

        }while(MJ_c<MJ_n);{                                                                                           
        MJ_vf=MJ_a+MJ_Piva-MJ_Pdsc;                                                                                        cout<<"El Valor Total de su Compra a Pagar es de: $ "<<MJ_vf<<endl;
        }
        return 0;
}




int PJ_CuentaMoneda()
{

	cout<<"//========================================================="<<endl;
	cout<<"//=======> Nombre del Programa: Cuenta Monedas Don Naza"<<endl;
	cout<<"//=======> Archivo: CuentaMoneda.cpp"<<endl;               
	cout<<"//=======> Autor: Pata Mina Jennifer Maibe"<<endl;
	cout<<"//=======> Fecha de Creación:23/04/2022"<<endl;
	cout<<"//=======> Fecha de Actualización:19/05/2022"<<endl;
	cout<<"//========================================================="<<endl<<endl;

        int MJ_n,MJ_c=0,MJ_c1=0,MJ_c2=0,MJ_c3=0;

        float  MJ_x,MJ_a=0,MJ_a1=0,MJ_a2=0,MJ_a3=0;

	cout<<"Bienvenidos al Cuenta Monedas Don Naza "<<endl<<endl;

	cout<<"Ingrese la Cantidad de monedas a contar: "<<endl;
        cin>>MJ_n;

        do{

	cout<<"Ingrese su valor en monedas (0.10,0.25,0.50):$ "<<endl<<endl;
                cin>>MJ_x;

                MJ_c=MJ_c+1;
                MJ_a=MJ_a+MJ_x;

        if(MJ_x==(float)0.10){

                MJ_c1=MJ_c1+1;
                MJ_a1=MJ_a1+MJ_x;

        }else if(MJ_x==(float)0.25){
		MJ_c2=MJ_c2+1;
                MJ_a2=MJ_a2+MJ_x;

        }else{

                MJ_c3=MJ_c3+1;
                MJ_a3=MJ_a3+MJ_x;}
                        
	}while(MJ_c<MJ_n);

	cout<<"El Resultado Fue: "<<endl;
	cout<<"Total de Monedas Contadas: "<<MJ_c<<endl;
	cout<<"Valor Total en Efectivo:$ "<<MJ_a<<endl<<endl;
	cout<<"Cantidad de monedas de 0.10ctvs: "<<MJ_c1<<endl;
	cout<<"Valor en Efectivo de monedas de 0.10ctvs:$ "<<MJ_a1<<endl;
	cout<<"Cantidad de monedas de 0.25ctvs: "<<MJ_c2<<endl;
	cout<<"Valor en Efectivo de monedas de 0.25ctvs:$ "<<MJ_a2<<endl;
	cout<<"Cantidad de monedas de 0.50ctvs: "<<MJ_c3<<endl;
	cout<<"Valor en Efectivo de monedas de 0.50ctvs:$ "<<MJ_a3<<endl;

        return 0;
}



int PJ_Edad()
{

	cout<<"//================================================================"<<endl;                                  cout<<"//========> Nombre del Programa: Calcular la edad de una Persona"<<endl;
	cout<<"//========> Archivo:laedad.cpp"<<endl;
	cout<<"//========> Autor: Pata Mina Jennifer Maibe"<<endl;
	cout<<"//========> Fecha de Creación:23/04/2022"<<endl;
	cout<<"//========> Fecha de Actualización:19/05/2022"<<endl;
	cout<<"//================================================================="<<endl<<endl;



        int MJ_da,MJ_ma,MJ_aa,MJ_dn,MJ_mn,MJ_an,MJ_d,MJ_m,MJ_a;

	cout<<"Ingrese la Fecha Actual: Día Mes  Año "<<endl;
       cin>>MJ_da>>MJ_ma>>MJ_aa;

	cout<<"Ingrese la Fecha de su  Nacimiento: Día Mes  Año "<<endl;
        cin>>MJ_dn>>MJ_mn>>MJ_an;

        if(MJ_da<MJ_dn){
                MJ_da=MJ_da+30;
                MJ_ma=MJ_ma-1;
                MJ_d=MJ_da-MJ_dn;
        }
        else{
                MJ_d=MJ_da-MJ_dn;
        }
        if(MJ_ma<MJ_mn){
                MJ_ma=MJ_ma+12;
                MJ_aa=MJ_aa-1;
                MJ_m=MJ_ma-MJ_mn;       
	} else{       
		MJ_m=MJ_ma-MJ_mn;                   
	}                           
	        MJ_a=MJ_aa-MJ_an;                          
	
	cout<<"Ustd Tiene "<<MJ_a<<" años "<<MJ_m<<" meses "<<" y "<<MJ_d<<" días "<<endl;            

	return 0;                           
}




int PJ_menu()
{

	int op,flag;

	do{
		system("clear");

		cout<<"+++++ Bienvenidos +++++"<<endl;
		cout<<"***** Programas de PataJennifer *****"<<endl<<endl;
                cout<<" 1.- Suma de varios Números"<<endl;
                cout<<" 2.-Comparación de 2 Números"<<endl;
                cout<<" 3.-Cuenta Monedas Don Naza"<<endl;
                cout<<" 4.-Calculadora de Edades"<<endl;
                cout<<" 5.-Punto de Venta varios Productos"<<endl;
		cout<<" 0.- Salir del menú"<<endl<<endl;
        	cout<<" Ingrese su opción: "<<endl;
       		 cin>>op;
        switch(op){

                case 1:
			system("clear");
                        PJ_SumaN();
                        break;

                case 2:
			system("clear");
			PJ_Compara();

                        break;

                case 3:
			system("clear");
			PJ_CuentaMoneda();

                        break;

                case 4:
			system("clear");
			PJ_Edad();

                        break;

                case 5:
			system("clear");
			PJ_PuntoVenta();

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

