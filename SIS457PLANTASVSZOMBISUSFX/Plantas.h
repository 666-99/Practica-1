#pragma once
#include <iostream>
using namespace std;
class Plantas
{
public:
	string nombre;
	int energia;
	int posicionX;
	int posicionY;
	int daño;

	void atacar();
	void reventar();
};

