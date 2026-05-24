#include <iostream>
#define T 4
using namespace std;

char* gerarSenha(char cores[]){
    char *senha = new char[T];
    for(int i = 0; i < T; i++){
        senha[i] = cores[rand()%4];
    }
    return senha;
}
int contaAcertos(char senha[], char palpite[]){
    int total = 0;
    for(int i = 0 ; i < T; i++){
        if(senha[i] == palpite[i]){
            total ++;
        }
    }
    return total;
}


int main()
{
    srand(time(NULL));
    char cores[T] = {'V', 'A', 'P', 'B'};
    char palpite[T], *senha, repete;
    int tentativas, i, acertos;
    bool ganhou;
    do{
        senha = gerarSenha(cores);
        tentativas = 0;
        ganhou = false;
        do{
            cout << "Informe o palpite: \n";
            for(i = 0; i < T; i++){
                cin >> palpite[i];
                palpite[i] = toupper(palpite[i]);
            }
            acertos = contaAcertos(senha, palpite);
            if(acertos < 4){
                tentativas ++;
                cout << "Você acertou "<< acertos << " letras\n";
            }else{
                ganhou = true;
            }


        }while(tentativas < 10 && !ganhou);
        if(ganhou){
            cout << "Parabéns !!!!" << endl;
        }else{
            cout << "Você perdeu!";
        }
        for(i = 0; i < T; i++){
            cout << senha[i] << "  ";
        }
        cout << "\nJogar de Novo? ";
        cin >> repete;

    }while(repete == 'S');
}
/*
int main()
{
    srand(time(NULL));
    char cores[T] = ('V', 'P', 'B', 'A'), palpite[T], jogo[T], cor;
    int i, j, tentativas = 10;

    for(i = 0: i < T: i++){
        jogo[i] = cores[rand()%4];
    }
    for(i = 0: i < T: i++){
        cout << i+1 << "° cor: \n"
        cin >> cor;
        palpite[i] = cor;
        for(j = 0, j < tentativas, j++){
            if(jogo[i] == palpite [i])
        }
    }
    for(i = 0, i < tentativas, i++){
        if(jogo[i] == palpite [i])
    }
    return 0;
}
*/
