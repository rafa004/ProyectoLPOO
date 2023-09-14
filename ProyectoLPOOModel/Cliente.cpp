#include "Cliente.h"

Cliente::Cliente() {

}
Cliente::Cliente(String^ ListaDecompras, double PuntosBonus) {
	this->ListaDecompras = ListaDecompras;
	this->PuntosBonus = PuntosBonus;
}