#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;

class Usuario
{
    private:// nombre, apellido, edad, aspecto elegido, como empezo y como termino
            char nombre[100];
            char apellido[100];
            char codigo[100];
            char auxCodigo[100];//buscar
            int edad=0;
            int opcion;
            string opcionReg;
            string opcionElim;
            char clave[100];
            char auxClave[100];
            bool encontrado=false;// de funcion buscar y modificar
            char auxNombre[100];// modificar nombre
            char auxApellido[100];
            char auxEdad[100];

    public:

        Usuario();
        ~Usuario();
        void cuestionario();
        void mostrarDatos();
        void Registrar();
        void Eliminar();
        void Modificar();
        void opciones();
        void buscar();

};

#endif // USUARIO_H
