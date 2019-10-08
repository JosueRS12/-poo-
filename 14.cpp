//ejercicio 14
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int i, num;
class Numeros{
	public:
		void inser_num();
		void convertir();
	private:
		int arr[10], k=0, n;
};

void Numeros::inser_num(){
	cout<<" Ingrese un numero en base 10 mayor a 0\n";
	cin>>num;
	n=num;
}

void Numeros::convertir(){
	while(num>0){
		arr[k]=num%2;
		num/=2;
		k++;
	}
	cout<<"El equivalente en binario de "<<n<<" es: \n";
	for(i=k-1;i>=0;i--){
		cout<<arr[i];
	}
}

int main(){
	cout<<"		BINARIO\n";
	Numeros bin;
	bin.inser_num();
	bin.convertir();
	return 0;
}









