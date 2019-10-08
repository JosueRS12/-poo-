//ejemplo 10
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int n,i;
class Persona{
	public:
		void inser_datos();
		void calcular();
		void mostrar();
	private:
		int sons,horasmes;
		string nom,cod;
		int sal,reten,salmensual,subsi;
};

void Persona::inser_datos(){
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
}

void Persona::calcular(){
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
}
void Persona::mostrar(){
	cout<<"La informacion del empleado "<<nom<<" de codigo: "<<cod<<endl;
	 cout<<"devengado: "<<salmensual<<endl;
	 cout<<"retencion: "<<reten<<endl;
	 cout<<"subsidio: "<<subsi<<endl;
	 cout<<"Total a pagar: "<<salmensual-reten+subsi<<endl;
}

int main(){
	Persona empleado;
	cout<<"		SALARIO EMPLEADOS CON HIJOS\n";
	cout<<"ingrese el numero de empleados"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++){
		empleado.inser_datos();
		empleado.calcular();
		empleado.mostrar();
	}
	return 0;
}










