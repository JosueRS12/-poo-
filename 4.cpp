//ejemplo 4
//Ejercicio 2 poo
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int i,n;
class Operacion{
	public:
		void inser_num();
		void comprendidos();
	private:
		int a=0;
};

void Operacion::inser_num(){
	cout<<"Ingrese el numero \n";
	cin>>n;
}
 
void Operacion::comprendidos(){
	if (n>1){
		for(i=1;i<=n;i++){
			cout<<"los numeros comprendidos son:\n"<<i<<endl;
			a=a+i;
		}
		cout<<"la suma de todos los enteros es:\n"<<a<<endl;
	}
}

int main(){
	cout<<"		SUMA DE ENTEROS COMPRENDIDOS\n";
	Operacion suma;
	suma.inser_num();
	suma.comprendidos();
	return 0;
}
