#pragma once

using namespace System;

public ref class SensorNumerico {
	private:
		int codigo;
		int LecturaDeNumero;

	public:
		SensorNumerico();
		SensorNumerico(int codigo, int LecturaDeNumero);

};