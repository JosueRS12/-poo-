//ejemplo 22
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int i;
class Numeros{
	public:
		void calcular_fact();
	private:
		int cta,fact=0,j=0,aux=0,sum=0,prom=0;
};

void Numeros::calcular_fact(){
		cout<<"		PROMEDIO FACTORIAL MATRIZ\n";
	cout<<"Digite la cantidad de valores a ingresar \n";
	cin>>cta;
	int vector[cta];
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
}

int main(){
	Numeros num;
	num.calcular_fact();
	return 0;
}
