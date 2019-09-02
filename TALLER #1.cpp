#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <io.h>
#include <fstream>
#include <time.h>
using namespace std;
int main ()
{setlocale(LC_ALL, "");
	int opcion;
	while (opcion!=26)
	{
cout<<"Bienvenido"<<endl;
cout<<"---Seleccione el programa que desea calificar:-- "<<endl;
cout<<"1.Cajero.\n";
cout<<"2.Información Universidad.\n";
cout<<"3.Fumigación.\n";
cout<<"4.Sucesión.\n";
cout<<"5.Promedio de # terminados en 5.\n";
cout<<"7.Serie Fibonacci.\n";
cout<<"Opcion: ";
cin>>opcion;
	switch(opcion){
		case 2:{
			int n;
			float ed, peec,seec,ceec,phin,chin;
			string c;
			seec=0;
			ceec=0;
			chin=0;
			cout<<"Ingrese el número de estudiantes de la universidad"
			
			break;
		}
		case 4 :{
			system("cls");
			int n,nf;
			cout<<"Ingrese el número: ";
			cin>>n;
			nf=((n*(1+n))/2);
			cout<<"La suma comprendida entre el número 1 y el número "<<n<<" es: "<<nf<<endl;
			system("pause");
			system("cls");
			break;
		}
		case 5:{
			system("cls");
			float prm,vf;
			int n,contador;
			cout<<"Ingrese números enteros cualesquiera y para terminar ingrese un 0\n";
			do
			{
				cin>>n;
				
				if(n%5==5)
				{
					contador=contador+1;
					prm=prm+n;
					vf=prm/contador;
				}
			}
			while(n!=0);			
							cout<<vf<<endl;
vf=0;
			system("pause");
			system("cls");
			break;
		}
		case 7:{
			system("cls");
		int i, n, cont = 0;
 
   		long long int a[1000];
 
	    a[0] = 1;
	    a[1] = 1;
 /*
    cout << "Numero de terminos de la serie = ";
 
    cin >> n;
 */
	    cout << "\n";
 
	    for(i=1; i < 22; i++){
 
    	    a[i+1] = a[i-1] + a[i];
 
	    }
 
 		cout<<"0 \n";
    	for(i=0; i < 22; i++){
		 
        	cout << a[i] << " \n";
 
        	cont += 1;  
	    }
 	   cout << "\n";
 			system("pause");
 			system("cls");	
			break;
		}
	
			
		default:
		if(opcion <1 || opcion >26)
			{
				cout<<"\nEsta opcion no es valida.\a"<<endl;
				system("pause");
				system("cls");
			}
	break;
	}
		
		
		
	}
	
	
	
	system("pause");
	return 0;
}
