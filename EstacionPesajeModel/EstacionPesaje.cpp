#include "EstacionPesaje.h"

using namespace EstacionPesajeModel;

EstacionPesaje::EstacionPesaje() {

}

EstacionPesaje::EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud, List<PantallaLCD^>^ listaPantallaLCD, List<Vascula^>^ listaVascula, List<SensorBarras^>^ listaSensorBarras, List<BarreraVehicular^>^ listaBarreraVehicular, Usuario^ ObjUsuario, PropietarioVehiculo^ objPropietarioVehiculo, Tarjeta^ objTarjeta) {
	this->codigo = codigo;
	this->ubicacion = ubicacion;
	this->latitud = latitud;
	this->longitud = longitud;
	this->listaPantallaLCD = listaPantallaLCD;
	this->listaVascula = listaVascula;
	this->listaSensorBarras = listaSensorBarras;
	this->listaBarreraVehicular = listaBarreraVehicular;
	this->ObjUsuario = ObjUsuario;
	this->objPropietarioVehiculo = objPropietarioVehiculo;
	this->objTarjeta = objTarjeta;
}; 

EstacionPesaje::EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud) {
	this->codigo = codigo;
	this->ubicacion = ubicacion;
	this->latitud = latitud;
	this->longitud = longitud;
};


int EstacionPesaje::getCodigo() {
	return this->codigo;
}
void EstacionPesaje::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ EstacionPesaje::getUbicacion() {
	return this->ubicacion;
}
void EstacionPesaje::setUbicacion(String^ ubicacion) {
	this->ubicacion = ubicacion;
}

double EstacionPesaje::getLatitud() {
	return this->latitud;
}
void EstacionPesaje::setLatitud(int latitud) {
	this->latitud = latitud;
}

double EstacionPesaje::getLongitud() {
	return this->longitud;
}
void EstacionPesaje::setLongitud(int longitud) {
	this->longitud = longitud;
}