#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int num,i;
struct Empleado{
	char s[20];
	int nh;
	char ne[20];
	char c[20];
	int ed;
	char j[20];
	char cr[20];
}empleado1;

long int fib(int x){
	if(x==1||x==0){
		return x;
	}
	else
		return(fib(x-1)+fib(x-2));
}
void programa9(){
    int n,tf;
	float sb=0,r=0,sn=0,tm=80000*10;
	string datos;
	cout<<"		SALARIO DE EMPLEADOS\n";
	cout<<"Ingrese la cantidad de empleados \n";
	cin>>n;
	
	cout<<"Ingrese la tarifa \n";
	cin>>tf;
	
	i=0;
	while(i!=n){
        system("cls");
		cout<<"nombre: \n";
		rewind(stdin);
		getline(cin, datos);
		strcpy(empleado1.ne,datos.c_str());
		
		cout<<"horas: \n";
		cin>>empleado1.nh;
		
		cout<<"codigo: \n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(empleado1.c, datos.c_str());
		
		cout<<"sexo: \n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(empleado1.s, datos.c_str());
		
		if(empleado1.nh>=240&&empleado1.nh<300)
			sb=(tm-empleado1.nh)*2.5;
		else if(empleado1.nh>=300)
			sb=(tm-empleado1.nh)*1.7;
		else if(empleado1.nh<240)
			sb=(tf*empleado1.nh);
		if(sb<tm)
			sn=sb;
			r=0;
		if(sb>=tm&&sb<1000000){
			r=sb*0.5;
			sn=sb-r;
		}
		else if(sb>=1000000 && sb<2000000) {
			r=sb*0.1;
			sn=sb-r;
		}
		else if(sb>=2000000){
			r=sb*0.2;
			sn=sb-r;
		}
		cout<<"\n Datos finales del empleado \n";
		cout<<"nombre del empleado: "<<empleado1.ne<<endl;
		cout<<"codigo del empleado: "<<empleado1.c<<endl;
		cout<<"sexo del empleado: "<<empleado1.s<<endl;
		cout<<"horas trabajadas: "<<empleado1.nh<<endl;
		cout<<"salario bruto: "<<sb<<endl;
		cout<<"Salario neto: "<<sn<<endl;
		cout<<"retencion: "<<r<<endl;
		i++;	
		system("pause");
		system("cls");
	}	
}
void programa8(){
	int cmp=0;
	system("cls");
	cout<<"		PERTENECE A SERIE FIBONACCI \n";
	cout<<"	Ingrese el numero\n";
	cin>>num;
	i=0;
	while(cmp==0&&fib(i)<=num){
		if(fib(i)==num)
			cmp=1;
		i++;
	}
	if(cmp==1)
		cout<<"\n El numero "<<num<<" pertenece a la serie fibonacci \n";
	else
		cout<<"\n El numero "<<num<<" no pertenece a la serie fibonacci \n";
	system("pause");
	system("cls");
}
void programa6(){	
	cout<<"		NUMEROS DEL 1 AL 10 \n";
	i=10;
	int k=1;
	while(i!=0){
		cout<<k++<<endl;
		i--;
	}
	system("pause");
	system("cls");
}
void programa14(){
	int arr[10], k=0, n;
	cout<<"		BINARIO Y HEXADECIMAL \n";
	cout<<" Ingrese un numero en base 10 mayor a 0\n";
	cin>>num;
	n=num;
	while(num>0){
		arr[k]=num%2;
		num/=2;
		k++;
	}
	cout<<"El equivalente en binario es de "<<n<<" es: \n";
	for(i=k-1;i>=0;i--){
		cout<<arr[i];
	}
	system("pause");
	system("cls");
}
void programa2(){
	system("cls");
	int n;
	
	string datos;
	float seec=0,ceec=0,chin=0,peem=0,ceem=0,semin=0,pemin=0,ph=0,ch=0,phin=0,peec=0,cemin=0;
	i=1;
	cout<<"		UNIVERSIDAD\n";
	cout<<"	Ingrese el numero de estudiantes \n";
	cin>>n;
	
	while(i<=n){
		cout<<"	Digite la edad:\n";
		cin>>empleado1.ed;
		cout<<" Ingrese el sexo:\n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(empleado1.s,datos.c_str());
		
		cout<<" Ingrese la carrera \n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(empleado1.cr,datos.c_str());
	
		cout<<" Ingrese la jornada \n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(empleado1.j,datos.c_str());
		
		if(strcmp(empleado1.cr,"contaduria")==0){
			seec+=empleado1.ed;
			ceec++; 
		}
		if(strcmp(empleado1.s,"masculino")==0&&strcmp(empleado1.cr,"ingenieria")==0&&strcmp(empleado1.j,"nocturna")==0)
			chin++;
		if(strcmp(empleado1.s,"femenino")==0&&empleado1.ed<20&&strcmp(empleado1.cr,"ingenieria")==0)
			ceem++;
		if(strcmp(empleado1.s,"femenino")==0&&strcmp(empleado1.cr,"ingenieria")==0)
			semin+=empleado1.ed;
			cemin++;
		if(strcmp(empleado1.s,"masculino")==0&&strcmp(empleado1.cr,"derecho")==0&&strcmp(empleado1.j,"nocturna")==0&&empleado1.ed>22)
			ch++;
		peec=seec/ceec; //promedio de edad estudiantes contduria
		phin=(chin/n)*100; //porcentaje hombres ingenieria noche
		peem=(ceem/n)*100; //porcentaje mujeres menores a 20 aÃ±os
		pemin=semin/cemin; //promedio mujeres ingenieria
		ph=(ch/n)*100; //porcentaje hombres derecho
		i++;
		system("cls");
		
	}
		cout<<" promedio de edad estudiantes de contaduria es: "<<peec<<endl;
		cout<<" porcentaje de estudiantes hombres que estudian ingenieria la noche: "<<phin<<endl;
		cout<<" porcentaje de estudiantes mujeres que estudian ingenieria y son menores a 20 aÃ±os "<<peem<<endl;
		cout<<" promedio de estudiantes mujeres que estudian ingenieria "<<pemin<<endl;
		cout<<" porcentaje de estudiantes hombres que estudian derecho y que son mayores a 22 aÃ±os "<<ph<<endl;
		system("pause");
		system("cls");
	
}
void programa5(){
	int div5=0,div10=0,cont=0,sum=0,prom=0;
	system("cls");
	cout<<"		PROMEDIO DIGITO 5 \n";
	cout<<"	Ingrese el numero \n";
	do{
		cin>>num;
		div5=num%5;
		div10=num%10;
		if(div5==0&&div10!=0){
			sum+=num;
			cont++;
		}
	}	
	while(num!=0);
	prom=sum/cont;
	cout<<" El promedio de los numeros terminados con ditigo 5 es: "<<prom<<endl;
	system("pause");
	system("cls");
}
void programa7(){
	system("cls");
	int fib=0,fib1,fib2=0;
	cout<<"		SERIE FIBONACCI\n";
	cout<<"\n0\n";
	cout<<fib1<<endl;
	fib1=1;
	i=2;
	while(fib<=10000){
		fib=fib1+fib2;
		fib2=fib1;
		fib1=fib;
		cout<<fib<<endl;
		i++;
	}
	
	system("pause");
	system("cls");

}
void programa4(){
	system("cls");
	int n,i,a;
	cout<<"		SUMA DE ENTEROS COMPRENDIDOS\n";
	cout<<"Ingrese el numero \n";
	cin>>n;
	a=0;
	if (n>1){
		for(i=1;i<=n;i++){
			cout<<"los numeros comprendidos son:\n"<<i<<endl;
			a=a+i;
		}
		cout<<"la suma de todos los enteros es:\n"<<a<<endl;
	}
	
	system ("pause");
	system("cls");
}
void programa12(){
	system("cls");
	int cta,j=0,est[100],mat[100][100],l=0,k=0,sumnot[100][100];
	double notas[100],promest=0,aux=0,promgrup=0,promgrupos[100],promediof=0,aux2=0;
	cout<<"		PROMEDIO GRUPOS ESCOLARES\n";
	cout<<"Ingrese la cantidad de grupos\n";
	cin>>cta;
	j=0;
	for(i=0;i<cta;i++){
		cout<<"Ingrese la cantidad de estudiantes del grupo "<<i+1<<endl;
			cin>>est[j];
			j++;
	}
	system("cls");
	for(i=0;i<cta;i++){
		cout<<" Para grupo "<<i+1<<endl;
		for(j=0;j<est[i];j++){
			cout<<"Ingrese la cantidad de materias que ve el alumno "<<j+1<<endl;
			cin>>mat[i][j];
			k=0;
			aux2=0;
			while(k!=mat[i][j]){
				aux=0;
				cout<<" Ingrese las notas de la materia "<< k+1<<endl;
				for(l=0;l<3;l++){
					cin>>notas[l];
				}
				aux=(notas[0]+notas[1]+notas[2])/3;
				aux2+=aux;
				k++;
			}
			sumnot[i][j]=aux2; //i es el grupo y j es el alumno
			system("cls");
		}
		system("cls");
	}	
	//promedio de notas de cada alumno
	for(i=0;i<cta;i++){
		aux=0;
		cout<<"\nGrupo "<<i+1<<endl;
		for(j=0;j<est[i];j++){
			cout<<" Promedio notas de estudiante "<<j+1<<endl;
			promest=sumnot[i][j]/mat[i][j];
		
			aux+=promest;
			cout<<" es: "<<promest<<endl;
		}
		cout<<"Promedio de notas grupo ";
		promgrup=aux/est[i];
		cout<<" es: "<<promgrup<<endl;
		promgrupos[i]=promgrup;
	}
	aux=0;
	for(i=0;i<cta;i++){
		promediof+=promgrupos[i];
	}
	aux=promediof;
	promediof=aux/cta;
	cout<<"\n Promedio de los "<<cta<<" grupos es: "<<promediof<<endl;
	
	system("pause");
	system("cls");
}
void programa18(){
	int n,i;
	cout<<"		SUMA, PRODUCTO Y DIFERENCIA VECTORES\n";
	cout<< "Ingrese el tamaÃ±o del Arreglo A y Arreglo B\n";
	cin>>n;
	
	int arregloA[n];
	int arregloB[n];
	
	for(i=0;i<n;i++){
		int num1;
		cout<<"\n Ingrese los numeros que van en el arreglo A\n";
		cin>>num1;
		arregloA[i]=num1;
	}
	for(i=0;i<n;i++){
		int num1;
		num1=arregloA[i];
		cout<<num1<<endl;
	}
		for(i=0;i<n;i++){
		int num2;
		cout<<"\n Ingrese los numeros que van en el arreglo B\n";
		cin>>num2;
		arregloB[i]=num2;
	}
		for(i=0;i<n;i++){
		int num2;
		num2=arregloB[i];
		cout<<num2<<endl;
	}
	cout<<"\n SUMA DE LOS ARREGLOS\n";
	int arregloC[n];
	for(i=0;i<n;i++){
		arregloC[i]=arregloA[i]+arregloB[i];
		cout<<" "<<arregloC[i]<<endl;
	
	}
	cout<<"\n RESTA DE LOS ARREGLOS\n";
	for(i=0;i<n;i++){
		arregloC[i]=arregloA[i]-arregloB[i];
		cout<<" "<<arregloC[i]<<endl;
	
	}
	cout<<"\n PRODUCTO DE LOS ARREGLOS\n";
	for(i=0;i<n;i++){
		arregloC[i]=arregloA[i]*arregloB[i];
		cout<<" "<<arregloC[i]<<endl;
	
	}
	
	
	
	
}
void programa21(){
	int n,i,contador=0,primoM=0,primoP=0;
	cout<<"		Programa 21\n";
	cout<< "Ingrese el tamaÃ±o del Arreglo\n";
	cin>>n;
	int Arr[n];
	for(i=0;i<n;i++){
		int num1;
		cout<<"\n Ingrese los numeros que van en el arreglo \n";
		cin>>num1;
		Arr[i]=num1;
	}
	for(i=0;i<n;i++){
		int num1;
		num1=Arr[i];
		cout<<endl<<num1<<endl;
		for(int j=1;j<=num1;j++){
			if(num1%j==0){
				contador++;
			}
		}
		if (contador==2){
			cout<<" \n El numero es primo\n";
			if(num1>primoM){
				primoM=num1;
				primoP=i;
			}
	
		}else{
			cout<<"\n El numero no es primo\n";
			
		}
		contador=0;
		
	}
	cout<<"\nEl mayor primo en el arreglo es:\n"<<primoM<<"\n y su posicion es:\n "<<primoP<<endl;
}
void programa3(){
	string name;
	system("cls");
	int seg;
	int paga,pagamayor,op,numhectareas;
		cout<<"		FUMIGACION DE COSECHAS\n";
		do{
		cout<<"Ingrese el nombre"<<endl;
		cin>>name;
		cout<<" Seleccione el tipo de fumigacion que desea:"<<endl;
		cout<<"1) contra malas hierbas, 10 dolares por hectarea\n";
		cout<<"2) contra langostas, 15 dolares por hectarea\n";
		cout<<"3) contra gusanos, 20 dolares por hectarea\n";
		cout<<"4) contra todo lo anterior, 30 dolares por hectarea\n";
		cin>>op;
		system("cls");
		cout<<"ingrese las hectareas a fumigar"<<endl;
		cin>>numhectareas;
		switch(op){
			case 1: paga=numhectareas*10;
			break;
			case 2: paga=numhectareas*15;
			break;
			case 3: paga=numhectareas*20;
			break;
			case 4: paga=numhectareas*30;
			break;
			default: cout<<"Seleccione una opcion correcta\n";
			break;
		}
		if (numhectareas>1000){
			paga=paga-(paga*0.5);
		}
		if (paga>3000){
			pagamayor=paga-3000;
			pagamayor=pagamayor-(pagamayor*0.1);
		}
		system("cls");
		cout<<name<<"debe pagar: "<<endl;
		cout<<pagamayor+3000<<endl<<endl;
		cout<<"Digite 1 para ingresar mas granjeros"<<endl;
		cout<<"Digite 2 para salir al menu principal"<<endl;
		cin>>seg;
		system("cls");
	}
	while(seg==1);
	system("cls");
}
void programa10(){
	system("cls");
	int n,sons,horasmes;
	string nom,cod;
	int sal,reten,salmensual,subsi;
	cout<<"		SALARIO EMPLEADOS CON HIJOS\n";
	cout<<"ingrese el numero de empleados"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++){
		cout<<"ingrese el nombre del empleado "<<i<<endl;
		cin>>nom;
		cout<<"ingrese el codigo de "<<nom<<endl;
		cin>>cod;
		cout<<"numero de hijos de"<<nom<<endl;
		cin>>sons;
		cout<<"ingrese el salario por hora de "<<nom<<endl;
		cin>>sal;
		cout<<"ingrese el numero de horas que trabaja por mes "<<nom<<endl;
		cin>>horasmes;
		salmensual=sal*horasmes;
	    if(salmensual<428000){
	    	if (sons<=12 && sons>6){
	    		reten=((salmensual/100)*((12-sons)/2));
				}
		    if (sons<=6){
		    	reten=((salmensual/100)*4);
			}
		}
		if (salmensual>=428000 && salmensual<1000000){
			if (sons<5){
				reten=((salmensual/100)*5);
			}
			else if(sons>=5 && sons<10){
				reten=10/sons;
			} 
			else
				reten=0;
		}
 		subsi=sons*17200;
		 cout<<"La informacion del empleado "<<nom<<" de codigo: "<<cod<<endl;
		 cout<<"devengado: "<<salmensual<<endl;
		 cout<<"retencion: "<<reten<<endl;
		 cout<<"subsidio: "<<subsi<<endl;
		 cout<<"Total a pagar: "<<salmensual-reten+subsi<<endl;
	}
	system("pause");
	system("cls");
	
}
void programa11(){
	system("cls");
	int vendedor, articulo, i, j;
	float venta, comision = 0;
	cout<<"		MARANON\n";
	cout<<"Ingrese el numero de vendedores"<<endl;
	cin>>vendedor;
	cout<<endl;
	
	for(i = 1; i <= vendedor; i++)
	{
		cout<<"Cuantos articulos vendio el "<<i<<" vendedor"<<endl;
		cin>>articulo;
		cout<<endl;
		
		for(j = 1; j <= articulo; j++)
		{
			cout<<"Ingrese el valor del "<<j<<" articulo vendido"<<endl;
			cin>>venta;
			cout<<endl;
			
			if(venta <= 100000)
			{
				comision = comision + ((venta * 10)/100);
			}
			else
			{
				comision = comision + ((venta * 7)/100);
			}
		}
		system("cls");
	}
	
	cout<<endl;
	cout<<"El valor total de las comisiones es de: "<<comision<<endl;
	system("pause");
	system("cls");
}
void programa1(){
	system("cls");
	int op,retiro,sumret=0,contret=0,consig,sumconsig=0,contcon=0;
	long int dif=0;
	cout<<"		CAJERO\n";
	do{
			cout<<"\n Seleccione una opcion:\n";
			cout<<"1) Retirar\n";
			cout<<"2) Consignar\n";
			cout<<"0) Salir\n";
			cin>>op;
			switch(op){
				case 1:
					cout<<"ingrese la suma de dinero a retirar\n";
					cin>>retiro;
					sumret+=retiro;
					contret++;
					system("cls");
				break;
				
				case 2:
					cout<<"ingrese la suma de dinero a consignar\n";
					cin>>consig;
					sumconsig+=consig;
					contcon++;
					system("cls");
				break;
				default: cout<<"Salir\n";
				break;
			}
		}
		while(op!=0);
		system("cls");
		cout<<"El total de dinero consigando fue de: "<<sumconsig<<" pesos\n";//dinero por consignaciones
		cout<<"El total de dinero retirado fue de: "<<sumret<<" pesos\n";//dinero por retiro
		if(contret>contcon){
			cout<<"\nHubo mas retiros que consiganciones\n";
			cout<<"El total de retiros fue: "<<contret<<endl;
			cout<<"El total de consiganciones fue: "<<contcon<<endl;
		}
		else if(contcon>contret){
			cout<<"\nHubo mas consignaciones que retiros\n";
			cout<<"El total de consignaciones fue: "<<contcon<<endl;
			cout<<"El total de retiros fue: "<<contret<<endl;
		}
		else {
			cout<<"\nHubo igual  consignaciones y retiros\n";
			cout<<"El total de consignaciones fue: "<<contcon<<endl;
			cout<<"El total de retiros fue: "<<contret<<endl;
		}
		dif=sumconsig-sumret;
		if(dif<0)
			dif*=-1;
		cout<<"\nLa diferencia absoluta fue de: "<<dif<<endl;
		system("pause");
		system("cls");
}
void programa22(){
	system("cls");
	int cta, vector[cta],fact=0,j=0,aux=0,sum=0,prom=0;
	cout<<"		PROMEDIO FACTORIAL MATRIZ\n";
	cout<<"Digite la cantidad de valores a ingresar \n";
	cin>>cta;
	cout<<"\n Digite un valor entero\n";
	for(i=0;i<cta;i++){
		cin>>vector[i];
		j=1;
		aux=1;
		if(vector[i]==1){
			fact=1;
			sum+=fact;
		}
		else if(vector[i]!=1){
			while(j<vector[i]){
				aux=aux*(j+1);
				j++;
			}
			fact=aux;
			sum+=fact;
		}
	}
	prom=sum/cta;    //promedio
	cout<<" El promedio de los factoriales de los numeros ingresados es: "<<prom<<endl;
	system("pause");
	system("cls");
}
void programa23(){
	system("cls");
	int i,j,M,N,mayor,numMa=0;
	cout<<"		REPETICIONES DEL NUMERO MAYOR MATRIZ\n";
	cout<<"ingrese el numero filas matriz_a"<<endl;
	cin>>M;
	cout<<"ingrese el numero de columnas matriz_a"<<endl;
	cin>>N;
	int matriz_a[M][N];
	i=0;
	while (i<M)
	{ j=0;
	while(j<N)
	{ cout<<"ingrese un numero entero en matriz_a["<<i<<"]["<<j<<"]"<<endl;
	cin>>matriz_a[i][j];
	j++;
	}
	i++;
	}
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
		{
		cout<<matriz_a[i][j]<<" ";
		}
		cout<<endl;
	
	}	
	mayor= matriz_a [0][0];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
		{
		if (matriz_a[i][j]>mayor){
			mayor=matriz_a [i][j];
			}
			
		}
	
	}	
		
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
		{
		if (matriz_a[i][j]==mayor){
			numMa++;
			}
			
		}
	
	}
	cout<<"\n el numero mayor es: \n "<<mayor<<endl;
	cout<<"\n se repite\n"<<numMa<<"\n veces\n"<<endl;							
	cout<<"el tamaÃ±o de matriz_a es: "<<i<<","<<j<<endl;
	system("pause");
	system("cls");
}
void programa25(){
	system("cls");
	int fil,col,j,matriz[100][100],k,cont=0,contpr=0;
	float prim=0;
	cout<<"	PRIMOS EN MATRIZ \n";
	cout<<"Ingrese la cantidad de filas de la matriz\n";
	cin>>fil;
	cout<<"Ingrese la cantidad de columnas de la matriz\n";
	cin>>col;
	cout<<"Ingrese valores enteros \n";
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			cin>>matriz[i][j];
			cont=0;
			for(k=1;k<=matriz[i][j];k++){
				prim=matriz[i][j]%k;
				if(prim==0)
					cont++;
			}
			if(cont==2)
				contpr++;
		}
	}
	
	cout<<"\n El numero de primos son: "<<contpr<<endl;
	system("pause");
	system("cls");
}
void programa24(){
	system("cls");
	int j, suc[100][100],aux=0,mayor[100][100],vtasur=0,vtacomp=0,vtames=0;
	cout<<"		ZAPATOS COLEGIALES\n";
	cout<<"SeÃ±or Director de TI, ingrese la siguiente informacion \n";
	for(i=0;i<12;i++){
		cout<<"para sucursal "<<i+1<<endl;
		for(j=0;j<12;j++){
			cout<<"Venta de la sucursal en el mes"<<j+1<<endl;
			cin>>suc[i][j];
		}
	}
	//ordenar la matriz de menor a mayor en las columnas..... por sucursal
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(suc[i][j]>suc[i][j+1]){
				aux=suc[i][j];
				suc[i][j]=suc[i][j+1];
				suc[i][j+1]=aux;
			}
		}
	}
	for(i=0;i<12;i++){
		mayor[i][0]=suc[i][11];
	}
	
	//guardar las ventas mayores de cada sucursal
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(mayor[j][0]>mayor[j+1][0]){
				aux=j+1;
				mayor[j][0]=j+2;
				mayor[j+1][0]=aux;
			}
		}
	}
	system("cls");
	cout<<" La sucursal con mayor ventas es "<<mayor[11][0]; 
	cout<<" La sucursal con menor ventas es "<<mayor[0][0]; 
	
	
	for(i=0;i<12;i++){
		cout<<"\n 	venta total por sucursal "<<i+1<<endl;
		vtasur=0;
		for(j=0;j<12;j++)
			vtasur+=suc[i][j];
		cout<<" venta total: "<<vtasur<<" pesos"<<endl;
		vtacomp+=vtasur;
	}
	for(j=0;j<12;j++){
		cout<<"\n	Ventas totales por mes "<<j+1<<endl;
		vtames=0;
		for(i=0;i<12;i++){
			vtames+=suc[i][j];
		}
		cout<<" venta total: "<<vtames<<" pesos"<<endl;
	}
	
	
	cout<<" venta total compania es de "<<vtacomp<<" pesos\n";
	
	//PROBAR
	
}

void programa15(){
	system("cls");
	char nombre [25];
	char sexo;
	int edad;
	int ojoscl;
	int cabellocl;
	int n=0;
	int contador1=0;
	int contador2=0;
	float estatura;
	float peso;
	cout<<"		REGISTRO EMPLEADOS\n ";

	do{
		cout<<"\n ingrese el nombre del alumno:\n";
		cin>>nombre;
		cout<<"\n introduce la edad:\n";
		cin>>edad;
		cout<<"\n introduce el sexo: [M] para masculino o [F] para femenino:\n";
		cin>>sexo;
		cout<<"\n introduce el color de ojos\n (1.Azules 2.Cafe 3.Otros)\n ";
		cin>>ojoscl;
		cout<<"\n introduce el color de cabello\n (1.CastaÃ±o 2.Rubio 3.Otros)\n ";
		cin>>cabellocl;
		cout<<"introduce la estatura en metros:\n";
		cin>>estatura;
		cout<<"introduce el peso en kg: \n";
		cin>>peso;
		if((sexo=='F'||sexo=='f')&&(estatura>=1.65&&estatura<=1.75)&&(peso<=55)&&(ojoscl==1)&&(cabellocl==2)){
			contador1++;
		cout<<"la alumna cumple con las caracteristicas\n"<<nombre<<endl;

		}else{
			if((sexo=='M'||sexo=='m')&&(estatura>=1.70)&&(peso>=60&&peso<=70)&&(ojoscl==2)){
				contador2++;
					cout<<"el alumno cumple con las caracteristicas\n"<<nombre<<endl;

			}else{
				cout<<"los datos ingresados NO cumplen con lo solicitado.\n";


			}
			cout<<"Desea intentar de nuevo?\n 1=si\n 2=no\n";
			cin>>n;



		}




	}while(n==1);

	cout<<" numero de mujeres con las caracteristicas pedidas:\n"<<contador1<<endl;
	cout<<" numero de hombres con las caracteristicas pedidas:\n"<<contador2<<endl;


	system("pause");
	system("cls");
}






int main(){
	int op;
	system("cls");
	do{
		cout<<"		Seleccione un programa \n";
		cout<<"\n1) Cajero1)\n";
		cout<<" 2) Universidad\n";
		cout<<" 3) Fumigacion de cosechas\n";
		cout<<" 4) Suma de enteros comprendidos\n";
		cout<<" 5) Promedio digito 5\n";
		cout<<" 6) Numeros del 1 al 10 \n";
		cout<<" 7) Serie fibonacci\n";
		cout<<" 8) Pertenece a serie fibonacci\n";
		cout<<" 9) Salario de los empresarios\n";
		cout<<" 10)Salario empleados con hijos\n";
		cout<<" 11)Maranon\n";
		cout<<" 12)Promedio grupos escolares\n";
		cout<<" 13)\n";
		cout<<" 14)Binario y hexadecimal\n";
		cout<<" 15)Registro empleados\n";
		cout<<" 16)\n";
		cout<<" 17)\n";
		cout<<" 18)Suma, producto y diferencia vectores\n";
		cout<<" 19)\n";
		cout<<" 20)\n";
		cout<<" 21)vector mayor primo leido\n";
		cout<<" 22)Promedio factorial matriz\n";
		cout<<" 23)Repeticiones del numero mayor matriz\n";
		cout<<" 24)Zapatos colegiales\n";
		cout<<" 25)Primos en matriz\n";
		cout<<" 00)Salir\n";
		cin>>op;

		switch(op) {
			case 9: programa9();//
			break;
			case 8:	programa8();//
			break;
			case 6:	programa6();//
			break;
			case 14:programa14();//
			break;
			case 2:programa2();//
			break;
			case 5:programa5();//
			break;
			case 7:programa7();//
			break;
			case 4:programa4();//
			break;
			case 12:programa12();//
			break;
			case 18:programa18();//
			break;
			case 21:programa21();//
			break;
			case 3:programa3();//
			break;
			case 10:programa10();//
			break;
			case 11:programa11();//
			break;
			case 1:programa1();//
			break;
			case 22:programa22();//
			break;
			case 23:programa23();//
			break;
			case 25:programa25();//
			break;
			case 24:programa24();//
			break;
			case 15:programa15();//
			break;
			default: cout<<"Salir \n";
			break;
		}
	} 
	while(op!=00);
	return 0;
}
