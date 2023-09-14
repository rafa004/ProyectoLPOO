#include "Persona.h"

Persona::Persona() {

}
Persona::Persona(int codigo, String^ nombre, String^ dni, String^ ApellidoPaterno, String^ ApellidoMaterno) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->dni = dni;
	this->ApellidoPaterno = ApellidoPaterno;
	this->ApellidoMaterno = ApellidoMaterno;

}