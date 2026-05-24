#include <iostream>
#define LINHA 9
#define COLUNA 8
using namespace std;

int main()
{
    srand(time(NULL));
    int MAT [LINHA][COLUNA], i, j, qtd, soma = 0;
    float media = 0.0;
    qtd = soma;
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            MAT[i][j] = rand() % 30 + 1;
            cout << MAT[i][j] << " ";
        }
        cout << "\n";
    }
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            if(MAT[i][j] % 2 == 0){
                soma += MAT[i][j];
                qtd++;
            }
        }
    }
    media = soma/qtd;
    cout << "A média dos valores pares é: " << media;
    return 0;
}
