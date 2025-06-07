#include <iostream>
#include <string>

bool ehprimo(int numero) {
    int div = 0;
    for (int i = 1; i <= numero; i++){
        if (numero % i == 0){
            div++;
        }
    }
    if (div == 2){
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int a;
    std::cin >> a;

    int gemeo = a+2;

    bool continuar = false;

    ehprimo(a) == true ? continuar == true : continuar = false;
    
    if (!continuar) {
        std::cout << "Numero nao forma par de gemeos" << '\n';
    }
    else {
        if (ehprimo(gemeo) == true){
            std::cout << "Numero forma par de gemeos" << '\n';
        }
        else {
            std::cout << "Numero nao forma par de gemeos" << '\n';
        }
    }
    return 0;
}
