#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class VehiculoController {
	public:
		VehiculoController();
		List<Vehiculo^>^ buscarVehiculo(String^ placa);
	};


}
