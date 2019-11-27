#include "Usuario.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>

/// prueba
using namespace std;
Usuario::Usuario(){}

Usuario::~Usuario(){}


void Usuario::opciones()
{
    do            //Muestra las opciones de la base datos
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
                    Registrar(); //registrar un usuario
                    break;
                }
            case 2:
                {
                    Eliminar();   //eliminar un usuario
                    break;
                }
            case 3:
                {
                    Modificar();    //modificar un usuario
                    break;
                }
            case 4:
                {
                    mostrarDatos();     //mostrar los usuarios
                    break;
                }
            case 5:
                {
                    buscar();       //con la clave se buscan los usuarios
                    break;
                }

        }
    }while(opcion!=6);
}

void Usuario::Registrar()
{
    ofstream info;
    ifstream verificar;//verifica si ya hay registros con la misma clave

    bool repeticion=false;
    info.open("Prueba2.txt",ios::out|ios::app);//se abre el archivo y con el ios::app sera capaz de aniadir informacion al archivo, sin perder datos
    verificar.open("Prueba2.txt",ios::in);// se usa verificar para leer y comprobar la clave que se ingrese
    if(info.fail())// si no se abre el archivo, manda ese mensaje de error
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    cout<<"Deseas registrar otro usuario? "<<endl;
    cin>>opcionReg;
    if(opcionReg=="si" || opcionReg=="SI" || opcionReg=="Si")
    {
        if(info.is_open() && verificar.is_open())// si ambos archivos se abren, sucede lo siguiente.
            {
                cout<<"Ingresar clave del usuario: ";cin>>auxClave;
                verificar>>clave;//verificar, verifica la clave, si la hay
                while(!verificar.eof())//mientras no se llegue al final del archivo, pasa lo siguiente
                {
                    verificar>>nombre>>apellido>>edad>>codigo;//lectura adelantada de lo demas
                    if(strcmp(clave,auxClave)==0)// se comparan las claves almacenadas que fueron leidas con "verificar", con la auxClave que se ingreso, la funcion strcmp compara caracteres, y si da 0 es que son iguales
                    {
                        cout<<"Esta clave ya esta registrada en otro usuario."<<endl;
                        repeticion=true;// si las claves se repiten, repeticion cambia a true y se corta el programa
                        break; //se rompe el ciclo
                    }
                    verificar>>clave;
                }
                if(repeticion==false)// si se ingreso una nueva clave, se procede a la recoleccion de datos
                {
                    cout<<"....DATOS A REGISTRAR...."<<endl;
                    cout<<"Nombre: ";cin>>nombre;
                    cout<<"Apellido: ";cin>>apellido;
                    cout<<"Edad: ";cin>>edad;
                    cout<<"Codigo: ";cin>>codigo;

                    info<<auxClave<<" "<<nombre<<" "<<apellido<<" "<<edad<<" "<<codigo<<" "<<peso<<" "<<altura<<"\n";// En "info se almacenan los datos, siguiendo el orden en el que se pidieron"
                    cout<<"Su registro se ha completado. "<<endl;
                    cout<<"__________________________________________"<<endl;
                }
            }
    }
    info.close();
    verificar.close();// se cierran ambos archivos
}


void Usuario::Eliminar()
{
    ofstream aux;// sera el archivo en el que vayamos a poner los nuevos datos
    ifstream lectura;// sera un archivo en el que solo se leeran los datos antes de eliminar
    encontrado=false;

    aux.open("Auxiliar.txt",ios::out);//de escritura
    lectura.open("Prueba2.txt",ios::in);//de lectura
    if(lectura.fail() || aux.fail())// mensaje de error
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    else if(aux.is_open() && lectura.is_open())// si ambos archivos se abren pasa lo siguiente
    {
        cout<<"Ingresa la Clave del Usuario a Eliminar: ";cin>>auxClave;// en este caso no se pasara al nuevo archivo el alumno seleccionado
        lectura>>clave;// lectura adelantada
        while(!lectura.eof())//mientras no se termine de leer el archivo:
        {
            lectura>>nombre>>apellido>>edad>>codigo>>peso>>altura;
            if(strcmp(clave,auxClave)==0)// si la clave ingresada coincide con la clave de un usuario, muestra "usuario eliminado", y en el nuevo archivo se envian todos los usuarios menos el usuario seleccionado a traves de la clave
            {
                encontrado=true;
                    cout<<"Usuario Eliminado. "<<endl;

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
    lectura.close();//se cierran los archivos
    remove("Prueba2.txt");//se remueve el archivo Prueba2
    rename("Auxiliar.txt","Prueba2.txt");
}

void Usuario::Modificar()
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
        cout<<"Ingresa la Clave del Usuario a modificar: ";cin>>auxClave;// se pide ingresar una clave
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
                    cout<<"_______________________________"<<endl;

// se vuelve a pedir nuevos datos para su modificacion
                    cout<<"Ingresa la Nueva Clave del Usuario con Clave "<<clave<<": ";cin>>auxClave;// auxclave se modifica por que ya se ha verificado que la clave anterior existe
                    cout<<"Ingresa el Nuevo Nombre del Usuario con Clave "<<clave<<": ";cin>>auxNombre;
                    cout<<"Ingresa el Nuevo Apellido del Usuario con Clave "<<clave<<": ";cin>>auxApellido;
                    cout<<"Ingresa la Nueva Edad del Usuario con Clave "<<clave<<": ";cin>>auxEdad;
                    cout<<"Ingresa el Nuevo Codigo del Usuario con Clave "<<clave<<": ";cin>>auxCodigo;
                    aux<<auxClave<<" "<<auxNombre<<" "<<auxApellido<<" "<<auxEdad<<" "<<auxCodigo<<" "<<peso<<" "<<altura<<"\n";// en el archivo aux se guardan los nuevos datos
                    cout<<"Registro modificado. "<<endl;
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

void Usuario::mostrarDatos()
{
    ifstream info;//archivo de lectura
    string texto;
    info.open("Prueba2.txt",ios::out|ios::in);// se abre el archivo y se leera Prueba2

    if(info.fail())//mensaje de error
    {
        cout<<"El archivo no se pudo abrir.";
        exit(1);
    }

    else if(info.is_open()){// si "info" esta abierto:
            cout<<"Registro de usuarios de Personal Update \n"<<endl;
            cout<<"__________________________________________"<<endl;
        info>>clave;//lectura adelantada comprueba que hay algo para seguir
        while(!info.eof())//mientras info no termine de leer el archivo
        {
        info>>nombre>>apellido>>edad>>codigo>>peso>>altura;

        cout<<"Clave del usuario: "<<clave<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Apellido: "<<apellido<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"Codigo: "<<codigo<<endl;

        info>>clave;//otra lectura adelantada
        cout<<"__________________________________________"<<endl;
        }
    }
    info.close();//se cierra el archivo
}

void Usuario::buscar()
{
    ifstream info;// info solo leera el archivo
    info.open("Prueba2.txt",ios::out|ios::in);//se abre el archivo
    if(info.fail())//mensaje de error
    {
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }
    else if(info.is_open())// si el archivo se abre:
    {
        cout<<"Ingresa La Clave del usuario que quieres buscar: ";
        cin>>auxClave;// se pide una clave para saber si ya hay una registrada en otro usuario
        info>>clave; // lectura adelantada

        while(!info.eof())
            {
                info>>nombre>>apellido>>edad>>codigo>>peso>>altura;//leyendo info por grupo
//                if(strcmp(auxCodigo,codigo)==0){//funcion que compara strings
                    if(strcmp(clave,auxClave)==0){
                    cout<<"CLAVE DEL USUARIO: "<<clave<<endl;
                    cout<<"Nombre: "<<nombre<<endl;
                    cout<<"Apellido: "<<apellido<<endl;
                    cout<<"Edad: "<<edad<<endl;
                    cout<<"Codigo: "<<codigo<<endl;

                    cout<<"_______________________________"<<endl;
                    encontrado=true;//si entró, se volvio true
                    break;
                }
                info>>clave;//lectura adelantada
            }


        if(encontrado==false)// si no encuntra similitud entre las claves, no podrá mostrar nada
            {
                cout<<"No hay registros con la Clave ingresada: "<<auxClave<<endl;
            }
        info.close();//se cierra el archivo
    }
}

void Usuario::subirPuntaje()
{

    cout<<"Cuantos ejercicios para abdominales realizaste? ";cin>>repeticionesAb;
    aux=repeticionesAb/30;
    puntaje+=aux;

    cout<<"Cuantos ejercicios para piernas realizaste? ";cin>>repeticionesPier;
    aux=repeticionesPier/30;
    puntaje+=aux;
    cout<<"Cuantos ejercicios para brazos realizaste? ";cin>>repeticionesBra;
    aux=repeticionesBra/30;
    puntaje+=aux;
    cout<<"Cuantos ejercicios para espalda realizaste? ";cin>>repeticionesEs;
    aux=repeticionesEs/30;
    puntaje+=aux;
    cout<<"Tu puntaje actual es ---> "<<puntaje<<"    || 30 repeticiones de cada tipo = 1 Punto  ||"<<endl;
}





