//Ejercicio 2 poo
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int n;
class Estudiante{
	public:
		void inser_edad();
		void inser_sexo();
		void inser_carrera();
		void inser_jornada();
		void gen_datos();
		void mostrar();
	private:
		int ed;
		char j[20];
		char cr[20];
		char s[20];
		string datos;
		float seec=0,ceec=0,chin=0,peem=0,ceem=0,semin=0,pemin=0,ph=0,ch=0,phin=0,peec=0,cemin=0;
	};
	void Estudiante::inser_edad(){
		cout<<"	Digite la edad:\n";
		cin>>ed;
	}
	void Estudiante::inser_sexo(){
		cout<<" Ingrese el sexo:\n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(s,datos.c_str());
	}
	void Estudiante::inser_carrera(){
		cout<<" Ingrese la carrera \n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(cr,datos.c_str());
	}
	void Estudiante::inser_jornada(){
		cout<<" Ingrese la jornada \n";
		rewind(stdin);
		getline(cin,datos);
		strcpy(j,datos.c_str());
	}
	void Estudiante::gen_datos(){
		if(strcmp(cr,"contaduria")==0){
			seec+=ed;
			ceec++; 
		}
		if(strcmp(s,"masculino")==0&&strcmp(cr,"ingenieria")==0&&strcmp(j,"nocturna")==0)
			chin++;
		if(strcmp(s,"femenino")==0&&ed<20&&strcmp(cr,"ingenieria")==0)
			ceem++;
		if(strcmp(s,"femenino")==0&&strcmp(cr,"ingenieria")==0)
			semin+=ed;
			cemin++;
		if(strcmp(s,"masculino")==0&&strcmp(cr,"derecho")==0&&strcmp(j,"nocturna")==0&&ed>22)
			ch++;
		peec=seec/ceec; //promedio de edad estudiantes contduria
		phin=(chin/n)*100; //porcentaje hombres ingenieria noche
		peem=(ceem/n)*100; //porcentaje mujeres menores a 20 años
		pemin=semin/cemin; //promedio mujeres ingenieria
		ph=(ch/n)*100; //porcentaje hombres derecho
	}
	void Estudiante::mostrar(){
		cout<<" promedio de edad estudiantes de contaduria es: "<<peec<<endl;
		cout<<" porcentaje de estudiantes hombres que estudian ingenieria la noche: "<<phin<<endl;
		cout<<" porcentaje de estudiantes mujeres que estudian ingenieria y son menores a 20 anos "<<peem<<endl;
		cout<<" promedio de estudiantes mujeres que estudian ingenieria "<<pemin<<endl;
		cout<<" porcentaje de estudiantes hombres que estudian derecho y que son mayores a 22 anos "<<ph<<endl;
		system("pause");
	}
	
	int main(){
		int i=1;
		Estudiante est;
		cout<<"		UNIVERSIDAD\n";
		cout<<"	Ingrese el numero de estudiantes \n";
		cin>>n;
	
		while(i<=n){
			est.inser_carrera();
			est.inser_edad();
			est.inser_jornada();
			est.inser_sexo();
			est.gen_datos();
			i++;
			system("cls");
		}
		est.mostrar();
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
