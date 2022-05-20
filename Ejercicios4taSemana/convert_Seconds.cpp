/*Write a program that converts a total number of
 seconds to hours, minutes, and seconds. • It should (1) prompt the user for input, (2) read an
 integer from the keyboard, (3) calculate the result, and
 (4) use std::cout to display the output
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <string.h>
int main(){
	int seg,min,h,s;
	std::cout<<"Numero de segundos a convertir: ";std::cin>>seg;
	s=seg;
	min=seg/60;
	seg=seg%60;
	h=min/60;
	min=min%60;
	std::cout<<s<<" Segundos = "<<h<<" horas "<<min<<" minutos "<<seg<<" Segundo ";
    return 0;
}