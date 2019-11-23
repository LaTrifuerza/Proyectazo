#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
//#include <ctype.h>
using namespace std;

class Usuario
{
    protected:// nombre, apellido, edad, aspecto elegido, como empezo y como termino
            string nombre;
            char apellido[100];// tienen espacio de 100 para tener un buen rango de caracteres
            char codigo[100];
            char auxCodigo[100];//buscar
            int edad=0;// edad se inicializa en 0
            int opcion;// del menu opciones
            string opcionReg;// variable para registrar
            string opcionElim;// var. para eliminar
            char clave[100];
            char auxClave[100];//modificar
            bool encontrado=false;// de funcion buscar y modificar
            char auxNombre[100];// modificar nombre
            char auxApellido[100];// modificar
            char auxEdad[100];// modificar

    public:


        Usuario();
        ~Usuario();
//        void cuestionario();
        void mostrarDatos();
        void Registrar();
        void Eliminar();
        void Modificar();
        void opciones();
        void buscar();

};

#endif // USUARIO_H
