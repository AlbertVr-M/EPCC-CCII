#ifndef DIAMANTE_H
#define DIAMANTE_H
#include <iostream>
using namespace std;
class Diamante
{
    private:
	bool validar_letra(char& l);
    char letra {};

    public:
	Diamante();
	Diamante(char letra);
	~Diamante();
	string generar();
	void setLetra(char letra);
	void mostrar();	



};

#endif