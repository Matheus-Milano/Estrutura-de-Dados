#include <iostream>

#define TAM 30

using namespace std;

/* EXERCÍCIO 1 */
int main()
{
    int vet[TAM], i;
    vet[0] = 0;
    vet[1] = 1;

    for(i = 2; i < TAM; i++){
        vet[i] = vet[i - 1] + vet[i - 2];
    }
    for(i = 0; i < TAM; i++){
        cout << vet[i] << " ";
    }

    return 0;
}
