//ejercicio 18
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;

class Vectores{
	public:
		void inser_vec();
		void sum_vec();
		void pro_vec();
		void dif_vec();
	private:
		int n,i;
		int arregloA[1000];
		int arregloB[1000];
		int arregloC[1000];
		int num1,num2;
};

void Vectores::inser_vec(){
	cout<< "Ingrese el tamano del Arreglo A y Arreglo B\n";
	cin>>n;
	for(i=0;i<n;i++){
		int num1;
		cout<<"\n Ingrese los numeros que van en el arreglo A\n";
		cin>>num1;
		arregloA[i]=num1;
	}
	for(i=0;i<n;i++){
		num1=arregloA[i];
		cout<<num1<<endl;
	}
		for(i=0;i<n;i++){
		cout<<"\n Ingrese los numeros que van en el arreglo B\n";
		cin>>num2;
		arregloB[i]=num2;
	}
		for(i=0;i<n;i++){
		num2=arregloB[i];
		cout<<num2<<endl;
	}
}


void Vectores::sum_vec(){
	cout<<"\n SUMA DE LOS ARREGLOS\n";
	int arregloC[n];
	for(i=0;i<n;i++){
		arregloC[i]=arregloA[i]+arregloB[i];
		cout<<" "<<arregloC[i]<<endl;
	
	}
}
void Vectores::dif_vec(){
	cout<<"\n RESTA DE LOS ARREGLOS\n";
	for(i=0;i<n;i++){
		arregloC[i]=arregloA[i]-arregloB[i];
		cout<<" "<<arregloC[i]<<endl;
	
	}
}

void Vectores::pro_vec(){
		cout<<"\n PRODUCTO DE LOS ARREGLOS\n";
	for(i=0;i<n;i++){
		arregloC[i]=arregloA[i]*arregloB[i];
		cout<<" "<<arregloC[i]<<endl;
	
	}
}

int main(){
	cout<<"		SUMA, PRODUCTO Y DIFERENCIA VECTORES\n";
	Vectores op;
	op.inser_vec();
	op.sum_vec();
	op.dif_vec();
	op.pro_vec();
	return 0;
}








