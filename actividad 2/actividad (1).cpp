#include <iostream> 
#include <stdlib.h> 
using namespace std; 

int main() { 

int total;
cout<<"Ingrese el # de datos del arreglo:"<<endl;
cin>>total;

float aux,suma=0; 

for(int i=0;i<total;i++){
	cout<<"Ingrese los datos de menor a mayor"<<(i+1)<<":";
	cin>>aux;
	suma+=aux;
}

cout<<"El valor de la mediana es:"<<(suma/total)<<endl;

system("pause"); 
return 0; 
}
