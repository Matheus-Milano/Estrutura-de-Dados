#include "Lista .h"

using namespace std;

int main()
{
    srand(time(NULL));
    system("clear");
    Lista **P, L;
    P = new Lista*[2];
    P[0] = NULL;
    P[1] = NULL;
    int numAleatorio;
    while(true){
        numAleatorio = rand() % 101 + 20;
        if (numAleatorio == 20){
            break;
        }
        Lista *aux = P[0];
        bool achei = false;
        int ocorreAntes = 0;

        while (aux != NULL) {
            if (aux->Num == numAleatorio) {
                achei = true;
                ocorreAntes = aux->Ocorre;
                break;
            }
            aux = aux->elo;
        }
        if(achei){
            Lista *atual = P[0], *ant = NULL;
            while(atual != NULL && atual->Num != numAleatorio) {
                ant = atual;
                atual = atual->elo;
            }
            if(atual != NULL) {
                if (atual == P[0]) {
                    P[0] = P[0]->elo;
                }else if (atual == P[1]) {
                    P[1] = ant;
                    P[1]->elo = NULL;
                } else {
                    ant->elo = atual->elo;
                }
                delete(atual);
            }
            P = L.Inserir(P, numAleatorio, ocorreAntes + 1);
        }else{
            P = L.Inserir(P, numAleatorio, 1);
        }
    }
    if(P[0] == NULL) {
        cout << "A lista está vazia. Nada foi armazenado!!\n";
    }else{
        cout << "~~~~~~~~~~~~~~~~~ Números Sorteados e Suas Ocorrências ~~~~~~~~~~~~~~~~~\n\n";
        L.Listar(P[0]);
    }
    return 0;
}
