/*Write a program that converts a temperature from Celsius to Fahrenheit.
It should (1) prompt the user for input, (2) read a double value from the keyboard, 
(3) calculate the result, and (4) format the output to one decimal place. 
When it's finished, it should work like this:*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    float celsius,resultado;
    cout<<"Ingresa la temperatura en Celsius: ";cin>>celsius;
    resultado=(celsius*9/5)+32;
    cout<<fixed<<setprecision(1)<<celsius<<" C = "<<resultado<<" F";
    return 0;
}