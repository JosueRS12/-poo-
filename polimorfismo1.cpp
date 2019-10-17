//ejercicio 1 de polimorfismo
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
		private://atributos
			int edad;
			string nombre;
		public:
			Persona(string,int);//Constructor
			virtual void mostrar();//polimorfismo
};

class Alumno: public Persona{
	private:
		float notafinal;
	public:
		Alumno(string,int,float);//constructor clase Alumno
		void mostrar();	
};

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);//constructor clase universitario
		void mostrar();
};

//Constructor clase persona
Persona::Persona(string _nombre,int _edad){//constructor de la clase PERSONA(clase padre)
	nombre=_nombre;


}
