#include "Estadistica.h"
#include "Usuario.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>


using namespace std;

Estadistica::Estadistica()//char clave [100];char nombre[100];char apellido[100];int edad=0 ;char codigo[100];float peso=0.0;float altura=0.0;float IMC=0.0)
{//char clave [100];char nombre[100];char apellido[100];int edad=0 ;char codigo[100];float peso=0.0;float altura=0.0;float IMC=0.0;

}

Estadistica::~Estadistica()
{
    //dtor
}

void Estadistica::opciones()
{
    do            //Muestra las opciones de la base de datos
    {
        cout<<"Seleccione una opcion: \n";
        cout<<" (1)Buscar \n";
        cout<<" (2)Mostrar \n";
        cout<<" (3)Calcular IMC \n";
        cout<<" (4)Salir"<<endl;
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                {
                    buscar(); //registrar un usuario
                    break;
                }
            case 2:
                {
                    mostrarDatos();   //eliminar un usuario
                    break;
                }
            case 3:
                {
                    Modificar();
                    break;
                }

        }
    }while(opcion!=4);
}

void Estadistica::Modificar()
{
    ofstream aux;// sera el archivo en el que vayamos a poner los nuevos datos
    ifstream lectura;// archivo que se usara de lectura
    encontrado=false;

    aux.open("Auxiliar.txt",ios::out);//de escritura
    lectura.open("Prueba2.txt",ios::in);//de lectura
    if(lectura.fail() || aux.fail())//mensaje de error
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    else if(aux.is_open() && lectura.is_open())//Si ambos archivos estan abiertos, pasa lo siguiente:
    {
        cout<<"Ingresa la Clave de tu Usuario: ";cin>>auxClave;// se pide ingresar una clave
        lectura>>clave;// lectura adelantada
        while(!lectura.eof())// Mientras no se llegue al final del archivo lectura:
        {
            lectura>>nombre>>apellido>>edad>>codigo>>peso>>altura;
            if(strcmp(clave,auxClave)==0)//Si una clave del archivo lectura es igual a la ingresada
            {
                encontrado=true;
                    cout<<"_______________________________"<<endl;// se muestran los datos del usuario encontrado
                    cout<<"CLAVE DEL USUARIO: "<<clave<<endl;
                    cout<<"Nombre: "<<nombre<<endl;
                    cout<<"Apellido: "<<apellido<<endl;
                    cout<<"Edad: "<<edad<<endl;
                    cout<<"Codigo: "<<codigo<<endl;
                    cout<<"Peso: "<<peso<<" Kilogramos"<<endl;
                    cout<<"Altura: "<<altura<<" Metros"<<endl;
                    cout<<"_______________________________"<<endl;

// se vuelve a pedir nuevos datos para su modificacion

                    cout<<"Ingresa tu peso (en kilogramos) "<<": ";cin>>auxPeso;
                    cout<<"Ingresa tu altura (en metros) "<<": ";cin>>auxAltura;
                    aux<<clave<<" "<<nombre<<" "<<apellido<<" "<<edad<<" "<<codigo<<" "<<auxPeso<<" "<<auxAltura<<"\n";// en el archivo aux se guardan los nuevos datos
                    cout<<"Registro modificado. "<<endl;


                    cout<<"TU IMC ES: ";
                    calcularIMC();
            }
                    else
                        {
                            aux<<clave<<" "<<nombre<<" "<<apellido<<" "<<edad<<" "<<codigo<<" "<<peso<<" "<<altura<<"\n";// si no encuentra, manda lo leido a auxiliar
                        }

            lectura>>clave;//lectura adelantada
        }
    }
    if(encontrado==false)//si no se encontro la clave
    {
        cout<<"No hay usuarios registrados con la clave: "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();// se cierran archivos
    remove("Prueba2.txt");// se elimina el archivo Prueba2 y el archivo Auxiliar tendra como nuevo nombre Prueba2
    rename("Auxiliar.txt","Prueba2.txt");
}


float Estadistica::calcularIMC()
{
    IMC=auxPeso/(auxAltura*auxAltura);
    cout<<IMC<<endl;

    if (IMC<18.5){cout<<"Tu peso es bajo"<<endl;}
    else if(IMC>=18.5 && IMC<=24.9){cout<<"Tu peso es normal"<<endl;}
    else if(IMC>=25.0 && IMC<=29.9){cout<<"Tienes sobrepeso"<<endl;}
    else if(IMC>=30 ){cout<<"Sufres obesidad"<<endl;}
}
















