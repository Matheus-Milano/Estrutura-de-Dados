#include "Arvore.h"
using namespace std;

void Menu() {
    system("clear");
    cout << endl << " Menu de Opcoes " << endl;
    cout << " 1 - Inserir na Arvore " << endl;
    cout << " 2 - Consultar toda a Arvore" << endl;
    cout << " 3 - Encerrar o programa" << endl;
    cout << " Informe sua opcao : ";
}

int main() {
    Arvore *Raiz = NULL, obj;
    srand(time(NULL));

    int op, achou, n;
    do {
        Menu();
        cin >> op;
        switch (op) {
            case 1:
                do{
                    n = rand() % 51;
                    if(n == 0){
                        break;
                    } else {
                        Raiz = obj.Inserir(Raiz,n);
                    }
                }while(n != 0);
                break;
            case 2:
                if (Raiz == NULL) {
                    cout << " Arvore esta vazia !!" << endl;
                } else {
                    cout << " Listando a Arvore em Pre Ordem " << endl;
                    obj.MostrarPreOrdem(Raiz);
                }
                break;
            case 3:
                cout << " Programa encerrado!" << endl;
                break;
            default:
                cout << " opcao invalida" << endl;
        }
        cin.ignore().get();
    } while (op != 3);
    return 0;
}
