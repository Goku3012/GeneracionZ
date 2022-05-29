//***** Funciones Montesdeoca Castillo Daniela Mishelle
//
//
//
//
//
//

int MD_Compara()
{
        float MD_x,MD_y;
        cout<<"Ingrese el valor de x: "<<endl;
        cin>>MD_x;
        cout<<"Ingrese el valor de Y: "<<endl;
        cin>>MD_y;
        if(MD_x==MD_y){                                            cout<<"El valor de X: "<<MD_x<<"es igual a Y: "<<MD_y<<endl;
        }else{
        if(MD_x<MD_y){
                                                           cout<<"//=============================================="<<endl;                                                       cout<<"//===>Nombre del programa: Comparacion de 2 nuneros"<<endl;
cout<<"//===>Archivo:Compara.cpp"<<endl;                   cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de Actualizacion:16/05/2022"<<endl;     cout<<"//==============================================="<<endl<<endl;                                                              cout<<"El valor de X: "<<MD_x<<"es menor a Y:"<<MD_y<<endl;
        }else{                                                     cout<<"El valor de Y: "<<MD_y<<"es menor a X:"<<MD_x<<endl;
        }
        }
        return 0;
}

int MD_CuentaMoneda()
{
	int MD_n,MD_c=0,MD_c1=0,MD_c2=0;                                                        float MD_x,MD_a=0,MD_a1=0,MD_a2=0;
        cout<<"Cantidad de monedas a ingresar: "<<endl;
        cin>>MD_n;
        do{
	 
	cout<<"Ingrese el valor de la moneda (0.10,0.25): "<<endl<<endl;
                cin>>MD_x;
                MD_c=MD_c+1;
                MD_a=MD_a+MD_x;
                if(MD_x==(float)0.10){
                        MD_c1=MD_c1+1;                                             MD_a1=MD_a1+MD_x;
                }else if (MD_x==(float)0.25){                                      MD_c2=MD_c2+1;
                        MD_a2=MD_a2+MD_x;
                }while(MD_c<MD_n);                                                                                                                                               cout<<"//==============================================="<<endl;                        
cout<<"//===>Nombre del programa:Calcular la cantidad de moneda a ingresar"<<endl;
cout<<"//===>Archivo:CuentaMoneda.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;       cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;     cout<<"//==============================================="<<endl<<endl;                               

        cout<<"El resultado fue: "<<endl;
        cout<<"Cantidad total en dinero contado: "<<MD_a<<endl;
        cout<<"Cantidad total de monedas de 0.10 ingresadas: "<<MD_c1<<endl;
        cout<<"Cantidad total de dinero de monedas de 0.10: "<<MD_a1<<endl;
        cout<<"Cantidad de monedas de 0.25 ingresadas: "<<MD_c2<<endl;
        cout<<"Cantidad total de dinero de monedas de 0.25: "<<MD_c2<<endl;
        return 0;
}

int MD_Laedad()
{
	int MD_aa,MD_ma,MD_da,MD_an,MD_mn,MD_dn,MD_a,MD_m,MD_d;
        cout<<"Ingrese la fecha actual (aaaa mn dd): ";
        cin>>MD_aa>>MD_mn>>MD_da;
        cout<<"Ingrese la fecha de nacimiento (aaaa mn dd): ";
        cin>>MD_an>>MD_mn>>MD_dn; 
	

	if(MD_da>=MD_dn){                                          MD_da=MD_da+30;
	MD_ma=MD_ma-1;                                             MD_d=MD_da-MD_dn;                                             }                                                          else{ 
		MD_d=MD_da-MD_dn;
	}
           if(MD_ma=MD<MD_mn){
	   MD_ma=MD_ma+12;                                            MD_aa=MD_aa-1;                                             MD_m=MD_ma-MD_mn;                                          }else{
		   MD_m=MD_ma-MD_mn;
	   }
	           MD_a=MD_aa-MD_an;
                                                
cout<<"//==============================================="<<endl;      
cout<<"//===>Nombre del programa:Calcular la edad de una persona"<<endl;                                              cout<<"//===>Archivo:Laedad.cpp"<<endl;                    cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;      
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;       cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl<<endl;

        cout<<"La persona tiene "<<MD_a<<" años "<<MD_m<<" meses y "<<MD_d<<" dias ";
        return 0;
}

int MD_SumaN()
{
	int MD_c=0,MD_a;                                           float MD_s=0,MD_b;                                         cout<<"Ingrese la cantidad de numeros a sumar: ";          cin>>MD_a;                                                 do{                                                        cout<<"Ingrese un nunero: ";                               cin>>MD_b;                                                 MD_c=MD_c+1;                                               MD_s=MD_s+MD_b;                                            }while(MD_c<MD_a);                                                                                            cout<<"//==============================================="<<endl;      
cout<<"//===>Nombre del programa: Suma de 2 nuneros"<<endl;cout<<"//===>Archivo:SumaN.cpp"<<endl;                     cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;      
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;       cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl<<endl;              
          cout<<"La suma total es: "<<MD_s<<endl;                               return 0;
}

int MD_Puntoventa()
{
	int MD_c=0,MD_p;                                           float MD_x,MD_a=0,MD_vb,MD_Viva,MD_Vdes,MD_Vf,MD_iva=0.12,MD_des=0.30;                                                cout<<"Ingrese la cantidad de producto a comprar: "<<endl;       
	cin>>MD_p;                                                 do{                                                        cout<<"Ingrese el valor del producto: "<<endl;             cin>>MD_x;                                                 MD_c=MD_c+1;                                               MD_a=MD_a+MD_x;                                            MD_Viva=MD_a*MD_iva;                                       cout<<"El valor del iva de su compra es: $ "<<MD_Viva<<endl;                                                          MD_Vdes=MD_a*MD_des;                                       cout<<"El valor del descuento de su compra es: $ "<<MD_Vdes<<endl;                                                    }while(MD_c<MD_p);  
	MD_vf=MD_a+MD_Viva-MD_Vdes;
	if(MD_vb==MD_a){                                  
cout<<"Su compra aplica a descuentos: "<<MD_vb<<endl;                 MD_iva=MD_vb*MD_Viva/100;                                  MD_des=MD_vb*MD_Vdes/100;                                  }else{
	   MD_Vf=MD_a+MD_Viva-MD_Vdes;                                                                                cout<<"//==============================================="<<endl;      
cout<<"//===>Nombre del programa:Punto de venta de productos"<<endl;
cout<<"//===>Archivo:puntoventa.cpp"<<endl;
cout<<"//===>Autor:Montesdeoca Castillo Daniela Mishelle"<<endl;
cout<<"//===>Fecha de elaboracion:02/05/2022"<<endl;
cout<<"//===>Fecha de actualizacion:17/05/2022"<<endl;
cout<<"//==============================================="<<endl<<endl;


                cout<<"El valor total de su compra a pagar es: $ "<<MD_Vf<<endl;
        }
        return 0;
}

int MD_menu()
{

	int op,flag;

	do{
		system("clear");

		cout<<"+++++ Bienvenidos +++++"<<endl;
		cout<<"***** Programas Montesdeoca Daniela  *****"<<endl<<endl;
                cout<<" 1.- Suma de varios Números"<<endl;
                cout<<" 2.-Comparación de 2 Números"<<endl;
                cout<<" 3.-Cuenta Monedas"<<endl;
                cout<<" 4.-Calculadora de edad"<<endl;
                cout<<" 5.-Punto de Venta varios Productos"<<endl;
		cout<<" 0.- Salir del menú"<<endl<<endl;
        	cout<<" Ingrese su opción: "<<endl;
       		 cin>>op;
        switch(op){

                case 1:
			system("clear");
                        MD_Compara();
                        break;

                case 2:
			system("clear");
			MD_CuentaMoneda();

                        break;

                case 3:
			system("clear");
			MD_Laedad();

                        break;

                case 4:
			system("clear");
			MD_SumaN();

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
