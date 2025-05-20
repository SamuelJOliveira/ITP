#include <iostream>
using namespace std;

int minha_strlen(const char* str) {
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int main() {
    char nome[] = "maria";
    int tamanho = minha_strlen(nome);
    cout << "O tamanho da string e: " << tamanho << endl;
    return 0;
}