//ejemplo 12
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int i;
class Estudiante{
	public:
		void promedio_est();
	private:
		int cta,j=0,est[100],mat[100][100],l=0,k=0,sumnot[100][100];
		double notas[100],promest=0,aux=0,promgrup=0,promgrupos[100],promediof=0,aux2=0;
};

void Estudiante::promedio_est(){
	cout<<"		PROMEDIO GRUPOS ESCOLARES\n";
	cout<<"Ingrese la cantidad de grupos\n";
	cin>>cta;
	j=0;
	for(i=0;i<cta;i++){
		cout<<"Ingrese la cantidad de estudiantes del grupo "<<i+1<<endl;
			cin>>est[j];
			j++;
	}
	system("cls");
	for(i=0;i<cta;i++){
		cout<<" Para grupo "<<i+1<<endl;
		for(j=0;j<est[i];j++){
			cout<<"Ingrese la cantidad de materias que ve el alumno "<<j+1<<endl;
			cin>>mat[i][j];
			k=0;
			aux2=0;
			while(k!=mat[i][j]){
				aux=0;
				cout<<" Ingrese las notas de la materia "<< k+1<<endl;
				for(l=0;l<3;l++){
					cin>>notas[l];
				}
				aux=(notas[0]+notas[1]+notas[2])/3;
				aux2+=aux;
				k++;
			}
			sumnot[i][j]=aux2; //i es el grupo y j es el alumno
			system("cls");
		}
		system("cls");
	}	
	//promedio de notas de cada alumno
	for(i=0;i<cta;i++){
		aux=0;
		cout<<"\nGrupo "<<i+1<<endl;
		for(j=0;j<est[i];j++){
			cout<<" Promedio notas de estudiante "<<j+1<<endl;
			promest=sumnot[i][j]/mat[i][j];
		
			aux+=promest;
			cout<<" es: "<<promest<<endl;
		}
		cout<<"Promedio de notas grupo ";
		promgrup=aux/est[i];
		cout<<" es: "<<promgrup<<endl;
		promgrupos[i]=promgrup;
	}
	aux=0;
	for(i=0;i<cta;i++){
		promediof+=promgrupos[i];
	}
	aux=promediof;
	promediof=aux/cta;
	cout<<"\n Promedio de los "<<cta<<" grupos es: "<<promediof<<endl;
}


int main(){
	Estudiante est;
	est.promedio_est();
	return 0;
}











