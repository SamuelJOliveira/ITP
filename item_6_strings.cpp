#include <iostream>
#include <string>
using namespace std;

int main () {

    string linha;
    string texto = "";
    int tam_linha = 0;
    int soma_tam = 0;
    int tam_palavra = 0;
    int qnt_linha = 0;

    string palavra_atual = "";
    string maior_palavra = "";

    while (getline(cin, linha)){

        if (linha.empty()) {
            break;
        }

        
        for (int i = 0; i <= linha.length(); i++) {
            if (linha[i] != ' ' && i < linha.length()){
                palavra_atual = palavra_atual + linha[i];
            }
            else {
                if (!palavra_atual.empty()) {
                    if (palavra_atual.length() > tam_palavra){
                        tam_palavra = palavra_atual.length();
                        maior_palavra = palavra_atual;
                    }
                    palavra_atual = "";
                }
            }
        }


        if (linha.length() > tam_linha){
            tam_linha = linha.length();
        }

        soma_tam = soma_tam + linha.length();

        texto = texto + linha + "\n";
        qnt_linha++;
    }

    cout << "Texto lido:\n" << texto << endl;
    cout << "Tamanho da maior linha: " << tam_linha << endl;
    cout << "Media do tamanho das linhas: " << (soma_tam / qnt_linha) << endl;
    cout << "Maior palavra: " << maior_palavra << endl;
    cout << "Tamanho da maior palavra: " << tam_palavra << endl;

    return 0;
}