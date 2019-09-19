#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stack>
using namespace std;

struct Nodo{
	int num;
	Nodo *siguiente;
};

void Push(Nodo *&,int); 
void Pop(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;	
	int num;
	char rpt;
	
	do{ 
		cout<<"Digite un numero: ";
		cin>>num;
		Push(pila,num);
	
		cout<<"\nQuiere agregar otro numero a pila(s/n): ";
		cin>>rpt;
	}while((rpt == 's')||(rpt=='S'));
	
	
	cout<<"\nMostrando los elementos de la pila: ";
	while(pila != NULL){
		Pop(pila,num);
		
		if(pila != NULL){
			cout<<num<<" , ";
		}
		else{
			cout<<num<<".";
		}
	}
	
	getch();
	return 0;
}

void Push(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->num = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" agregado a PILA correctamente";
}

void Pop(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->num;
	pila = aux->siguiente;
	delete aux;
}
