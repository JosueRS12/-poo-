#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class persona{
	public:
		void dormir(); //metodos
		void hablar();
		void contar ();
		void adquirirnombre();
		void decirnombre();
	private:
		char nombre[40];
	};
	void persona::dormir(){
		cout<<"zzz"<<endl;
	}
	void persona::hablar(){
		cout<<"blablabla"<<endl;
	}
	void persona::contar(){
		cout<<"1.2.3.4.5.6.7.8.9"<<endl;
	}
	void persona::adquirirnombre(){
		cout<<"soy una persona(ingrese nombre)"<<endl;
		cin>>nombre;
	}
	void persona::decirnombre(){
		cout<<"mi nombre es: "<<nombre<<endl;
	}
  int main(){
    int respuesta;
    cout<<"desea crear una persona? (1=si, 0=no)"<<endl;
    cin>>respuesta;
    if (respuesta==1){
    	persona p;
    	p.adquirirnombre();
    	cout<<"desea que diga mi nombre? (1=si, 0=no)"<<endl;
    	cin>>respuesta;
    	if (respuesta==1){
    		p.decirnombre();
    		
		}
		cout<<"desea escucharme hablar? (1=si, 0=no)"<<endl;
		cin>>respuesta;
		if (respuesta==1){
			p.hablar();
		}
		cout<<"desea que vaya a dormir? (1=si, 0=no)"<<endl;
		cin>>respuesta;
		if (respuesta==1){
			p.dormir();
		}
		cout<<"desea oirme contar? (1=si, 0=no)"<<endl;
		cin>>respuesta;
		if (respuesta==1){
			p.contar();
		}
			}
}

