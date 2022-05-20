/*Producto máximo de dos números en una secuencia
  Dada una secuencia de n números no negativos y mayores que cero. 
  El objetivo es encontrar el mayor número que se pueda obtener
  multiplicando dos números
*/
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	cout<<"* ";
	for(int i=1;i<=10;i++){
		cout<<" "<<i<<" ";
	}
	cout<<"\n";
	cout<<"                           ";
	cout<<"\n";
	for(int i=1;i<=10;i++){
		cout<<i<<"   ";
		for(int j=1;j<=10;j++){
			cout<<i*j<<"  ";
		}
		cout<<"\n";	
	}
	return 0;
}