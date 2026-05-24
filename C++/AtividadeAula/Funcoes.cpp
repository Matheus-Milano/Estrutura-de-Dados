#include "Funcoes.h"

int Funcoes::MDC(int a, int b){
    if(a % b == 0)
        return b;
    return MDC(b, a % b);
};
int Funcoes::SomaDigitos(unsigned long long int N){
    if(N == 0)
        return N;
    return N % 10 + SomaDigitos(N / 10);
};
int Funcoes::ConverteBinario(unsigned long long int B, int E){
    if(B == 0)
        return B;
    return ((B % 10) * pow(2, E)) + ConverteBinario(B / 10, ++ E);
};
bool Funcoes::Primo(int N, int D){
    if(N < 2)
        return false;
    if(D == 1)
        return true;
    if(N % D == 0)
        return false;
    return Primo(N, --D);
};
