//ejercicio 6
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
class Numeros{
	public:
		void uno_diez();
	private:
		int i=10,k=1;
};

void Numeros::uno_diez(){
	cout<<"		NUMEROS DEL 1 AL 10 \n";
	while(i!=0){
		cout<<k++<<endl;
		i--;
	}
}

int main(){
	Numeros diez;
	diez.uno_diez();
	return 0;
}

