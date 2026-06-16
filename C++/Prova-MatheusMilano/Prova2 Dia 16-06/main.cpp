#include "Funcoes.h"

using namespace std;

int main()
{
    Funcoes *Topo= NULL;
    Funcoes *Inicio = NULL, *Fim = NULL;
    Funcoes aux;
    int num;
    char op, op2;
    do{
        do {
            cout << "Entre com um numero positivo. Use o 0 para parar: ";
            cin >> num;
            if (num < 0) {
                cout << "Apenas números POSITIVOS ):\n";
            }
            else if (num > 0) {
                Topo = aux.InserePilha(Topo, num);
                Fim = aux.InsereFila(Fim, num);
                if (Inicio == NULL) {
                    Inicio = Fim;
                }
            }
        }while (num != 0);
        cout << "\n\n";
        cout << "Números na Pilha: ";
        aux.Listar(Topo);
        cout << "Números na Fila: ";
        aux.Listar(Inicio);
        cout << "\n";
        aux.MaiorPilha(Topo);
        aux.MenorFila(Inicio);
        Topo = aux.Esvaziar(Topo);
        Inicio = aux.Esvaziar(Inicio);
        Fim = NULL;
        cout << "\n\n";
        cout << "Quer limpar o terminal[s/n]? \nResposta:";
        cin >> op2;
        if(op2 == 's')
            system("clear");
        cout << "\nTodas as estruturas foram esvaziadas!\n";
        cout << "Deseja repetir [s/n]?\nResposta: ";
        cin >> op;
        cout << "\n\n";
    }while(op == 's');
    return 0;
}
