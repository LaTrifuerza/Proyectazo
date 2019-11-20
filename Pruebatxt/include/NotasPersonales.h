#ifndef NOTASPERSONALES_H
#define NOTASPERSONALES_H
#include "Usuario.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <ctype.h>


using namespace std;


class NotasPersonales:public Usuario
{
    private:

    public:
            NotasPersonales();
            ~NotasPersonales();
};

#endif // NOTASPERSONALES_H
