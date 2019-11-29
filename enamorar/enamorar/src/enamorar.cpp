#include "Enamorar.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

Enamorar::Enamorar()
{
    cout << "BIENVENIDO" << endl;
    cout << endl;
}

void Enamorar::siguiente_paso(int j)
{
    for(int i=j;i<=13;i++){
        if(i==2)
        {
            system("cls");
            paso_2();

        }
        else if(i==3)
        {
            system("cls");
            paso_3();

        }
        else if(i==4)
        {
            system("cls");
            paso_4();

        }
        else if(i==5)
        {
            system("cls");
            paso_5();

        }
        else if(i==6)
        {
            system("cls");
            paso_6();

        }
        else if(i==7)
        {
            system("cls");
            paso_7();

        }
        else if(i==8)
        {
            system("cls");
            paso_8();

        }
        else if(i==9)
        {
            system("cls");
            paso_9();

        }
        else if(i==10)
        {
            system("cls");
            paso_10();

        }
        else if(i==11)
        {
            system("cls");
            paso_11();
        }
        else if(i==12)
        {
            system("cls");
            paso_12();

        }

    }
}


void Enamorar::inicio()
{
    cout << "Quedate conmigo y sere tu mejor aliado con estos pasos\n muy valiosos para ti,\n es hora de ir por ella!" << endl;
    cout << "VAMOS (I)" << endl;
    char empezar;
    cin >> empezar;
    system("cls");
    if(empezar == 'I')
    {
        lista();
    }
}
void Enamorar::lista()
{
    do
    {
        cout << "#1 Toma tu tiempo para conocerla y escucharla\n" <<endl;
        cout << "#2. Siempre se tu mismo\n" <<endl;
        cout << "#3 Ayudala, pero no como su amigo\n" <<endl;
        cout << "#4 Olvidate de la friendzone\n" <<endl;
        cout << "#5 No te vayas de bruces\n" <<endl;
        cout << "#6 Aprende a acercarte a otras chicas\n" <<endl;
        cout << "#7 Dale su espacio\n" <<endl;
        cout << "#8 Detalles y mas detalles\n" <<endl;
        cout << "#9 No dejes que se sienta comoda contigo\n" <<endl;
        cout << "#10 Ninguna chica es imposible por muy dificil que parezca\n" <<endl;
        cout << "#11 Siempre sonrie\n" <<endl;
        cout << "#12 Palabras amables y romanticas\n" <<endl;
        cin >> elegir_consejo;
        system("cls");
    }
    while(elegir_consejo>12 || elegir_consejo<=0);
    if(elegir_consejo==1)
    {
        paso_1();
    }
    else if(elegir_consejo==2)
    {
        paso_2();
    }
    else if(elegir_consejo==3)
    {
        paso_3();
    }
    else if(elegir_consejo==4)
    {
        paso_4();
    }
    else if(elegir_consejo==5)
    {
        paso_5();
    }
    else if(elegir_consejo==6)
    {
        paso_6();
    }
    else if(elegir_consejo==7)
    {
        paso_7();
    }
    else if(elegir_consejo==8)
    {
        paso_8();
    }
    else if(elegir_consejo==9)
    {
        paso_9();
    }
    else if(elegir_consejo==10)
    {
        paso_10();
    }
    else if(elegir_consejo==11)
    {
        paso_11();
    }
    else if(elegir_consejo==12)
    {
        paso_12();
    }

}
void Enamorar::paso_1()
{

    ifstream archivo;
    string texto;
    archivo.open("paso_1.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(2);
    }
    else if(sig == "no")
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_2()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_2.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(3);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_3()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_3.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(4);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_4()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_4.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(5);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_5()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_5.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
       siguiente_paso(6);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_6()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_6.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(7);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_7()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_7.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
       siguiente_paso(8);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_8()
{

    ifstream archivo;
    string texto;
    archivo.open("paso_8.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(9);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_9()
{

    ifstream archivo;
    string texto;
    archivo.open("paso_9.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(10);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_10()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_10.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(11);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_11()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_11.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

        cout << "Siguiente paso?\n yes\n no" << endl;
    string sig;
    cin >> sig;
    if(sig == "yes")
    {
        siguiente_paso(12);
    }
    else
    {
        system("cls");
        volver();
    }
}

void Enamorar::paso_12()
{
    ifstream archivo;
    string texto;
    archivo.open("paso_12.txt",ios::in);
    while(!archivo.eof())
    {
        getline (archivo,texto);
        cout << texto << endl;
    }
    archivo.close();

    cout << "has llegado al final" << endl;
       volver();
}

void Enamorar::volver()
{
    cout << "Volver?\n yes"<< endl;
    string vol;
    cin >> vol;
    system("cls");
    if(vol=="yes")
    {
        lista();
    }

}
Enamorar::~Enamorar()
{
}
