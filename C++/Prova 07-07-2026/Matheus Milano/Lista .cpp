#include "Lista .h"

Lista** Lista::Inserir(Lista **R, int N, int O) {
    Lista *novo = new Lista();
    novo->Num = N;
    novo->Ocorre = O;
    if(R[0] == NULL){
        R[0] = novo;
        R[1] = novo;
        R[1]->elo = NULL;
    }else{
        Lista *atual = R[0], *ant = NULL;
        while(atual != NULL){
            if(novo->Ocorre > atual->Ocorre){
                ant = atual;
                atual = atual->elo;
            }
            else if ((novo->Ocorre == atual->Ocorre) && (novo->Num < atual->Num)){
                ant = atual;
                atual = atual->elo;
            }
            else {
                break;
            }
        }
        if(atual == R[0]){
            novo->elo = R[0];
            R[0] = novo;
        }else if (atual == NULL){
            R[1]->elo = novo;
            R[1] = novo;
        }else{
            ant->elo = novo;
            novo->elo = atual;
        }
    }
    return R;
};

void Lista::Listar(Lista *I){
    Lista *aux = I;
    while(aux != NULL){
        if(aux->Num <= 99)
            std::cout << "Numero Gerado  -->   " << aux->Num << "   |   " << aux->Ocorre << "   -->   Numero de Ocorrencias\n";
        else
            std::cout << "Numero Gerado  -->  " << aux->Num << "   |   " << aux->Ocorre << "   -->   Numero de Ocorrencias\n";
        aux = aux->elo;
    }
};
