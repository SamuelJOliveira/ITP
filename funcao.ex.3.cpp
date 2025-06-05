#include <iostream>
#include <string>
using namespace std;


enum Coluna {
    A, B, C, D, E, F, G, H
};
struct Ponto {
    Coluna coluna; // de A a H (valores de 0 a 7)
    int linha;      // de 0 a 7 (linha 1 é 0, linha 8 é 7)
};

Ponto lerPosicao(const string& entrada) {
    Ponto p;
    p.coluna = Coluna(entrada[0] - 'a'); // 'c' - 'a' = 2
    p.linha = entrada[1] - '1';          // '2' - '1' = 1
    return p;
}

bool rainha (Ponto origem, Ponto destino, int tabuleiro[8][8]){

    int ColDiagonal = origem.coluna - destino.coluna;
    if (ColDiagonal < 0) {
        ColDiagonal = ColDiagonal * -1;
    }
    int LinDiagonal = origem.linha - destino.linha;
    if (LinDiagonal < 0) {
        LinDiagonal = LinDiagonal * -1;
    }

    if (origem.coluna == destino.coluna){
        return true;
    }
    else if (origem.linha == destino.linha){
        return true;
    }  

    else if (ColDiagonal == LinDiagonal) {
        return true;
    }

    else {
        return false;
    }

}

















int main () {











}