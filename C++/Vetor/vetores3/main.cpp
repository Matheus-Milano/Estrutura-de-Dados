#include <iostream>

#define TAM 15
using namespace std;

int main()
{
    int vet[TAM], i, num, maior, menor, pos;
    float media = 0.0;

    for(i = 0; i < TAM; i++){
        do{
            cout << "Digite um numero: " << i << ": ";
            cin >> vet[i];
        }while(vet[i] < 0 or vet[i] >20);
        media += vet[i];
    }
    maior = menor = vet[0];
    for(i = 0; i < TAM; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }else if(vet[i] < menor){
            menor = vet[i];
        }
    }
    cout << "O maior é: " << maior << endl;
    for(i = 0; i < TAM; i++){
        if(vet[i] == maior){
            cout << "Está na posição: " << i << endl;
        }
    }
    cout << "O menor é: " << menor << endl;
    for(i = 0; i < TAM; i++){
        if(vet[i] == menor){
            cout << "Está na posição: " << i << endl;
        }
    }
    media /= TAM;
    cout << "\n";
    printf("A média é: %.2f", media);
    cout << "\n";
    return 0;
}
