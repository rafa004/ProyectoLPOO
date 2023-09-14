#pragma once

using namespace System;

public ref class Cliente {
private:
	String^ ListaDecompras;
	double PuntosBonus;

public:
	Cliente();
	Cliente(String^ ListaDecompras, double PuntosBonus);

};