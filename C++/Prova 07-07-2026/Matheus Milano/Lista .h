#include <iostream>

class Lista
{
public:
    int Num;
    int Ocorre;
    Lista *elo;
    Lista** Inserir(Lista**, int, int);
    void Listar(Lista*);
};
