#include <iostream>
#include "TarjetaController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


TarjetaController::TarjetaController() {

}

List<Tarjeta^>^ TarjetaController::buscarTarjeta(String^ numeroTarjeta) {
	/*En esta lista vamos a colocar la informaci�n de los proyectos que encontremos en el archivo de texto*/
	List<Tarjeta^>^ listaTarjetasEncontrados = gcnew List<Tarjeta^>();
	array<String^>^ lineas = File::ReadAllLines("Tarjeta.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);
		bool estadoTarjeta = Convert::ToDouble(datos[1]);
		String^ numeroTarjetaTarjeta = datos[2];

		if (numeroTarjetaTarjeta->Contains(numeroTarjeta)) {
			Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, estadoTarjeta, numeroTarjetaTarjeta);
			listaTarjetasEncontrados->Add(objTarjeta);
		}
	}
	return listaTarjetasEncontrados;
}