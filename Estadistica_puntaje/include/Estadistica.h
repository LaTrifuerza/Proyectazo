#ifndef ESTADISTICA_H
#define ESTADISTICA_H
#include "Usuario.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Estadistica:public Usuario
{

    private:
            float peso=0.0;
            float altura=0.0;
            float IMC;

            float auxPeso;
            float auxAltura;
    public:
        Estadistica();//char ,char ,char ,int ,char ,float ,float ,float);
        virtual ~Estadistica();
        void opciones();
        void Modificar();
        float calcularIMC();



};

#endif // ESTADISTICA_H











