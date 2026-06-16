#include<iostream>

class Funcoes
{
    public:
        int numero;
        Funcoes *elo;
        Funcoes* InsereFila(Funcoes*, int);
        Funcoes* InserePilha(Funcoes*, int);
        Funcoes* Esvaziar(Funcoes*);
        void MenorFila(Funcoes*);
        void MaiorPilha(Funcoes*);
        void Listar(Funcoes*);
};
