#include <iostream>
#include <string>
#include <math.h>

struct Ponto
{
    double x;
    double y;
};

double dist(Ponto a, Ponto b)
{
    double diferenca = (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y);
    return sqrt(diferenca);
}

int Pontuacao(Ponto b[10])
{
    Ponto zero;
    zero.x = 0;
    zero.y = 0;

    int pontuacao = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dist(b[i], zero) >= 0 && dist(b[i], zero) <= 1)
        {
            pontuacao = pontuacao + 10;
        }
        if (dist(b[i], zero) > 1 && dist(b[i], zero) <= 2)
        {
            pontuacao = pontuacao + 6;
        }
        if (dist(b[i], zero) > 2 && dist(b[i], zero) <= 3)
        {
            pontuacao = pontuacao + 4;
        }
        if (dist(b[i], zero) > 3)
        {
            pontuacao = pontuacao + 0;
        }

        if (i > 0)
        {
            if (dist(b[i], b[i - 1]) >= 0 && dist(b[i], b[i - 1]) <= 1)
            {
                pontuacao = pontuacao + 5;
            }
            if (dist(b[i], b[i - 1]) > 1 && dist(b[i], b[i - 1]) <= 2)
            {
                pontuacao = pontuacao + 3;
            }
            if (dist(b[i], b[i - 1]) > 2 && dist(b[i], b[i - 1]) <= 3)
            {
                pontuacao = pontuacao + 2;
            }
            if (dist(b[i], b[i - 1]) > 3)
            {
                pontuacao = pontuacao + 0;
            }
        }
    }

    return pontuacao;
}

int main() {
    Ponto array[10] = {0};
    for (int i = 0; i < 10; i++){
        std::cin >> array[i].x >> array[i].y;
    }

    std::cout << Pontuacao(array) << "\n";

    return 0;
}
