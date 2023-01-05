#include "estatisticas.h"

Estatisticas::Estatisticas()
{
    this->setDados(0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

Estatisticas::Estatisticas(float dados[10])
{
    this->setDados(dados);
}

Estatisticas::Estatisticas(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10)
{
    this->setDados(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10);
}

Estatisticas::Estatisticas(int indice, float dado)
{
    this->setDado(indice, dado);
}

Estatisticas::~Estatisticas()
{

}

void Estatisticas::printEstatisticas(void)
{
    Media valor_medio(this->dados);
    Minimo valor_menor(this->dados);
    Maximo valor_maior(this->dados);

    cout << "Media: " << valor_medio.getMedia() << endl;
    cout << "Minimo: " << valor_menor.getMinimo() << endl;
    cout << "Maximo: " << valor_maior.getMaximo() << endl;
}

void Estatisticas::setDados(float dados[10])
{
    for(int i = 0; i<10; i++)
    {
        this->dados[i] = dados[i];
    }
}
void Estatisticas::setDados(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10)
{
    this->dados[0] = d1;
    this->dados[1] = d2;
    this->dados[2] = d3;
    this->dados[3] = d4;
    this->dados[4] = d5;
    this->dados[5] = d6;
    this->dados[6] = d7;
    this->dados[7] = d8;
    this->dados[8] = d9;
    this->dados[9] = d10;
}
void Estatisticas::setDado(int indice, float dado)
{
    if(indice <0 || indice>9) return;
    else this->dados[indice] = dado;
}
