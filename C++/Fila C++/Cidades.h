#ifndef CIDADES_H
#define CIDADES_H
#include "Fila.h"

class Cidades
{
    public:
        std::string nome;
        int quant;
        Cidades *elo;
        Cidades* Inserir(Cidades*, std::string, int);
        bool Pesquisar(Cidades*, std::string);
        Cidades* Esvaziar(Cidades*);
        Cidades* ContarCidades(Fila*);
        void Maior(Cidades*);
};

#endif // CIDADES_H
