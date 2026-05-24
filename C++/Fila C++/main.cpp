#include "Fila.h"
#include "Cidades.h"

using namespace std;

void Menu(){
    system("clear");
    cout << "1 - Inserir\n";
    cout << "2 - Listar\n";
    cout << "3 - Remover\n";
    cout << "4 - Maior cidade\n";
    cout << "5 - Menor Estado\n";
    cout << "6 - Finalizar\n";
    cout << "Escolha: ";
}

int main()
{
    Fila *inicio = NULL, *fim = NULL, obj;
    Cidades *Topo = NULL, obj2;
    string nome, cidade, estado;
    int ano, op;
    do{
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout << "Nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Cidade: ";
                getline(cin, cidade);
                cout << "Estado: ";
                getline(cin, estado);
                cout << "ano: ";
                cin >> ano;
                fim = obj.Inserir(fim, nome, cidade, estado,ano);
                if(inicio == NULL)
                    inicio = fim;
                cout << "SUCESSO!!!\n";
                break;
            case 2:
                if(inicio != NULL){
                    cout << "\nLISTAGEM\n\n";
                    obj.Listar(inicio);
                }else{
                    cout << "Fila vazia!";
                }
                break;
            case 3:
                if(inicio != NULL){
                    inicio = obj.Remover(inicio);
                    if(inicio == NULL)
                        fim = inicio;
                    cout << "Removido\n\n";
                }else{
                    cout << "Fila vazia!\n";
                }
                break;
            case 4:
                if(Topo != NULL)
                    Topo = obj2.Esvaziar(Topo);
                Topo = obj2.ContarCidades(inicio);
                obj2.Maior(Topo);
                break;


        }


    cin.ignore().get();
    }while(op != 6);




    return 0;
}
