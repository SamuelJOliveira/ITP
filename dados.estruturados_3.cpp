#include <iostream>
#include <string>
using namespace std;


struct DadosPesssoas{
    string nome;
    double peso;
};

double media(int tam, DadosPesssoas array[]){
    double soma = 0;
    for (int i = 0; i < tam; i++){
        soma = soma + array[i].peso;
    }
    return soma/tam;
}


int main () {
    DadosPesssoas array[3] = {
        {"alice", 60.3},
        {"bruno", 75.2},
        {"carla", 68.0}
    };

    double resultado = media(3, array);
    cout << resultado << '\n';
}