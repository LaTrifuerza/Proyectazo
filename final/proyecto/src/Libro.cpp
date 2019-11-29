#include "Libro.h"
#include "enamorar.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

Libro::Libro()
{
    cout << "BIENVENIDO, elige un estilo..." << endl;
}
void Libro::mostrar_estilos()
{
    do
    {
        cout << "(1)Romance" << endl;
        cout << "(2)Drama" << endl;
        cout << "(3)Fantasia" << endl;
        cout << "(4)Gotico" << endl;
        cin >> elegir_estilo;
        system("cls");
    }
    while(elegir_estilo>4 && elegir_estilo<=0);
    {
    if(elegir_estilo==1){
        romance();

    }
    if(elegir_estilo==2){
        drama();
    }
    if (elegir_estilo==3){
        fantasia();
    }
    if(elegir_estilo==4){
        gotico();
    }
    }
}

void Libro::drama()
{
    do
    {
    cout << "1. Si decido quedarme" << endl;
    cout << "2. Testamento de juventud" << endl;
    cout << "3. Patas arriba" << endl;
    cout << "4. La ladrona de libros" << endl;
    cout << "5. volver a estilos" <<endl;
    cin>> Rdrama;
    system("cls");
    }while(Rdrama<=0 || Rdrama>5);
    if(Rdrama==1){
        ifstream archivo;
        string texto;
        archivo.open("decido.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_dr();
    }
    if(Rdrama==2){
        ifstream archivo;//ifstream sirve para la lectura del archivo ,el objeto creado se usa como cin
        string texto;
        archivo.open("testamento.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_dr();
    }
    if (Rdrama==3){
        ifstream archivo;
        string texto;
        archivo.open("patas.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_dr();
    }
    if(Rdrama==4){
        ifstream archivo;
        string texto;
        archivo.open("ladrona.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
     vol_dr();
    }

if (Rdrama=5){
        mostrar_estilos();
    }
}

void Libro::fantasia()
{
    do
    {
    cout << "1. Susurros" << endl;
    cout << "2. Harry Potter" << endl;
    cout << "3. Percy Jackson" << endl;
    cout << "4. Volver a Estilos" << endl;
    cin>> Rfantasia;
    system("cls");
    }while(Rfantasia<=0 || Rfantasia>4);
    if(Rfantasia==1){
        ifstream archivo;
        string texto;
        archivo.open("susurros.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_fa();

    }
    if(Rfantasia==2){
        ifstream archivo;
        string texto;
        archivo.open("harrypotter.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_fa();
    }
    if (Rfantasia==3){
        ifstream archivo;
        string texto;
        archivo.open("percyjackson.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_fa();
    }
    if (Rfantasia=4){
        mostrar_estilos();
    }
}

void Libro::romance()
{
    do
    {
    cout << "1. A dos metros de ti" << endl;
    cout << "2. La raiz cuadrada del verano" << endl;
    cout << "3. El principe roto" << endl;
    cout << "4. El club de los Incomprendidos" << endl;
    cout << "5 .Canciones para Paula" << endl;
    cout << "6. Orgullo y Prejucio" << endl;
    cout << "7. Volver a estilos" << endl;
    cin>> fromance;
    system("cls");
    }while(fromance<=0 || fromance>7);
    if(fromance==1){
        ifstream archivo;
        string texto;
        archivo.open("dos.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
        }
        vol_ro();
    }
    if(fromance==2){
        ifstream archivo;
        string texto;
        archivo.open("raiz.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_ro();
    }
    if(fromance==3){
        ifstream archivo;
        string texto;
        archivo.open("prince.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_ro();
    }
    if(fromance==4){
        ifstream archivo;
        string texto;
        archivo.open("club.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_ro();
    }
    if(fromance==5){
        ifstream archivo;
        string texto;
        archivo.open("paula.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_ro();
    }
    if(fromance==6){
        ifstream archivo;
        string texto;
        archivo.open("orgullo.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_ro();
    }
    if (fromance=7){
        mostrar_estilos();
    }
}

void Libro::gotico()
{
    cout << "1. El cuervo" << endl;
    cout << "2. El retrato de Dorin Gray" << endl;
    cout << "3. El castillo de otranto" << endl;
    cout << "4. Los elixires del diablo" << endl;
    cout << "5. La torre de los siete jorobados" << endl;
    cout << "6. Melmoth el errabundo" << endl;
    cout << "7. Volver a estilos" << endl;
    cin>> Rgotico;
    system("cls");
    if(Rgotico==1){
        ifstream archivo;
        string texto;
        archivo.open("cuervo.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_go();
    }
    if(Rgotico==2){
         ifstream archivo;
        string texto;
        archivo.open("retrato.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_go();
    }
    if(Rgotico==3){
         ifstream archivo;
        string texto;
        archivo.open("castillo.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_go();
    }
    if(Rgotico==4){
         ifstream archivo;
        string texto;
        archivo.open("diablo.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_go();
    }
    if(Rgotico==5){
         ifstream archivo;
        string texto;
        archivo.open("torre.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_go();
    }
    if(Rgotico==6){
         ifstream archivo;
        string texto;
        archivo.open("errabundo.txt",ios::in);
        if(archivo.fail()){
            cout << "error" << endl;
        }
        while(!archivo.eof()){
            getline(archivo,texto);
            cout << texto << endl;
    }
    vol_go();
    }
    if(Rgotico==7){
        mostrar_estilos();
    }

}

void Libro::vol_ro()
{

    cout << "volver (v)" << endl;
    cin >> vo;
    system("cls");
    if (vo=='v')
    {
        romance();
    }
}

void Libro::vol_go()
{

    cout << "volver (v)" << endl;
    cin >> vo;
    system("cls");
    if (vo=='v')
    {
        gotico();
    }
}
void Libro::vol_dr()
{

    cout << "volver (v)" << endl;
    cin >> vo;
    system("cls");
    if (vo=='v')
    {
        drama();
    }
}
void Libro::vol_fa()
{
    cout << "volver (v)" << endl;
    cin >> vo;
    system("cls");
    if (vo=='v')
    {
        fantasia();
    }
}

Libro::~Libro()
{

}
