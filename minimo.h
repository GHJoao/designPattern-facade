#ifndef MINIMO_H_INCLUDED
#define MINIMO_H_INCLUDED

class Minimo
{
    public:
        Minimo();
        Minimo(float dados[10]);
        Minimo(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        Minimo(int indice, float dado);
        ~Minimo();
        float getMinimo(void);
        void setDados(float dados[10]);
        void setDados(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        void setDado(int indice, float dado);

    private:
        float dados[10];
};

#endif // MINIMO_H_INCLUDED
