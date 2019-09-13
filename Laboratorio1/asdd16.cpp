//Alberto Enrique De Leon Quiñonez 00087919
#include<iostream>

using namespace std;

int main() {
    cout<<"ejercicio 16:"<<endl;

    int arreglo[10];
    int prom=0;
    int suma=0;
    
    for(int i=0;i<10;i++){
        cout<<"Digite 10 numeros enteros: "<<endl;
        cin>>arreglo[i];
        suma+=arreglo[i];
        prom=suma/10;
    }
    
    cout<<"La suma de los elementos del arreglo es:"<<suma<<endl;
    cout<<"el promedio de los elementos del arreglo es:"<<prom<<endl;
    
    return 0;
}
