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
            float IMC;

            float auxPeso;
            float auxAltura;
    public:
        Estadistica();
        virtual ~Estadistica();
        void opciones();
        void Modificar();
        float calcularIMC();

};

#endif // ESTADISTICA_H
