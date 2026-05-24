#include <iostream>
#define TAM 30
using namespace std;

string sortear(string d){
    return d[rand() % TAM];
}
string montarPalavra(string palavraS){
    string palavra = "";
    for(int i = 0; i < palavraS.length(); i++){
        palavra += '*';
    }
    return palavra;
}
string verificarLetra(string palavraS, string palavraE, char L, bool *achei){
    *achei = false;
    for(int i = 0; i < palavraS.length(); i ++){
        if
    }

}


int main()
{
    srand(time(NULL));
    string dicionario[TAM] = {"amor", "liberdade", "gratidão", "esperança", "felicidade", "respeito", "sonho", "caminho", "coração", "luz", "alma", "paz", "vida", "tempo", "destino", "alegria", "amizade", "abraço", "sorriso", "conquista", "brilho", "coragem", "natureza", "universo", "jornada", "sabedoria", "equilíbrio", "inspiração", "desenvolvimento", "sucesso"};
    string palavraEscondida, palavraSorteada, palpites;
    char letra, repete;
    int tentativas, i, acertos;
    bool ganhou, achei;
    do{
        palavraSorteada = sortear(dicionario);
        palavraEscondida = montarPalavra(palavraSorteada);
        palpites = "";
        tentativas = 0;
        ganhou = false;
        do{
            cout << "Palavra sorteada: " << palavraEscondida << endl;
            cout << "Palpites" << palpites << endl;
            cout << "Tentativas" << tentativas << endl;
            cout << "Digite uma letra: ";
            cin >> letra;
            palavraEscondida = verificarLetra(palavraSorteada)

        }while(tentativas < 7 && !ganhou);


    }while(repete == 'S');

    return 0;
}
