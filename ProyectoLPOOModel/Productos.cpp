#include "Productos.h"

Productos::Productos() {

}
Productos::Productos(int codigo, double precio, int cantidad, String^ CodigodeBarras) {
	this->codigo = codigo;
	this->precio = precio;
	this->cantidad = cantidad;
	this->CodigodeBarras = CodigodeBarras;
}
