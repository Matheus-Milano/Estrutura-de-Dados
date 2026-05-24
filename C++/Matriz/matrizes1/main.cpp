#include <iostream>
#define LINHA 12
#define COLUNA 7
using namespace std;

int main(){
    srand(time(NULL));
    int MAT [LINHA][COLUNA], i, j, pos, maior = 0;
    pos = 1;
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            MAT[i][j] = rand() % 15 + 1;
        }
    }
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            if(MAT[LINHA][COLUNA] > maior){
                maior = MAT[i][j];
            }
        }
    }
    cout << "O maior número é: " << maior << endl;
    cout << "Está nas posições: \n";
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            if(MAT[i][j] == maior){
                cout << pos << "° : Linha: "<< i << "\n Coluna: "<< j <<"\n";
                pos++;
            }
        }
    }
    return 0;
}
