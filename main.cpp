#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
using namespace std;

//Segundo Ejercicio
int numMin(int a[], int i, int j) {
	if (i == j)
	return i;
	int k = numMin(a, i + 1, j);
	return (a[i] < a[k])? i : k;
}

void recursivoAsc(int a[], int n, int i = 0) {
	if (i == n)
	return;
	int k = numMin(a, i, n-1);
	if (k != i)
	swap(a[k], a[i]);
	recursivoAsc(a, n, i + 1);
}

//3 Ejercicio
 int suma(int n,int d){
 			if(d<=n)	
			int acum=0;
			int=0;	
			acum+=2*i(d-1)/i*(i+1);
			cout<< acum; 
       
       
  	}
  	
  	
int main(int argc, char** argv) {
	
	int opcion=0;
	do{ 
		cout<<"1. Ejercicio" <<endl << "2. Ejercicio " << endl << "3. Ejercicio" << endl;
		cout<<"Ingrese opcion: ";
		cin>>opcion;
		
	switch(opcion){
	case 1:
	{
		
	 	string cadena;
	 	cout<<"Ingrese cadena: ";
	 	cin>>cadena;
	 	bool e;
	 	for(int i; i < cadena.length(); i++){
	
	 	if(cadena.length()!=0){
	 	cout<< cadena[i];	
	 	}
	
	 	}
	}
	 break;
     
	case 2:
	{
	
		int arreglo[] ={12,15,45,1,2,5,9,99,88,77,76,55,52,39,41,28,30,42,17};
		int k = sizeof(arreglo)/sizeof(arreglo[0]);
		recursivoAsc(arreglo, k);
		for(int i = 0; i<k ; i++)
		cout << arreglo[i] << " ";
		cout << endl;
		return 0;
	}
	 break;
	case 3:
		cout<<"Ejercicio 1" << endl;
		int n;
		cout<<"Ingrese n: ";	
		cin>>n;
		for(int i=1; i <= n ; i++){
		int acum;
		suma(n,i,acum);
	}
    }
    cout<<endl;
	break; 	
	
    
	}while(opcion!=4);
	return 0;
}

