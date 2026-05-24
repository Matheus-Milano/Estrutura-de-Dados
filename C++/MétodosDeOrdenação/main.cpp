#include "Ordena.h"
#define TAM 20
using namespace std;

int main()
{
    Ordena O;
    int vetOriginal[TAM], vetCopia[TAM], comp, trocas;
    // criar vetor original
    O.gerarVetor(vetOriginal, TAM);
    cout << "\n\nVETOR ORIGINAL \n";
    O.exibeVetor(vetOriginal, TAM);

    // ordenando pelo bolha
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Bolha(vetCopia, TAM, &comp, &trocas);

    cout << "\nOrdenando Pelo Bolha: \n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << "Comparações e " << trocas << "trocas\n";

    // ordenando pelo bolha melhorado
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.BolhaMelhorado(vetCopia, TAM, &comp, &trocas);

    cout << "\nOrdenando Pelo Bolha Melhorado: \n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << "Comparações e " << trocas << "trocas\n";

    // ordenando pela inserção
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Insercao(vetCopia, TAM, &comp, &trocas);

    cout << "\nOrdenando pelo Inserção: \n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << "Comparações e " << trocas << "trocas\n";

    // ordenando pelo seleção
    O.copiaVetor(vetOriginal, vetCopia, TAM);
    comp = trocas = 0;
    O.Selecao(vetCopia, TAM, &comp, &trocas);

    cout << "\nOrdenando pelo Seleção: \n";
    O.exibeVetor(vetCopia, TAM);
    cout << "\n" << comp << "Comparações e " << trocas << "trocas\n";
    return 0;
}
