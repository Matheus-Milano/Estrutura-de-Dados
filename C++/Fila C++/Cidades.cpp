#include "Cidades.h"

Cidades* Cidades::Inserir(Cidades *T, std::string N, int Q){
    Cidades *novo = new Cidades();
    novo->nome = N;
    novo->quant = Q;
    novo->elo = T;
    return novo;
};
bool Cidades::Pesquisar(Cidades *T, std::string N){
    Cidades *aux = T;
    while(aux != NULL){
        if(aux->nome == N){
            return true;
        }
        aux = aux->elo;
    }
    return false;
};
Cidades* Cidades::Esvaziar(Cidades *T){
    Cidades *aux = T;
    while(aux != NULL){
        T = T->elo;
        delete(aux);
        aux = T;
    }
    return T;
};
Cidades* Cidades::ContarCidades(Fila *I){
    Fila *aux = I, *aux2;
    Cidades *Topo = NULL;
    bool achei;
    while(aux != NULL){
        achei = Pesquisar(Topo, aux->cidade);
        if(!achei){
            int total = 1;
            aux2 = aux->elo;
            while(aux2 != NULL){
                if(aux2->cidade == aux->cidade)
                    total++;
                aux2 = aux2->elo;
            }
            Topo = Inserir(Topo, aux->cidade, total);
        }
        aux = aux->elo;

    }
    return Topo;
};
void Cidades::Maior(Cidades *T){
    Cidades *aux = T;
    int maior = aux->quant;
    while(aux != NULL){
        if(aux->quant > maior){
            maior = aux->quant;
        }
        aux = aux->elo;
    }
    aux = T;
    std::cout << "Maior quantidade: " << maior << "\n";
    while(aux != NULL){
        if(aux->quant == maior){
            std::cout << aux->nome << "\n";
        }
        aux = aux->elo;
    }
};

