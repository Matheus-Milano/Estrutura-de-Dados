#include <iostream>
#define TAM 50
using namespace std;

int main()
{
    int vet[TAM], i, impar = 0, quantidade = 0, quantidade_menor = 0;
    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        impar = rand() % 200 + 1;
        if(impar % 2 != 0){
            vet[i] = impar;
        }
        else{
            i--;
        }
    }

    for(i = 0; i < TAM; i++){
        cout << vet[i] << " | ";
    }
    cout << "\n \nOs menores que 101 são: ";

    for(i = 0; i < TAM; i++){
        if(vet[i] < 101){
            cout << vet[i] << "  | ";
            quantidade_menor ++;

        }
    }
    cout << "\n \nQuantidade menor que 101: " << quantidade_menor << endl;

    cout << "\n \nMultiplos de 7" << endl;
    for(i = 0; i < TAM; i++){
        if(vet[i] % 7 == 0){
            quantidade ++;
        }
    }
    cout << "Quantidade de números multiplos de 7: " << quantidade << endl;
    return 0;
}
