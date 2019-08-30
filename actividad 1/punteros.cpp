#include <iostream>
#include <conio.h>
using namespace std;

void calculos(int num, int*doble, int*triple){
	cout<<"la direccion del doble en la funcion es:"<<doble<<endl;
	*doble=2*num;
	*triple=3*num;
}

int main(){
	int numero=2,doble=0,triple=0;
	
	calculos(numero,&doble,&triple);
	
	cout<<"El doble de 2 es:"<<doble<<endl;
	cout<<"el triple de 2 es:"<<triple<<endl;
	cout<<"la direccion del doble en el main es:"<<&doble<<endl;
	cout<<"la direccion del triple de 2 es:"<<&triple<<endl;
	
	getch();
	return 0;
}
