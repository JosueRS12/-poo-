//ejercicio 16
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;


class Alumnos{
	public:
		void viaje_est();
	private:
		long int n, precio = 0, roam = 0;
};

void Alumnos::viaje_est(){
	long int n, precio = 0, roam = 0;
	
	cout<<"Ingrese el numero de alumnos"<<endl;
	cin>>n;
	cout<<endl;
	
	if (n >= 100)
	{
		precio = n * 65000;
		roam = 65000;
	}
	else
	{
		if(n >= 50 && n <= 99)
		{
			precio = n * 70000;
			roam = 70000;
		}
		else
		{
			if(n >= 30 && n <= 49)
			{
				precio = n * 95000;
				roam = 95000;
			}
			else
			{
				precio = 400000;					
			}			
		}
	}
	
	cout<<"El precio total a pagar a la compañia es de: $"<<precio<<endl<<endl;
	if(precio == 400000)
	{
		roam = 400000 / n;
		cout<<"Cada alumno debe pagar: $"<<roam<<endl;
	}
	else
	{
		cout<<"Cada alumno debe pagar: $"<<roam<<endl;
	}
}

int main(){
	cout<<"		VIAJE DE ESTUDIOS\n";
	Alumnos est;
	est.viaje_est();
	return 0;
}

















