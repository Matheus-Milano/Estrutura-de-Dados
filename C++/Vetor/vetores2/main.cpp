#include <iostream>

#define TAM 50

using namespace std;

int main()
{
    int vet[TAM], i, n;
    bool achei;
    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        vet[i] = rand() % 100 + 1;
    }

    achei = false;
    cout << "Digite um valor para buscar: ";
    cin >> n;

    for(i = 0; i < TAM; i++){
        if(n == vet[i]){
            achei = true;
            break;
        }
    }
    if (! achei){
        cout << "Numero não encontrado.";
    }else{
        cout << "O numero foi encontrado!" << endl;
        cout << "E esta na posição: " << i ;
    }

    return 0;
}
