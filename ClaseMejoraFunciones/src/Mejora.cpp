#include "Mejora.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


/*
void Mejora::Mostrar_mensaje()
{
    string nombre;
    cout<<"Como te llamas? ";cin>>nombre;
    cout<<" Hola  "<<nombre<<"!"<<endl;
    cout<<" Bienvenido a PERSONAL UPDATE "<<endl;
    cout<<endl;
}
*/
Mejora::Mejora()
{

}

Mejora::~Mejora(){}

void Mejora::Fisica()
{
    cout<<"BIENVENIDO, elige el aspecto fisico que quieres mejorar"<<endl;
    do
    {
    cout<<"Elige una opcion: \n";
    cout<<"1. Abdominales \n\n";
    cout<<"2. Piernas \n\n";
    cout<<"3. Brazos \n\n";
    cout<<"4. Espalda \n\n";
    cin>>aspecto_f;
    }while(aspecto_f>4 || aspecto_f<=0);

    if(aspecto_f==1)
    {
        Abdominales();
    }
    else if(aspecto_f==2)
    {
        Piernas();
    }
    else if(aspecto_f==3)
    {
        Brazos();
    }
    else if(aspecto_f==4)
    {
        Espalda();
    }
}


void Mejora::Abdominales()
{

        ifstream archivo;
        string texto;

        archivo.open("Abdominales.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof())
        {
            getline(archivo,texto); cout<<texto<<endl;
        }


        do  //instruccion para controlar error al no ingresar un valor dentro del rango
        {
        cout<<"\nTe recomendamos los siguientes ejercicios, elige con cual quisieras iniciar: \n";

        cout<<"1. LEVANTAMINETO DE PIERNAS. \n\n";
        cout<<"2. BURPEE. \n\n";
        cout<<"3. ABDOMINALES CON LEVANTAMINETO DE PIERNAS. \n\n";
        cout<<"4. ESCAlADAS. \n\n";
        cout<<"5. ABDOMINALES CRUZADAS. \n\n";
        cout<<"6. ABDOMINALES CON BALON. \n\n";
        cout<<"7. SENTADILLA CON SALTO. \n\n";
        cout<<"8. VOLVER \n\n";
        cin>>opcion_abdominales;
        }while(opcion_abdominales>8 || opcion_abdominales<=0);

        if(opcion_abdominales==1)
        {
            Abdominales1();
        }
        else if(opcion_abdominales==2)
        {
            Abdominales2();
        }
        else if(opcion_abdominales==3)
        {
            Abdominales3();
        }
        else if(opcion_abdominales==4)
        {
            Abdominales4();
        }
        else if(opcion_abdominales==5)
        {
            Abdominales5();
        }
        else if(opcion_abdominales==6)
        {
            Abdominales6();
        }
        else if(opcion_abdominales==7)
        {
            Abdominales7();
        }
        else if(opcion_abdominales==8)
        {
            Fisica();
        }
}

void Mejora::Abdominales1()
{
        ifstream archivo;
        string texto;

        archivo.open("Abdominales1.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Abdominales();


}
void Mejora::Abdominales2()
{
        ifstream archivo;
        string texto;

        archivo.open("Abdominales2.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Abdominales();
}

void Mejora::Abdominales3()
{
        ifstream archivo;
        string texto;

        archivo.open("Abdominales3.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Abdominales();
}

void Mejora::Abdominales4()
{
        ifstream archivo;
        string texto;

        archivo.open("Abdominales4.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Abdominales();
}

void Mejora::Abdominales5()
{       ifstream archivo;
        string texto;

        archivo.open("Abdominales5.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Abdominales();
}

void Mejora::Abdominales6()
{
        ifstream archivo;
        string texto;

        archivo.open("Abdominales6.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}
            Regresa_Abdominales();
}

void Mejora::Abdominales7()
{
        ifstream archivo;
        string texto;

        archivo.open("Abdominales7.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Abdominales();
}



void Mejora::Piernas()
{
        ifstream archivo;
        string texto;

        archivo.open("Piernas.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}


        do{
        cout<<"\nTe recomendamos los siguientes ejercicios, elige con cual quisieras iniciar: \n";

        cout<<"1. SENTADILLAS. \n\n";
        cout<<"2. ZANCADAS ALTERNAS. \n\n";
        cout<<"3. BURPEES. \n\n";
        cout<<"4. PUENTE. \n\n";
        cout<<"5. GEMELOS. \n\n";
        cout<<"6. VOLVER \n\n";
        cin>>opcion_piernas;
        }while(opcion_piernas>6 || opcion_piernas<=0);

        if(opcion_piernas==1)
        {
            Piernas1();
        }

        else if(opcion_piernas==2)
        {
            Piernas2();
        }

        else if(opcion_piernas==3)
        {
            Piernas3();
        }

        else if(opcion_piernas==4)
        {
            Piernas4();
        }

        else if(opcion_piernas==5)
        {
            Piernas5();
        }

        else if(opcion_piernas==6)
        {
            Fisica();
        }

}

void Mejora::Piernas1()
{
        ifstream archivo;
        string texto;

        archivo.open("Piernas1.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

                    Regresa_Piernas();
}

void Mejora::Piernas2()
{
        ifstream archivo;
        string texto;

        archivo.open("Piernas2.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

                    Regresa_Piernas();
}

void Mejora::Piernas3()
{
        ifstream archivo;
        string texto;

        archivo.open("Piernas3.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

                    Regresa_Piernas();
}

void Mejora::Piernas4()
{
        ifstream archivo;
        string texto;

        archivo.open("Piernas4.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Piernas();
}

void Mejora::Piernas5()
{
        ifstream archivo;
        string texto;

        archivo.open("Piernas5.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

                    Regresa_Piernas();
}

void Mejora::Brazos()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

        do
        {
        cout<<"\nEscoge entre las opciones que tenemos para ejercitar tus brazos \n\n";

        cout<<"1. FLEXIONES DE PECHO. \n\n";
        cout<<"2. FLEXIONES DE TRICEPS. \n\n";
        cout<<"3. CURL DE BICEPS. \n\n";
        cout<<"4. ELEVACIONES LATERALES PARA LOS HOMBROS. \n\n";
        cout<<"5. DIPS DE TRICEPS. \n\n";
        cout<<"6. PRESS DE HOMBROS. \n\n";
        cout<<"7. EXTENSION DE TRICEPS. \n\n";
        cout<<"8. VOLVER \n\n";
        cin>>opcion_brazos;
        }while(opcion_brazos>8 || opcion_brazos<=0);

        if(opcion_brazos==1)
        {
            Brazos1();
        }

        else if(opcion_brazos==2)
        {
            Brazos2();
        }

        else if(opcion_brazos==3)
        {
            Brazos3();
        }

        else if(opcion_brazos==4)
        {
            Brazos4();
        }

        else if(opcion_brazos==5)
        {
            Brazos5();
        }

        else if(opcion_brazos==6)
        {
            Brazos6();
        }

        else if(opcion_brazos==7)
        {
            Brazos7();
        }

        else if(opcion_brazos==8)
        {
            Fisica();
        }
}

void Mejora::Brazos1()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos1.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

        Regresa_Brazos();
}
void Mejora::Brazos2()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos2.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Brazos();
}

void Mejora::Brazos3()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos3.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

                Regresa_Brazos();
}

void Mejora::Brazos4()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos4.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Brazos();
}

void Mejora::Brazos5()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos5.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

        Regresa_Brazos();
}

void Mejora::Brazos6()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos6.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}


       Regresa_Brazos();
}

void Mejora::Brazos7()
{
        ifstream archivo;
        string texto;

        archivo.open("Brazos7.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

            Regresa_Brazos();
}

void Mejora::Espalda()
{
        ifstream archivo;
        string texto;

        archivo.open("Espalda.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

        do
        {
        cout<<"\nEscoge entre las opciones que tenemos para ejercitar tu espalda: \n\n";

        cout<<"1. DOMINADAS. \n\n";
        cout<<"2. HIPER EXTENSIONES. \n\n";
        cout<<"3. PESO MUERTO. \n\n";
        cout<<"4. PULLOVER. \n\n";
        cout<<"5. VOLVER \n\n";
        cin>>opcion_espalda;
        }while(opcion_espalda>5 || opcion_espalda<=0);

        if(opcion_espalda==1)
        {
            Espalda1();
        }
        else if(opcion_espalda==2)
        {
            Espalda2();
        }
        else if(opcion_espalda==3)
        {
            Espalda3();
        }
        else if(opcion_espalda==4)
        {
            Espalda4();
        }

        else if(opcion_espalda==5)
        {
            Fisica();
        }
}


void Mejora::Espalda1()
{
        ifstream archivo;
        string texto;

        archivo.open("Espalda1.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

          Regresa_Espalda();
}

void Mejora::Espalda2()
{
        ifstream archivo;
        string texto;

        archivo.open("Espalda2.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

        Regresa_Espalda();
}

void Mejora::Espalda3()
{
        ifstream archivo;
        string texto;

        archivo.open("Espalda3.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

        Regresa_Espalda();
}

void Mejora::Espalda4()
{
        ifstream archivo;
        string texto;

        archivo.open("Espalda4.txt",ios::in);
        if (archivo.fail())
        {
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof()){getline(archivo,texto); cout<<texto<<endl;}

          Regresa_Espalda();
}

void Mejora::Regresa_Abdominales()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Abdominales();
            }
}

void Mejora::Regresa_Piernas()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Piernas();
            }
}

void Mejora::Regresa_Brazos()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Brazos();
            }
}

void Mejora::Regresa_Espalda()
{
    cout<<" Para regresar presiona (v)."<<endl;
            cin>>volver;
            if(volver=='v')
            {
                Espalda();
            }
}
