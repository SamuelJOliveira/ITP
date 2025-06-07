#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Ponto {
    int coluna; // de A a H (valores de 0 a 7)
    int linha;      // de 0 a 7 (linha 1 é 0, linha 8 é 7)
};

//tranformar a minha entrada que esta em string em um ponto da matriz
Ponto lerPosicao(const string& entrada) {
    Ponto p; // criar um ponto p
    p.coluna = (entrada[0] - 'a'); // 'c' - 'a' = 2 // vai dar o numero da coluna que 
    p.linha = entrada[1] - '1';          // '2' - '1' = 1
    return p; //vai retornar o ponto que corresponde a string
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

bool cavalo(Ponto origem, Ponto final, int tabuleiro[8][8]) {
    int difLinha = origem.linha - final.linha;
    int difColuna = origem.coluna - final.coluna;

    if (abs(difColuna) == 1 && abs(difLinha) == 2){
        return true;
    }
    else if ((abs)(difColuna) == 2 && abs(difLinha) == 1) {
        return true;
    }
    else {
        return false;
    }

}

int main () {  
    string start;
    string end;

    cin >> start;
    cin >> end;

    int tabuleiro[8][8] = {0};

    Ponto inicio = lerPosicao(start);
    Ponto final = lerPosicao(end);

    if (cavalo(inicio, final, tabuleiro) == true) {
        cout << "verd." << '\n';
    } 
    if (cavalo(inicio, final, tabuleiro) == false) {
        cout << "falso" << '\n';
    } 

    return 0;
}






















