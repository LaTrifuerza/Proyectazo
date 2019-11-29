#ifndef ENAMORAR_H
#define ENAMORAR_H
#include <string>


class Enamorar
{
    private:
        int elegir_consejo;
        int j;
    public:
        Enamorar();
        void inicio();
        void paso_1();
        void paso_2();
        void paso_3();
        void paso_4();
        void paso_5();
        void paso_6();
        void paso_7();
        void paso_8();
        void paso_9();
        void paso_10();
        void paso_11();
        void paso_12();
        void siguiente_paso(int=0);
        void lista();
        void volver();
        virtual ~Enamorar();


};

#endif // ENAMORAR_H
