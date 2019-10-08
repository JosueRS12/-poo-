//ejemplo 24
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int i;

class Sucursal{
	public:
		void datos();
	private:
		int j, suc[100][100],aux=0,mayor[100],vtasur=0,vtacomp=0,vtames=0,cmp[100];
	
};

void Sucursal::datos(){
	cout<<"		ZAPATOS COLEGIALES\n";
	cout<<"Senor Director de TI, ingrese la siguiente informacion \n";
	for(i=0;i<12;i++){
		cout<<"\npara sucursal "<<i+1<<endl;
		for(j=0;j<12;j++){
			cout<<"Venta de la sucursal en el mes "<<j+1<<endl;
			cin>>suc[i][j];
		}
		system("cls");
	}
	system("cls");
	for(j=0;j<12;j++){
		cout<<"	Ventas totales por mes "<<j+1<<endl;
		vtames=0;
		for(i=0;i<12;i++){
			vtames+=suc[i][j];
		}
		cout<<" venta total: "<<vtames<<" pesos"<<endl;
	}
	cout<<endl;
	for(i=0;i<12;i++){
		cout<<"	venta total por sucursal "<<i+1<<endl;
		vtasur=0;
		for(j=0;j<12;j++)
			vtasur+=suc[i][j];
		cout<<" venta total: "<<vtasur<<" pesos"<<endl;
		vtacomp+=vtasur;
		mayor[i]=vtasur;
		cmp[i]=vtasur;
	}	
	aux=0;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(mayor[j]>mayor[j+1]){
				aux=mayor[j];
				mayor[j]=mayor[j+1];
				mayor[j+1]=aux;
			}
		}
	}
	//comprobar mayor ventas
	cout<<endl;
	aux=0;
	i=0;
	while(aux==0){
		if(mayor[12]==cmp[i]){
			aux=1;
		}
		else
			i++;
	}
	cout<<"\n La sucursal con mayor ventas fue la "<<i<<endl;
	
	//comprobar menor ventas
	aux=0;
	i=0;
	while(aux==0){
		if(mayor[1]==cmp[i]){
			aux=1;
		}
		else
			i++;
	}
	cout<<" La sucursal con menor ventas fue la "<<i<<endl;
	cout<<"\nventa total compania es de "<<vtacomp<<" pesos\n";
}

int main(){
	Sucursal zap;
	zap.datos();
	return 0;
}




