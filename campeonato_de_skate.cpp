#include <iostream>
#include <cmath>

// --- FUNÇÃO AUXILIAR ---
// Ordena um pequeno trecho de 3 elementos de um array, começando em 'start_index'
void sort_chunk(int arr[], int start_index) {
    // Para ordenar 3 elementos, duas passadas do laço interno são suficientes.
    for (int i = 0; i < 2; i++) {
        // O laço de comparação vai do início ao penúltimo elemento do trecho.
        for (int k = start_index; k < start_index + 2; k++) {
            if (arr[k] > arr[k+1]) {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
}


int score(int a[9]){
    int final[3] = {0};

    // Usando a função auxiliar para cada grupo
    sort_chunk(a, 0); // Ordena o trecho que começa no índice 0
    final[0] = a[1];

    sort_chunk(a, 3); // Ordena o trecho que começa no índice 3
    final[1] = a[4];

    sort_chunk(a, 6); // Ordena o trecho que começa no índice 6
    final[2] = a[7];

    // Ordenando o array final com as 3 medianas
    sort_chunk(final, 0);

    return final[1];
}
int main () {
    int a[9];
    for (int i = 0; i < 9; i++){
        std::cin >> a[i];
    }
    int b[9];
    for (int i = 0; i < 9; i++){
        std::cin >> b[i];
    }
   
    if (score(a) > score(b)){
        std::cout << "A" << '\n';
    }
    else if(score(a) == score(b)){
        std::cout << "empate" << '\n';
    }
    else {
        std::cout << "B" << '\n';
    }
    return 0;
}