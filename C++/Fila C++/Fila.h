#ifndef FILA_H
#define FILA_H
#include <iostream>

class Fila
{
    public:
        std::string nome, cidade, estado;
        int ano;
        Fila *elo;
        Fila* Inserir(Fila*, std::string, std::string, std::string, int);
        void Listar(Fila*);
        Fila* Remover(Fila*);
};

#endif // FILA_H
