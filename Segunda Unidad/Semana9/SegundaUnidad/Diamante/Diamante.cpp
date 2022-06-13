#include <sstream>
#include "Diamante.h"
using namespace std;

Diamante::Diamante()
{
	this->letra = 'A';
}

Diamante::Diamante(char letra)
{
	if (validar_letra(letra))
		this->letra = letra;
	else
	{
		cout << "No ingreso una letra" << endl;
		this->letra = 'A';
	}
}


bool Diamante::validar_letra(char& l)
{
	l = towupper(l);
	if (l > 90 || l < 65)
		return false;
	return true;
}

void Diamante::setLetra(char letra)
{
	if (validar_letra(letra))
		this->letra = letra;
	else
	{
		cout << "No ingreso una letra" << endl;
		this->letra = 'A';
	}
}
void Diamante::mostrar()
{
	cout << generar();
}
string Diamante::generar()
{
	string diamante;
	stringstream ss;
	int numAst = letra - 65;
	int astC = 0;

	char i = 65;

	while (i <= letra)
	{ 
		for (int j = 0; j < numAst; j++)
			ss << "*";
		if (astC > 0)
		{
			ss << i;
			for (int j = 0; j < astC; j++)
				ss << "*";
			ss << i;
			astC++;
		}
		else
			ss << i;
		for (int j = 0; j < numAst; j++)
			ss << "*";

		ss << "\n";
		numAst--;
		astC++;
		i++;
	}

	i -= 2;
	numAst = 1;
	astC -= 4;

	while (i >= 'A')
	{
		for (int j = 0; j < numAst; j++)
			ss << "*";
		if (astC > 0)
		{
			ss << i;
			for (int j = 0; j < astC; j++)
				ss << "*";
			ss << i;
			astC--;
		}
		else
			ss << i;
		for (int j = 0; j < numAst; j++)
			ss << "*";

		ss << "\n";
		numAst++;
		astC--;
		i--;
	}

	diamante = ss.str();
	return diamante;
}


Diamante::~Diamante()
{
}