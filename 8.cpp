//ejercicio 8
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
long int fib(int x){
	if(x==1||x==0){
		return x;
	}
	else
		return(fib(x-1)+fib(x-2));
}
class Serie{
	public:
		void inser_num();
		void cmp_mos();
	private:
		int i=0,cmp=0,num;
};
void Serie::inser_num(){
	cout<<"	Ingrese el numero\n";
	cin>>num;
}
void Serie::cmp_mos(){
	while(cmp==0&&fib(i)<=num){
		if(fib(i)==num)
			cmp=1;
		i++;
	}
	if(cmp==1)
		cout<<"\n El numero "<<num<<" pertenece a la serie fibonacci \n";
	else
		cout<<"\n El numero "<<num<<" no pertenece a la serie fibonacci \n";
}

int main(){
	Serie fib;
	fib.inser_num();
	fib.cmp_mos();
	return 0;
}

