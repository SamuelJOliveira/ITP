#include <iostream>
#include <string>
using namespace std;

// using namespace std;

// void greet(string nome ) {
//     cout << "Hello " << nome << endl;
// }

// string nome_completo(string primeiro_nome, string ultimo_nome) {
//     return primeiro_nome + " " + ultimo_nome;
// }

// int main () {
//     // chamando a funcao;
//     greet(nome_completo("Samuel", "Jacome"));
    
// }

// int max (int a, int b){
//     return (a > b) ? a : b;
// }

// int main () {
//     int larger = max(1, 2);
//     cout << larger << endl;
// }

// tenho que colocar o parametro default depois dos outros
// double calculartaxa(double v1, double taxa = .2) {
//    return v1 * taxa; 
// }

// int main () {
//   double tax = calculartaxa(10000, .3);
//   cout << tax << endl;

// }

// tem que ter um signature diferentes
// void greet(string name) {
//     cout << "Hello " << name << endl;
// }

// void greet(string title, string name){
//     cout << "Hello " << title << " " << name << endl;
// }

// int main () { 
//     greet("Mr", "Mosh");
// }

// void greet(string& name) {
//     cout << "Hello " << name << endl;
//     name = "a"; 
// }

// int main () {
//     string name = "Mosh";
//     greet(name);
//     cout << name << endl;
// }

// string inverte(string s) {
//     string r = "";
//     for (int i = 0; i <= s.length(); i++ ){
//         r = r s[s.length() - i];
//     }
//     return r;
// }

// int main () {
//     cout << inverte("abcde") << endl;
//     cout << inverte("aa b cc") << endl;
//     cout << inverte("") << endl;
//     return 0;
// }

string CamelCase (string texto){
    string resultado; //string vazia que eu vou preencher

    bool proximaMaiuscula = true; // controlar para skipar o ' ' e abranger a primeira letra

    for (int i = 0; i < texto.length(); i++){
        if(texto[i] == ' '){
            proximaMaiuscula = true; // incializa como verdade para que a proxima letra seja maiuscula ja que o valor nesse momento e false
        }
        else {
            if (proximaMaiuscula && texto[i] >= 'a' && texto[i] <= 'z') {
                texto[i] = texto[i] - 32; // abrange o primeiro elemente e o comeco de cada um
            }
            else if (!proximaMaiuscula && texto[i] >= 'A' && texto[i] <= 'Z') {
                texto[i] = texto[i] + 32; // se tiver algum maiusculo onde nao deveria
            }
            resultado = resultado + texto[i]; // se nao for espaco em branco preencher
            proximaMaiuscula = false; // seta como false dnv
        }
    }
    return resultado;
}

int main () {
   string texto;
   getline(cin,texto);
   cout << CamelCase(texto) << endl;
   
}