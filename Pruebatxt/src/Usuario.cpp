#include "Usuario.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <ctype.h>


using namespace std;
Usuario::Usuario(){}

Usuario::~Usuario(){}

void Usuario::mostrarDatos()
{
    ifstream info;
    string texto;
    info.open("Prueba2.txt",ios::out|ios::in);

    if(info.fail())
    {
        cout<<"El archivo no se pudo abrir.";
        exit(1);
    }

    else if(info.is_open()){
            cout<<"Registro de usuarios de Personal Update \n"<<endl;
            cout<<"__________________________________________"<<endl;
        info>>clave;//lectura adelantada comprueba que hay algo para seguir
        while(!info.eof())
        {
        info>>nombre>>apellido>>edad>>codigo;
//        getline(info,texto); ///obtenia TODO el texto
//        cout<<texto<<endl;
        cout<<"Clave del usuario: "<<clave<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Apellido: "<<apellido<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"Codigo: "<<codigo<<endl;

        info>>clave;//otra lectura adelantada
        cout<<"__________________________________________"<<endl;
        }
    }
    info.close();
}

void Usuario::Registrar()
{
    ofstream info;
    ifstream verificar;//verifica si ya hay registros con la misma clave

    bool repeticion=false;
    info.open("Prueba2.txt",ios::out|ios::app);
    verificar.open("Prueba2.txt",ios::in);
    if(info.fail())
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    cout<<"Deseas registrar otro usuario? "<<endl;
    cin>>opcionReg;
    if(opcionReg=="si" || opcionReg=="SI" || opcionReg=="Si")
    {
        if(info.is_open() && verificar.is_open())
            {
                cout<<"Ingresar clave del usuario: ";cin>>auxClave;
                verificar>>clave;//verificar, verifica la clave, si la hay
                while(!verificar.eof())
                {
                    verificar>>nombre>>apellido>>edad>>codigo;//lectura adelantada de lo demas
                    if(strcmp(clave,auxClave)==0)
                    {
                        cout<<"Esta clave ya esta registrada en otro usuario."<<endl;
                        repeticion=true;
                        break; //se rompe el ciclo
                    }
                    verificar>>clave;
                }
                if(repeticion==false)
                {
                    cout<<"....DATOS A REGISTRAR...."<<endl;
                    cout<<"Nombre: ";cin>>nombre;
                    cout<<"Apellido: ";cin>>apellido;
                    cout<<"Edad: ";cin>>edad;
                    cout<<"Codigo: ";cin>>codigo;

                    info<<auxClave<<"\n"<<nombre<<"\n"<<apellido<<"\n"<<edad<<"\n"<<codigo<<"\n";
                    cout<<"Su registro se ha completado. "<<endl;
                    cout<<"__________________________________________"<<endl;
                }
            }
//          else{cout<<"Su archivo no se pudo abrir o NO ha sido creado. "<<endl;}
    }
    info.close();
    verificar.close();
}

void Usuario::opciones()
{
    do
    {
        cout<<"Seleccione una opcion: \n";
        cout<<" (1)Registrar \n";
        cout<<" (2)Eliminar \n";
        cout<<" (3)Modificar \n";
        cout<<" (4)Mostrar \n";
        cout<<" (5)Buscar \n";
        cout<<" (6)Salir"<<endl;
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                {
                    Registrar();
                    break;
                }
            case 2:
                {
                    Eliminar();
                    break;
                }
            case 3:
                {
                    Modificar();
                    break;
                }
            case 4:
                {
                    mostrarDatos();
                    break;
                }
            case 5:
                {
                    buscar();
                    break;
                }

        }
    }while(opcion!=6);
	if(opcion==1){Registrar();}
	else if(opcion==2){Eliminar();}
	else if(opcion==3){Modificar();}
    else if(opcion==4){mostrarDatos();}
    else if(opcion==5){buscar();}
}


void Usuario::buscar()
{
    ifstream info;
    info.open("Prueba2.txt",ios::out|ios::in);//se abre el archivo
    if(info.fail())
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    else if(info.is_open())
    {
        cout<<"Ingresa La Clave del usuario que quieres buscar: ";
        cin>>auxClave;
        info>>clave; // lectura adelantada
///        encontrado=false;  no es necesario porque ya esta declarado en Usuario.h
        while(!info.eof())
            {
                info>>nombre>>apellido>>edad>>codigo;//leyendo info por grupo
//                if(strcmp(auxCodigo,codigo)==0){//funcion que compara strings
                    if(strcmp(clave,auxClave)==0){
                    cout<<"CLAVE DEL USUARIO: "<<clave<<endl;
                    cout<<"Nombre: "<<nombre<<endl;
                    cout<<"Apellido: "<<apellido<<endl;
                    cout<<"Edad: "<<edad<<endl;
                    cout<<"Codigo: "<<codigo<<endl;
                    cout<<"_______________________________"<<endl;
                    encontrado=true;//si entro, se volvio true
                    break;
                }
                info>>clave;//lectura adelantada
            }


        if(encontrado==false)
            {
                cout<<"No hay registros con la Clave ingresada: "<<auxClave<<endl;
            }
        info.close();//se cierra el archivo
    }
}

void Usuario::Modificar()
{
    ofstream aux;// sera el archivo en el que vayamos a poner los nuevos datos
    ifstream lectura;
    encontrado=false;

    aux.open("Auxiliar.txt",ios::out);//de escritura
    lectura.open("Prueba2.txt",ios::in);//de lectura
    if(lectura.fail() || aux.fail())
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    else if(aux.is_open() && lectura.is_open())
    {
        cout<<"Ingresa la Clave del alumno a modificar: ";cin>>auxClave;
        lectura>>clave;// lectura adelantada
        while(!lectura.eof())
        {
            lectura>>nombre>>apellido>>edad>>codigo;
            if(strcmp(clave,auxClave)==0)
            {
                encontrado=true;
                    cout<<"_______________________________"<<endl;
                    cout<<"CLAVE DEL USUARIO: "<<clave<<endl;
                    cout<<"Nombre: "<<nombre<<endl;
                    cout<<"Apellido: "<<apellido<<endl;
                    cout<<"Edad: "<<edad<<endl;
                    cout<<"Codigo: "<<codigo<<endl;
                    cout<<"_______________________________"<<endl;

                    cout<<"Ingresa la Nueva Clave del alumno con Clave "<<clave<<": ";cin>>auxClave;// auxclave se modifica por que ya se ha verificado que la clave anterior existe
                    cout<<"Ingresa el Nuevo Nombre del alumno con Clave "<<clave<<": ";cin>>auxNombre;
                    cout<<"Ingresa el Nuevo Apellido del alumno con Clave "<<clave<<": ";cin>>auxApellido;
                    cout<<"Ingresa la Nueva Edad del alumno con Clave "<<clave<<": ";cin>>auxEdad;
                    cout<<"Ingresa el Nuevo Codigo del alumno con Clave "<<clave<<": ";cin>>auxCodigo;
                    aux<<auxClave<<"\n"<<auxNombre<<"\n"<<auxApellido<<"\n"<<auxEdad<<"\n"<<auxCodigo<<"\n";
                    cout<<"Registro modificado. "<<endl;
            }
                    else
                        {
                            aux<<clave<<"\n"<<nombre<<"\n"<<apellido<<"\n"<<edad<<"\n"<<codigo<<"\n";// si no encuentra, manda lo leido a auxiliar
                        }

            lectura>>clave;//lectura adelantada
        }
    }
    if(encontrado==false)//si no se encontro la clave
    {
        cout<<"No hay usuarios registrados con la clave: "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("Prueba2.txt");
    rename("Auxiliar.txt","Prueba2.txt");
}

void Usuario::Eliminar()
{
    ofstream aux;// sera el archivo en el que vayamos a poner los nuevos datos
    ifstream lectura;
    encontrado=false;

    aux.open("Auxiliar.txt",ios::out);//de escritura
    lectura.open("Prueba2.txt",ios::in);//de lectura
    if(lectura.fail() || aux.fail())
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    else if(aux.is_open() && lectura.is_open())
    {
        cout<<"Ingresa la Clave del alumno a Eliminar: ";cin>>auxClave;// en este caso no se pasara al nuevo archivo el alumno seleccionado
        lectura>>clave;// lectura adelantada
        while(!lectura.eof())
        {
            lectura>>nombre>>apellido>>edad>>codigo;
            if(strcmp(clave,auxClave)==0)
            {
                encontrado=true;
                    cout<<"Usuario Eliminado. "<<endl;

            }
                    else
                        {
                            aux<<clave<<"\n"<<nombre<<"\n"<<apellido<<"\n"<<edad<<"\n"<<codigo<<"\n";// si no encuentra, manda lo leido a auxiliar
                        }

            lectura>>clave;//lectura adelantada
        }
    }
    if(encontrado==false)//si no se encontro la clave
    {
        cout<<"No hay usuarios registrados con la clave: "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("Prueba2.txt");
    rename("Auxiliar.txt","Prueba2.txt");
}


