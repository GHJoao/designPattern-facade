#ifndef ESTATISTICAS_H_INCLUDED
#define ESTATISTICAS_H_INCLUDED

#include "media.h"
#include "minimo.h"
#include "maximo.h"
#include <iostream>
using namespace std;

class Estatisticas
{
    public:
        Estatisticas();
        Estatisticas(float dados[10]);
        Estatisticas(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        Estatisticas(int indice, float dado);
        ~Estatisticas();
        void printEstatisticas(void);
        void setDados(float dados[10]);
        void setDados(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        void setDado(int indice, float dado);

    private:
        float dados[10];
};

#endif // ESTATISTICAS_H_INCLUDED
