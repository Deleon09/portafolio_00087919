#include<iostream>
#include<conio.h>
using namespace std;

struct complejo{
	float real,imaginaria;
}z;

void pedirDatos(){
	cout<<"Digite el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z.real;
	cout<<"Parte Imaginaria: "; cin>>z.imaginaria;
}

complejo conjugada(complejo z){
	z.real=z.real;
	z.imaginaria=-z.imaginaria;
	
	return z;
}

void muestra(complejo x){
	cout<<"\nLa conjugada es: "<<x.real<<" , "<<x.imaginaria<<endl;
}

int main(){
cout<<"Ejercicio 26:"<<endl;
	pedirDatos();
	
	complejo x=conjugada(z);
	muestra(x);
	
	getch();
	return 0;
}
