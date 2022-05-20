/* Producto máximo de dos números en una secuencia
• Dada una secuencia de n números no negativos y mayores que cero. 
• El objetivo es encontrar el mayor número que se pueda 
  obtener multiplicando dos números de esta secuencia.
• Usando un bucle for */

#include <iostream>

using namespace std;

int main(){
    int maxProduct,ax;
    int numeros[10] = {5,1,8,2,4,12,3,9,14,6};
    for (int i=0; i<10; i++){
        for (int j=9; j>i; j--){
            ax = numeros[i]*numeros[j];
            if (maxProduct<ax){
                maxProduct = ax;
            }
        }
    }
    cout<<"El producto maximo es: "<<maxProduct<<endl;
    return 0;
}