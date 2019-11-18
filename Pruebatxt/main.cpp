#include "Usuario.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;


void preguntas()
{
    string nombre,apellido;
    int edad;
    cout<<"Nombre: ";cin>>nombre;
    cout<<"Apellido: ";cin>>apellido;
    cout<<"Edad: ";cin>>edad;
}

//void aniadir()
//{
//    ofstream aniadir;
//    string opcion;
//    aniadir.open("Prueba2.txt",ios::app);
//    if(aniadir.fail())
//    {
//        cout<<"No se pudo abrir el archivo.";
//        exit(1);
//    }
//    cout<<"Deseas aniadir otro ususario? "<<endl;
//    cin>>opcion;
//    if(opcion=="si")
//    {
//        string nombre,apellido;
//        int edad;
//        preguntas();
//        aniadir<<nombre<<" "<<apellido<<" "<<edad;
//    }
//    aniadir.close();
//}



//void lectura()
//{
//    ifstream info;
//    string texto;
//    info.open("Prueba2.txt",ios::in);
//
//    if(info.fail())
//    {
//        cout<<"El archivo no se pudo abrir.";
//        exit(1);
//    }
//    while(!info.eof())
//    {
//        getline(info,texto);
//        cout<<texto<<endl;
//    }
//    info.close();
//}

void cuestionario()
{
    string nombre,apellido;
    int edad;
    ofstream info;
    info.open("Prueba2.txt",ios::out);

    if(info.fail())
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }

    cout<<"Nombre: ";cin>>nombre;
    cout<<"Apellido: ";cin>>apellido;
    cout<<"Edad: ";cin>>edad;

    info<<nombre<<" "<<apellido<<" "<<edad;
    info.close();

}


int main()
{   Usuario p1;
    p1.opciones();
//   p1.cuestionario();
//    p1.aniadir();
    //lectura();
    //aniadir();
    system("pause");
return 0;
}
