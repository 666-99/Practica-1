#pragma once
#include <iostream>

using namespace std;

class Zombie
{
public:
	string nombre;
	int energia;
	int velocidad;
	int posicionX;
	int posicionY;
	int da�o;

	void atacar();
	void moverse();
};

