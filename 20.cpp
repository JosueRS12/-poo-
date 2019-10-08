//ejemplo 20
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
void burbuja(int *v,int Tam){
    int aux;
    for(int p = 0; p < Tam-1; p++){
        for(int i = p+1; i < Tam; i++){
            if(v[i] > v[p]){
                aux = v[i];
                v[i] = v[p];
                v[p] = aux;
            }
        }
    }
}
int cuenta(int *v, int b, int p,int Tam){
    int con = 0;
    for(int i = p; i < Tam; i++){
        if(v[i] == b){
            con++;
        }
    }
    return con;
}

class Vector{
	public:
		void cargar_vector();
	private:
		int vec1[100];
		int vec2[100];
		int vec3[100];
		int vec4[100];
		int vec5[100];
		int vecc[100];	
		int rep=0,n=0,a=0,ma=0,prom=0,j=0,k=0,m=0,op=0,o=0;
};

void Vector::cargar_vector(){
	cout<<"Ingrese la cantidad de numeros a operar\n";
	cin>>n;
	int Tam=n;
	n=n-1;
	for(int i=0;i<=n;i++)
	{
		cout<<"ingrese numero de la posicion "<<i<<"\n";
		cin>>vec1[i];	
	}
	do
	{
		system("cls");
		cout<<"\t\t\tMenu de opciones ";
		cout<<"\n\n1.Encontrar mayor y su pocision.";
		cout<<"\n2.mayores y menores al promedio.";
		cout<<"\n3.valores pares e impares";
		cout<<"\n4.Repeticion de los numeros.";
		cout<<"\n5.salir\n\n";
		cin>>op;
		switch(op)
		{
			case 1:
				//Numero mayor
				for (int i=0;i<=n;i++)
				{
					if(vec1[i]>ma)
					{
						ma=vec1[i];
						a=i;
					}
				}
				cout<<"El numero mayor esta en la pocision: "<<a<<" del vector\n\n";
				system("pause");				
			break;
			case 2:				
				//vectores del promedio
				for(int i=0;i<=n;i++)
				{
					prom=vec1[i]+prom;
				}
				prom=prom/n;
				for(int i=0;i<=n;i++)
				{
					if(vec1[i]<=prom)
					{						
						vec2[j]=vec1[i];
						j=j+1;		
					}	
					else if(vec1[i]>prom)
					{						
						vec3[k]=vec1[i];
						k=k+1;			
					}
				}
				cout<<"\nMenores o iguales al promedio: ";
				for(int i=0;i<j;i++)
				{
					cout<<vec2[i]<<", ";
				}
				cout<<"\nMayores al promedio: ";
				for(int i=0;i<k;i++)
				{
					cout<<vec3[i]<<", ";
				}
				cout<<"\n";
				system("pause");				
			break;
			case 3:
				//par o impar
				j=0;
				k=0;
			 	for(int i=0;i<=n;i++)
				{
					if(vec1[i] % 2 == 0)
					{						
						vec4[j]=vec1[i];
						j=j+1;		
					}	
					else 
					{						
						vec5[k]=vec1[i];
						k=k+1;			
					}
				}
					cout<<"\nPares: ";
				for(int i=0;i<j;i++)
				{
					cout<<vec4[i]<<", ";
				}
				cout<<"\nImpares: ";
				for(int i=0;i<k;i++)
				{
					cout<<vec5[i]<<", ";
				}
				cout<<"\n";
				system("pause");
			break;
			case 4:
				//veces que se repite	
				 burbuja(vec1,Tam);
			    o=0;
			    while(o < Tam){
			        m = cuenta(vec1, vec1[o], o, Tam);
			        cout<<"el valor "<<vec1[o]<<" se repite "<<m<<" veces"<<endl;
			        o += m;
			    }
				cout<<"\n";
				system("pause");			
			break;
			case 5:
				cout<<"Adios.";
				cout<<"\n";
				system("pause");
			break;
			default: cout<<"\nValor incorrecto.";
		}
	}while(op!=5);
}

int main(){
	cout<<"		Cargar un vector \n";
	Vector arr;
	arr.cargar_vector();
	return 0;
}










