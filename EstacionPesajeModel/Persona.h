#pragma once

using namespace System;

namespace EstacionPesajeModel {
    public ref class Persona {
        /*Primero definimos los atributos*/
    protected:
        int codigo;
        String^ nombre;
        String^ apellidoPaterno;
        String^ apellidoMaterno;
        String^ dni;

        /*Ahora los m�todos*/
    public:
        Persona();
        Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);

        int getCodigo();
        void setCodigo(int codigo);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getApellidoPaterno();
        void setApellidoPaterno(String^ apellidoPaterno);

        String^ getApellidoMaterno();
        void setApellidoMaterno(String^ apellidoMaterno);

        String^ getDni();
        void setDni(String^ dni);

    };
}