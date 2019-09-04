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





int main(){
	int op;
	system("cls");
	do{
		cout<<"		Seleccione un programa \n";
		cout<<"\n 1)";
		cout<<" 2)";
		cout<<" 3)";
		cout<<" 4)";
		cout<<" 5)";
		cout<<" 6)";
		cout<<" 7)";
		cout<<" 8)";
		cout<<" 9)\n";
		cout<<" 10)";
		cout<<" 11)";
		cout<<" 12)";
		cout<<" 13)";
		cout<<" 14)";
		cout<<" 15)";
		cout<<" 16)\n";
		cout<<" 17)";
		cout<<" 18)";
		cout<<" 19)";
		cout<<" 20)";
		cout<<" 22)";
		cout<<" 23)";
		cout<<" 24)\n";
		cout<<" 25)";
		cout<<" 00)Salir\n";
		cin>>op;

		switch(op) {
			case 9: programa9();
			break;
			case 8:	programa8();
			break;

			default: cout<<"Salir \n";
			break;
		}
	
	
	
	}
	while(op!=00);
	return 0;
}
