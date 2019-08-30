#include<iostream>
#include<stdlib.h>
using namespace std;

int multiplicacion(int num1,int num2){
	if(num1==0||num2==0){
	cout << "n=" << num2 << " caso base" << endl;
	return 1;
	}
	else{
	int a=num1;
	int b=num1*(num2-1);
	cout<<"n="<< num1<<"a="<< a<<"b="<< b<<endl;
	return a+b;
	}
}


int main(){
int resultado,numero1=0,numero2=0;

cout<<"Digite el valor del primer numero:"<<endl;
cin>>numero1;

cout<<"Digite el valor del segundo numero:"<<endl;
cin>>numero2;

resultado=multiplicacion(numero1,numero2);
	
cout<<"\n\nEl resultado es:"<<resultado;
	cout<<"\n"; 
	
	system("pause");
	return 0;
}
