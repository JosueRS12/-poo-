#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Operacion{
	public:
		void suma();
		void resta();
		void multiplicacion();
		void division();
		void exponenciacion();
		void obtenerNumeros();
		void imprimirResultado();
	private:
		float num1,num2,res;
};
void Operacion::obtenerNumeros(){
	cout<<"Digite el primer valor:";
	cin>>num1;
	cout<<"Digite el segundo valor:";
	cin>>num2;
}

void Operacion::suma(){
	res=num1+num2;
}

void Operacion::resta(){
	res=num1-num2;
}
void Operacion::division(){
	res=num1/num2;
}
void Operacion::multiplicacion(){
	res=num1*num2;
}
void Operacion::exponenciacion(){
	res=pow(num1,num2);
}
void Operacion::imprimirResultado(){
	cout<<"El resultado de la operacion es:"<<res;
}

main(){
	system("COLOR 0E");
	char op;
	cout<<"			MENU OPERACIONES\n\n";
	cout<<"1-Suma"<<endl;
	cout<<"2-Resta"<<endl;
	cout<<"3-Multiplicacion"<<endl;
	cout<<"4-Division"<<endl;
	cout<<"5-Exponenciacion"<<endl;
	cout<<"Digite la opcion:";
	cin>>op;
	
	Operacion p;
	p.obtenerNumeros();
	
	switch(op){
		case '1': p.suma();
		break;
		case '2': p.resta();
		break;
		case '3': p.multiplicacion();
		break;
		case '4': p.division();
		break;
		case '5': p.exponenciacion();
		break;		
	}
	p.imprimirResultado();
	return 0;
}


