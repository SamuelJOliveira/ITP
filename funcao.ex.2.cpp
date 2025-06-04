#include <iostream>
#include <string>
using namespace std;


string DesfazerCamelCase(string texto){
    string resultado;
    
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];

        if (i == 0) {
            // A primeira letra deve ser maiúscula
            if (c >= 'a' && c <= 'z') {
                c = c - 32;
            }
            resultado += c;
        }
        else if (c >= 'A' && c <= 'Z') {
            // Se for maiúscula no meio da palavra, adicionar espaço e tornar minúscula
            resultado += ' ';
            resultado += c + 32;
        }
        else {
            resultado += c;
        }
    }

    return resultado;
}

int main () {
   string texto;
   getline(cin,texto);
   cout << DesfazerCamelCase(texto) << endl;
   
}