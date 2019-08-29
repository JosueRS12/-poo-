#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Empleado{
	char s[20];
	int nh;
	char ne[20];
	char c[20];
}empleado1;

int main(){
	
	int n,i,tf;
	float sb=0,r=0,sn=0,tm=80000*10;
	
	cout<<"Ingrese la cantidad de empleados \n";
	cin>>n;
	
	cout<<"Ingrese la tarifa \n";
	cin>>tf;
	
	i=0;
	while(i!=n){
		fflush
		cout<<"nombre: ";
		cin.getline(empleado1.ne,20,'\n');
		cout<<"horas:";
		cin>>empleado1.nh;
		cout<<"codigo: ";
		cin.getline(empleado1.c,20,'\n');
		cout<<"sexo: ";
		cin.getline(empleado1.s,20,'\n');
		
		if(empleado1.nh>=240&&empleado1.nh<300)
			sb=(tm-empleado1.nh)*2.5;
		else if(empleado1.nh>=300)
			sb=(tm-empleado1.nh)*1.7;
		else if(tm=sb)
			cout<<"El salario neto es: "<<tm<<endl;
		
		if(sb>=tm&&sb<1000000){
			r=sb*0.5;
			sn=sb-r;
		}
		else if(sb>=1000000 && sb<2000000) {
			r=sb*0.1;
			sn=sb-r;
		}
		else{
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
	
	
	return 0;
}
