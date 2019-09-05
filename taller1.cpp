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
	cout<<"		Programa 8 \n";
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
	cout<<"		Programa 6 \n";
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
	cout<<"		Programa 14 \n";
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
		peem=(ceem/n)*100; //porcentaje mujeres menores a 20 años
		pemin=semin/cemin; //promedio mujeres ingenieria
		ph=(ch/n)*100; //porcentaje hombres derecho
		i++;
		system("cls");
		
	}
		cout<<" promedio de edad estudiantes de contaduria es: "<<peec<<endl;
		cout<<" porcentaje de estudiantes hombres que estudian ingenieria la noche: "<<phin<<endl;
		cout<<" porcentaje de estudiantes mujeres que estudian ingenieria y son menores a 20 años "<<peem<<endl;
		cout<<" promedio de estudiantes mujeres que estudian ingenieria "<<pemin<<endl;
		cout<<" porcentaje de estudiantes hombres que estudian derecho y que son mayores a 22 años "<<ph<<endl;
		system("pause");
		system("cls");
	
}
void programa5(){
	cout<<"	Ingrese el numero \n";
	do{
		cin>>num;
		if(num/)
	}	
	while(num!=0);
}


int main(){
	int op;
	system("cls");
	do{
		cout<<"		Seleccione un programa \n";
		cout<<"\n 1)\n";
		cout<<" 2) Universidad\n";
		cout<<" 3)\n";
		cout<<" 4)\n";
		cout<<" 5)\n";
		cout<<" 6) Numeros del 1 al 10 \n";
		cout<<" 7)\n";
		cout<<" 8) Pertenece a serie fibonacci\n";
		cout<<" 9) Salario de los empresarios\n";
		cout<<" 10)\n";
		cout<<" 11)\n";
		cout<<" 12)\n";
		cout<<" 13)\n";
		cout<<" 14) Binario y hexadecimal\n";
		cout<<" 15)\n";
		cout<<" 16)\n";
		cout<<" 17)\n";
		cout<<" 18)\n";
		cout<<" 19)\n";
		cout<<" 20)\n";
		cout<<" 22)\n";
		cout<<" 23)\n";
		cout<<" 24)\n";
		cout<<" 25)\n";
		cout<<" 00)Salir\n";
		cin>>op;

		switch(op) {
			case 9: programa9();
			break;
			case 8:	programa8();
			break;
			case 6:	programa6();
			break;
			case 14:programa14();
			break;
			case 2:programa2();
			break;

			default: cout<<"Salir \n";
			break;
		}
	} 
	while(op!=00);
	return 0;
}
