#ifndef INTELIGENCIA_H
#define INTELIGENCIA_H
#include <string>
#include <iostream>
using namespace std;

class Inteligencia
{
    private:
            int opcion_preg;
    public:
            Inteligencia();
            ~Inteligencia();
            void Pregunta();
            void Matematica();
            void Historia();
            void Musica();
};

#endif // INTELIGENCIA_H
