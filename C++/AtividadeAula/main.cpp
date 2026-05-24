#include "Funcoes.h"

using namespace std;

void Menu(){
    system("clear");
    cout << "1 - MDC\n";
    cout << "2 - Soma Dígitos\n";
    cout << "3 - Converte Binário\n";
    cout << "4 - Primo\n";
    cout << "5 - Finalizar\n";
    cout << "Escolha: ";
}

int main()
{
    Funcoes F;
    int n1, n2, op;
    unsigned long long int numeroGrande;
    do{
        Menu();
        cin >> op;
        switch(op){
            case 1:
                cout << "\nInforme o primeiro: ";
                cin >> n1;
                cout << "\nInforme o segundo: ";
                cin >> n2;
                cout << "O MDC = " << F.MDC(n1, n2) << endl;
                break;
            case 2:
                cout << "\nInforme o número: ";
                cin >> numeroGrande;
                cout << "Soma: " << F.SomaDigitos(numeroGrande) << endl;
                break;
            case 3:
                cout << "\nInforme um binário: ";
                cin >> numeroGrande;
                cout << "O Número em Decimal: " << F.ConverteBinario(numeroGrande, 0) << endl;
                break;
            case 4:
                cout << "\nInforme o Número: ";
                cin >> n1;
                if(F.Primo(n1, n1 - 1))
                    cout << "É primo!!!" << endl;
                else
                    cout << "Não é primo!" << endl;
                break;

            default:
                cout << "Opção Inválida!\n";
        }
        cout << "\nTecle ENTER para continuar ...";
        cin.ignore().get();
    }while(op != 5);
    return 0;
}
