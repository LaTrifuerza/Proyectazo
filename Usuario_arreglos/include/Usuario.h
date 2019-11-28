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

/// CAMBIOOOOOOOOOOS
            float peso=0.0;
            float altura=0.0;
            int puntaje=0;
            int aux;// variable de subirPuntaje
            int repeticionesAb=0;
            int repeticionesPier=0;
            int repeticionesBra=0;
            int repeticionesEs=0;



            string str;
            int indice = 0;
            int indice_nombres = 0;
            string lineatexto[7];// numero de variables que tenga la linea en archivo.txt
            string nombres[20];
            string apellidos[5];
            string edades[5];
            string separador="|";

            int cont=0;// cuenta cuantos usuarios hay


 ///           char Array[100]; SI BORRO ESTO, ACA EMPIEZOOOO


    public:


        Usuario();
        ~Usuario();
        void ArrayUsuario();// Arreglo
        void mostrarDatos();
        void Registrar();
        void Eliminar();
        void Modificar();
        void opciones();
        void buscar();

        void Archivoaux();// crea un archivo para hacer el arreglo
        void AgregarPalabras(string str);
        void Lectura();
        void subirPuntaje();

};

#endif // USUARIO_H
