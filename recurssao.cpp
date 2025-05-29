#include <iostream>
using namespace std;

int maior(int tamanho, int sequencia[]) {
    // Caso base da recursão: se só tem 1 elemento no vetor, ele é o maior por definição
    if (tamanho == 1) {
        return sequencia[0];  // Retorna o único elemento restante
    }

    // Chamada recursiva:
    // → A função chama a si mesma com o ponteiro 'sequencia+1'
    //    Isso faz com que o próximo elemento seja o "novo sequencia[0]"
    // → E com 'tamanho - 1', porque estamos olhando um elemento a menos

    // Ao voltar da chamada, comparamos o sequencia[0] atual com o resultado da função chamada
    // Exemplo:
    // Para {4, 7, 2, 9}:
    //   primeiro compara 4 com maior({7,2,9})
    //   depois compara 7 com maior({2,9})
    //   depois compara 2 com maior({9})
    //   e maior({9}) retorna 9

    return sequencia[0] > maior(tamanho - 1, sequencia + 1) ?
           sequencia[0]                            // se for maior que o restante, retorna ele
           : maior(tamanho - 1, sequencia + 1);    // senão, retorna o maior do restante
}

    int soma (int tamanho, int vetor[]){
        if (tamanho == 1){
            return vetor[0];
        }
        else {
            return vetor[0] + soma(tamanho-1, vetor+1);
        }
    }

    int contar_ocorrencias(int tamanho, int vetor[], int alvo){
        if (tamanho == 1) {
            return vetor[0] == alvo ? 1 : 0;    
        }
        else{
            return (vetor[0] == alvo ? 1 : 0 ) + contar_ocorrencias(tamanho -1, vetor + 1, alvo);
        }
    }

    /*
    Esta acontecendo o seguinte nesse codigo:
        quando tiver so um vetor de um elemento, se esse elememto for igual ao valor alvo, devera
        retornar um valor 1. Como a ultima chamada da funcao = 1, eu vou desembrulhando.

            No caso {1, 4, 1, 2, 1} quando o 1 e o alvo

        tem-se a comparacao 2 = alvo? entao 0 + (1) --> resultado do ultimo elemento que e o alvo
            1 = alvo? entao 1 + (1) --> resultado de 0 + 1;
                4 = alvo? entao 0 + (2) --> resultado de 1 + 1'
                    1 = alvo? entao 1 + (2) --> resultado de 0 + 2;

        ou seja, eu faco uma adicao dentro da chamada de retorno da funcao recursiva, para ir somando as
        ocorrencias de um numero alvo.
    */