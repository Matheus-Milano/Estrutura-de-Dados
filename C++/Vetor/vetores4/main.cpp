#include <iostream>

#define TAM 11

using namespace std;

int main()
{
    int vet[TAM] {0, 0, 0, 0, 0, 0, 0, 0}, i, n;
    srand(time(NULL));
    for(i = 0; i < 20; i++){
        n = rand() % 10 + 1;
        vet[n]++;
    }
    for(i = 1; i < TAM; i++){
        if(vet[i] != 0){
            cout << "O número " << i << " ocorre " << vet [i] << " vezes\n";
        }
    }

    return 0;
}
