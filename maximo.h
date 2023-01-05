#ifndef MAXIMO_H_INCLUDED
#define MAXIMO_H_INCLUDED

class Maximo
{
    public:
        Maximo();
        Maximo(float dados[10]);
        Maximo(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        Maximo(int indice, float dado);
        ~Maximo();
        float getMaximo(void);
        void setDados(float dados[10]);
        void setDados(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        void setDado(int indice, float dado);

    private:
        float dados[10];
};

#endif // MAXIMO_H_INCLUDED
