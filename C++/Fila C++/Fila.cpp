#include "Fila.h"

Fila* Fila::Inserir(Fila *F, std::string N, std::string C, std::string E, int A){
    Fila *novo = new Fila();
    novo->nome = N;
    novo->cidade = C;
    novo->estado = E;
    novo->ano = A;
    if(F != NULL)
        F->elo = novo;
    F = novo;
    F->elo = NULL;
    return F;
};
void Fila::Listar(Fila *I){
    Fila *aux = I;
    while(aux != NULL){
        std::cout << "Nome: " << aux->nome << " | Cidade: " <<
           aux->cidade << " | Estado: " << aux->estado << " | ano: " <<
           aux->ano << "\n";
        aux = aux->elo;
    }
};
Fila* Fila::Remover(Fila *I){
    Fila *aux = I;
    I = I->elo;
    delete(aux);
    return I;
};


