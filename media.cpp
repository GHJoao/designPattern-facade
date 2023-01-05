#include "media.h"

Media::Media()
{
    this->setDados(0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

Media::Media(float dados[10])
{
    this->setDados(dados);
}

Media::Media(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10)
{
    this->setDados(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10);
}

Media::Media(int indice, float dado)
{
    this->setDado(indice, dado);
}

Media::~Media()
{

}

float Media::getMedia(void)
{
    float media = 0;
    for(int i = 0; i<10; i++)
    {
        media += this->dados[i];
    }
    media = media/10;
    return media;
}

void Media::setDados(float dados[10])
{
    for(int i = 0; i<10; i++)
    {
        this->dados[i] = dados[i];
    }
}
void Media::setDados(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10)
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
void Media::setDado(int indice, float dado)
{
    if(indice <0 || indice>9) return;
    else this->dados[indice] = dado;
}
