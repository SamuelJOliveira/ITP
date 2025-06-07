#include <iostream>
#include <string>

// Função auxiliar para formatar o número com zero à esquerda
std::string formatarNumero(int num) {
    if (num < 10) {
        return "0" + std::to_string(num);
    } else {
        return std::to_string(num);
    }
}

// Função que calcula e imprime o horário, agora com o ciclo de 24h
void imprimirHorario(int total_segundos) {
    // A CORREÇÃO: Garante que o tempo "vire o dia"
    int segundos_no_dia = total_segundos % 86400;

    int h = segundos_no_dia / 3600;
    int m = (segundos_no_dia % 3600) / 60;
    int s = segundos_no_dia % 60;

    std::cout << formatarNumero(h) << ":"
              << formatarNumero(m) << ":"
              << formatarNumero(s) << '\n';
}

// Função principal da lógica, que já estava com a soma correta
void horario(int hora, int min, int segundos) {
    const int total_inicial_em_segundos = hora * 3600 + min * 60 + segundos;

    imprimirHorario(total_inicial_em_segundos + 3600);   // +1h
    imprimirHorario(total_inicial_em_segundos + 7830);   // +2h 10m 30s
    imprimirHorario(total_inicial_em_segundos + 16850);  // +4h 40m 50s
    imprimirHorario(total_inicial_em_segundos + 43505);  // +12h 5m 5s
}

int main () {
    int horas, minutos, segundos;
    std::cin >> horas >> minutos >> segundos;
    horario(horas, minutos, segundos);
    return 0;
}