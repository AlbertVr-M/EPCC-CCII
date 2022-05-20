/* • Escriba una función areFactors que tome un entero n y un
vector de enteros, y devuelva true si los números en el
vector son todos factores de n (lo que significa que n es
divisible por todos ellos). */

#include <iostream>
using namespace std;
bool areFactors (int n, int vec[]){
    int ctd;
    for (int i=0; i<5; i++){
        if (vec[i]%n==0){     
            ctd++;
        }
    }
    if (ctd==5){
        return true;
    }
    return false;
}
int main(){
    int vector [5] = {10,20,30,40,4};
    int x = 5;
    if(areFactors(x,vector)==1){
        cout<<"Verdadero";
    }
    else{
        cout<<"Falso";
    }
    return 0;
}
