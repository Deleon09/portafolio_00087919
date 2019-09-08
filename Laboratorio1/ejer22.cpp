#include <iostream>
#include <conio.h>
using namespace std;

int main(){
cout<<"ejercicio 22:"<<endl;
int matriz[5][5];

cout<<"Digite una matriz tri - diagonal en una matriz de 5x5"<<endl;

for (int i=0;i<5;i++ ){
for(int j=0; j<5; j++){
cout<<"Digite un numero en ["<<i<<"]["<<j<<"]: ";
cin>>matriz[i][j];
}
}


for (int i=0;i<5;i++ ){
for(int j=0; j<5; j++){
cout<<matriz[i][j];
cout<<"  ";
}
cout<<endl;

}
getch();
return 0;
}
