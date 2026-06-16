#include "Funcoes.h"

Funcoes* Funcoes::InsereFila(Funcoes *Fim, int N){
    Funcoes *novo = new Funcoes();
    novo->numero = N;
    if(Fim != NULL)
        Fim->elo = novo;
    Fim = novo;
    Fim->elo = NULL;
    return Fim;
};

Funcoes* Funcoes::InserePilha(Funcoes *Topo, int N){
    Funcoes *novo = new Funcoes();
    novo->numero = N;
    novo->elo = Topo;
    return novo;
};


Funcoes* Funcoes::Esvaziar(Funcoes *Inicio){
    Funcoes *aux = Inicio;
    while(aux != NULL){
        Inicio = Inicio->elo;
        delete(aux);
        aux = Inicio;
    }
    return Inicio;
};

void Funcoes::MenorFila(Funcoes *Inicio){
    if(Inicio == NULL){
        std::cout << "): A fila está vazia!!!";
        return;
    }
    Funcoes *aux = Inicio;
    int menor = aux->numero;
    while(aux != NULL){
        if(aux->numero < menor){
            menor = aux->numero;
        }
        aux = aux->elo;
    }
    std::cout << "Menor número na FILA: " << menor << "\n";
};

void Funcoes::MaiorPilha(Funcoes *Topo){
    if(Topo == NULL){
        std::cout << "): A Pilha está vazia!!!";
        return;
    }
    Funcoes *aux = Topo;
    int maior = aux->numero;
    while(aux != NULL){
        if(aux->numero > maior){
            maior = aux->numero;
        }
        aux = aux->elo;
    }
    std::cout << "Maior número na PILHA: " << maior << "\n";
};

void Funcoes::Listar(Funcoes *Inicio){
    Funcoes *aux = Inicio;
    while(aux != NULL){
        std::cout << aux->numero << " - ";
        aux = aux->elo;
    }
    std::cout << "\n";
};
