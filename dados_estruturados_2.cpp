#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 100;

struct Histograma{
    
    int qntFreq;
    int valores[MAX_SIZE];
};

struct Plateu{
    int posInicial;
    int posFinal;
    int freq;
};


Plateu funcao(Histograma a){
    Plateu b;
    int count = 0;
    for (int i = 0; i < a.qntFreq - 1; i++){
        if (a.valores[i] == a.valores[i+1]){
            if(count == 0) {
            b.posInicial = i;
            }
            count++;
        }
        else {
            if (count > 0){
                b.posFinal = i;
                b.freq = a.valores[i];
                break;
            }
            else {
                continue;
            }
        }
    }
    if (count > 0) {
        b.posFinal = a.qntFreq - 1;
        b.freq = a.valores[a.qntFreq - 1];
}
    return b;
}
// versao mais exuta 

// Plateu funcao(const Histograma& a) {
//     Plateu b;
//     b.posInicial = -1;
//     b.posFinal = -1;
//     b.freq = 0;

//     bool dentroPlateau = false;

//     for (int i = 0; i < a.qntFreq - 1; ++i) {
//         if (a.valores[i] == a.valores[i+1]) {
//             if (!dentroPlateau) {
//                 // Entrou no plateau
//                 b.posInicial = i;
//                 b.freq = a.valores[i];
//                 dentroPlateau = true;
//             }
//             // Não faz nada, só continua
//         } else {
//             if (dentroPlateau) {
//                 // Saiu do plateau
//                 b.posFinal = i;
//                 return b; // Encontrou, retorna!
//             }
//         }
//     }
//     // Se terminou e estava num plateau, ele vai até o final
//     if (dentroPlateau) {
//         b.posFinal = a.qntFreq - 1;
//     }
//     return b;
// }
