//Hecho en parejas
#include<iostream>
#include<stdlib.h>
using namespace std;

struct mundo{
	char continente[20];
	char pais[20];
	char capital[20];
	int poblacion;
}continentes[5];

int main(){
	int mayor=0,posM=0;
	int pob_t=0;
	
	for(int i=0;i<5;i++){
		fflush(stdin);
		cout<<"Digite un continente:";
		cin.getline(continentes[i].continente,20,'\n');
		cout<<"\n";
		for(int j=0;j<5;j++){
		fflush(stdin);
		cout<<"Digite un pais del continente:";
		cin.getline(continentes[j].pais,20,'\n');
		cout<<"Digite la capital:";
		cin.getline(continentes[j].capital,20,'\n');
		cout<<"Digite la poblacion:";
		cin>>continentes[j].poblacion;
		pob_t+=continentes[j].poblacion;
		cout<<"\n";
	}
	cout<<"La poblacion total del continente es:"<<pob_t;
		cout<<"\n";
		cout<<"\n";
}

	for(int i=0;i<5;i++){
		cout<<"Continente: "<<continentes[i].continente<<endl;
		for(int j=0;j<5;j++){
		cout<<"Pais: "<<continentes[j].pais<<endl;
		cout<<"Capital: "<<continentes[j].capital<<endl;
		cout<<"Poblacion: "<<continentes[j].poblacion<<endl;
	}
	cout<<"\n";
	}
	
	for(int j=0;j<5;j++){
	if(continentes[j].poblacion>mayor){
		mayor=continentes[j].poblacion;
		posM=j;
	}	
	}
	
	cout<<"\n.:Continente con mayor poblacion:"<<endl;
	cout<<"Continente: "<<continentes[posM].continente<<endl;
		
	system("pause");
	return 0;
}
