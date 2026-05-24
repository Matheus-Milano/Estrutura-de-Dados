#include <iostream>
#define LINHA 10
#define COLUNA 15
using namespace std;

int main()
{
    srand(time(NULL));
    int MAT[LINHA][COLUNA], RES[LINHA] [COLUNA], i, j, menor, soma, qtd = 0;
    soma = qtd;

    cout << "Matriz Raiz: \n";
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            MAT[i][j] = rand() % 10 + 1;
            cout << MAT[i][j] << " ";
        }
        cout << "\n";
    }


    for(i = 0; i < LINHA; i++){
        menor = MAT[i][0];
        for(j = 0; j < COLUNA; j++){
            if(MAT[i][j] < menor){
                menor = MAT[i][j];
            }
        }
        for(j = 0; j < COLUNA; j++){
            RES[i][j] = MAT[i][j] * menor;
        }
    }

    cout << "Matriz Nutella: \n";
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            cout << RES[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
