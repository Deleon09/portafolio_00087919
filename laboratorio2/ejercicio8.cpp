#include <iostream>
using namespace std;

long recursiva(long x,long y){
    if(x>0){
        return recursiva(x/10, y+1);
    }
    return y;
}

int main() {
    long n;
    
    cout<<"Digite un numero:";
    cin>>n;
    
    cout<<"El numero tiene: "<<recursiva(n,0)<<" digitos"<<endl;

    return 0;
}

