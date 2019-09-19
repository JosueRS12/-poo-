#include <iostream>
#include <stdlib.h>
using namespace std;
class Persona {
	private:
		int edad;
		string nombre;
	public:
		Persona(string,int);
		void mostrarpersona();
};

class Empleado : public Persona {
	private: 
		float sueldo;
	public 
		Empleado(string,int,float);
		void mostrarEmpleado();
}
class Estudiante : public Persona {
	private:
		float notafinal;
	public:
		Estudiante(string,intfloat);
		void mostrarEstudiante();
};

class Universitario : public Estudiante {
	private:
		string carrera;
	public:
		Universitario(string,int,float,string);
		void mostrarUniversitario();
};
//constructor clase persona

Persona:: Persona(string _nombre, int _edad){
	nombre=_nombre;
	edad= _edad;
}

void Persona::mostrarPersona(){
	cout<<"Nombre = "<<nombre<<endl;
	cout<<"Edad = "<<edad<<endl;
}

//constructor clase empleado
Empleado::Empleado(string _nombre, int _edad,float _sueldo): perosna(_nombre,_edad){
	sueldo=_sueldo;
}
void Empleado::mostrarEmpleado(){
	mostrarpersona();
	cout<<"sueldo ="<<sueldo<<endl;
}
//constructor estudiante
Estudiante :: Estudiante (string _nombre,int _edad, float _notafinal): Persona(_nombre,_edad){
	notafinal=_notafinal;	
}
void Estudiante::mostrarEstudiante(){
	mostrarpersona();
	cout<<"Nota final ="<<notafinal<<endl;
}

Universitario::Universitario(string _nombre,int _edad, float _notafinal, string _carrera): Estudiante(_nombre,_edad,_notafinal){
	carrera=_carrera;
	mostrarEstudiante();
	cout<<"Carrera ="<<carrera<<endl;
}

int main(){
	Empleado Empleado1("Alejandro",30,2000);
	cout<<"-----Empleado----"<<endl;
	Empleado1.mostrarEmpleado();
	cout<<"\n";
	Estudiante Estudiante1("Maria Alejandra",18,4.5);
	cout<<"----Estudiante---"<<endl;
	Estudiante1.mostrarEstudiante();
	cout<<"\n";
	Universitario Universitario1("Sofia",17,4.5,"ING SISTEMAS");
	cout<<"------Universiario----"<<endl;
	Universitario1.mostrarUniversitario();
	system("pasue");
	return 0;
}
	
	
	
	
	
	
	
	
}




















