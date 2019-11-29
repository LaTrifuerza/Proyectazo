#ifndef LIBRO_H
#define LIBRO_H


class Libro
{
    private:
        int elegir_estilo;
        int Rdrama;
        int Rfantasia;
        int fromance;
        int Rgotico;
    public:
        Libro();
        void mostrar_estilos();
        void romance();
        void gotico();
        void fantasia();
        void drama();
        void mostrar_libros();
        void vol_ro();
        void vol_go();
        void vol_fa();
        void vol_dr();
        char vo;
        virtual ~Libro();
};

#endif // LIBRO_H
