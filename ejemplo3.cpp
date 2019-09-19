#include <iostream>
#include <stdlib.h>
using namespace std;
class Universidad{
	private://atributos
		string tipo;
		string nombre;
	public: //metodos y constructores
		Universidad(string,string);//constructor clase universidad
		void mostrarUniversidad(); //metodo
};
class Carrera : public Universidad{
	private:
			int codigoCarrera;
			string nombreCarrera;
		public:
			Carrera(string,string,int,string);//constructor clase carrera
			void mostrarCarrera();	
};
Universidad::Universidad(string _nombre,string _tipo){//constructor de la clase universidad (clase padre)
	nombre=_nombre;
	tipo=_tipo;
}
void Universidad:: mostrarUniversidad(){
	cout<<"Nombre ="<<nombre<<endl;
	cout<<"Tipo ="<<tipo<<endl;	
}

Carrera::Carrera(string _nombre, string _tipo, int _codigoCarrera, string _nombreCarrera):Universidad(_nombre,_tipo){//constructor de la clase carrera (clase hija)
	codigoCarrera=_codigoCarrera;
	nombreCarrera=_nombreCarrera;
} 
void Carrera::mostrarCarrera(){
	mostrarUniversidad();
	cout<<"codigo Carrera = "<<codigoCarrera<<endl;
	cout<<"Nombre Carrera = "<<nombreCarrera<<endl;
}

int main(){
	
	Carrera c("UNIVERSIDAD DISTRITAL","PUBLICA",1155,"INGENIERIA DE SISTEMAS");
	c.mostrarCarrera();
	system("pause");
	
	return 0;
}

