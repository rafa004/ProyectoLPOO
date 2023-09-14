#pragma once

using namespace System;

public ref class Persona {
	private:
		int codigo;
		String^ nombre;
		String^ dni;
		String^ ApellidoPaterno;
		String^ ApellidoMaterno;
	public:
		Persona();
		Persona(int codigo, String^ nombre, String^ dni, String^ ApellidoPaterno, String^ ApellidoMaterno);

};