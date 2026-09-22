#include <iostream>

class Arvore {
    public :
        int AlturaDir , AlturaEsq, N;
        Arvore * dir , * esq;
        Arvore * Inserir( Arvore * , int);
        int Consultar( Arvore * , int, int) ;
        void MostrarEmOrdem ( Arvore *) ;
        void MostrarPreOrdem ( Arvore *) ;
        void MostrarPosOrdem ( Arvore *) ;
        Arvore * Remover( Arvore * , int);
        Arvore * Atualiza( Arvore *) ;
        Arvore * Balanceamento( Arvore *) ;
        Arvore * RotacaoDireita ( Arvore *) ;
        Arvore * RotacaoEsquerda ( Arvore *) ;
};
