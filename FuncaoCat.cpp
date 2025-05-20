#include <iostream>
using namespace std;

char* meu_strcat(char* dest, const char* str){
    int i = 0;
    while(dest[i] != '\0'){
        i++;
    }
    
    int j = 0;
    while (str[j] != '\0'){
        dest[i] = str[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main() {
    char nome[200] = "Maria";
    char sobrenome[] = " Clara";
    meu_strcat(nome, sobrenome);
    cout << nome << endl;
    return 0;
}