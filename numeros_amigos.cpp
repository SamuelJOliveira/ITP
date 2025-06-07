#include <iostream>
#include <string>
#include <cmath>

int somaDiv(int a)
{
    int soma = 0;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}

bool colegas(int a, int b){
    return (abs(somaDiv(a) - b) <= 2) && (abs(somaDiv(b) - a) <= 2);
}

int main (){
    int primeiro;
    int segundo;
    
    std::cin >> primeiro;
    std::cin >> segundo;

    if (colegas(primeiro, segundo)){
        std::cout << "S" << '\n';
    }
    else {
        std::cout << "N" << '\n';
    }
    return 0;
}
