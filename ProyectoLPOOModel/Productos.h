#pragma once

using namespace System;

public ref class Productos {
	private:
		int codigo;
		double precio;
		int cantidad;
		String^ CodigodeBarras;
	public:
		Productos();
		Productos(int codigo, double precio, int cantidad, String^ CodigodeBarras);

};