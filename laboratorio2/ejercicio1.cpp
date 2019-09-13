#include<iostream>
using namespace std;

long recu(int m,int n){
    if(m==n){
        return m;
    }
    else if(m<n){
        return recu(m,n-m);
    }
    else{
        return recu(m-n,n);
    }
    
}

int main(){
long a,b;    

cout<<"Digite un numero:";
cin>>a;

cout<<"Digite un numero:";
cin>>b;

cout<<"El maximo comun divisor es:"<<recu(a,b)<<endl;
    
    return 0;
}

