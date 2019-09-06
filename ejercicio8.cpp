
//Alberto Enrique De Leon Quiñonez 00087919
#include<iostream>
using namespace std;

int recursion2 (int i,int j){
    if(j==i){
        //cout<<i<<end;
    }
    else{
        cout<<j<<endl;
        recursion2(i,j+1);
    }
}

int recursion(int i){
    if(i==1){
        cout<<i<<endl;
    }
    else{
        cout<<i<<endl;
        recursion(i-1);
    }
}

int main(){
    cout<<"ejercicio 8:"<<endl;
    int i;
    int j=1;
    
    cout<<"Ingrese un numero entero positivo: ";
    cin>>i;
    
    recursion2(i,j);
    recursion(i);
    
    return 0;
}
