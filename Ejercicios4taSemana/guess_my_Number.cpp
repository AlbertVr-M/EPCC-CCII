/*
Exercise 3. guessMyNumber.cpp
The goal of this exercise is to program a Guess My Number game.
*/
#include <iostream>
#include <cmath>
#include <time.h>
#include <random>
#include <stdio.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int a,ax;
	std::cout<<"Estoy pensando un numero entre el 1 y el 100, Puedes adivinarlo? \n";
	std::cout<<"Escribe el numero: ";std::cin>>a;
	std::cout<<"Tu numero es: "<<a<<"\n";
	int num;
	num=1+rand()%(101-1);
	std::cout<<"El numero que estaba pensando es: "<<num<<"\n";
	if(a>=num){ax=a-num;}else{ax=num-a;}
	std::cout<<"La resta de los numeros es: "<<ax;
	return 0;
}


