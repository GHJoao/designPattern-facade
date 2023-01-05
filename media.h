#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED

class Media
{
    public:
        Media();
        Media(float dados[10]);
        Media(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        Media(int indice, float dado);
        ~Media();
        float getMedia(void);
        void setDados(float dados[10]);
        void setDados(float d1, float d2, float d3, float d4, float d5, float d6, float d7, float d8, float d9, float d10);
        void setDado(int indice, float dado);

    private:
        float dados[10];
};

#endif // MEDIA_H_INCLUDED
