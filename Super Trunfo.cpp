#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definição da classe Carta
class Carta {
public:
    string nome;
    int atributo1;
    int atributo2;
    int atributo3;

    Carta(string n, int a1, int a2, int a3) {
        nome = n;
        atributo1 = a1;
        atributo2 = a2;
        atributo3 = a3;
    }

    void exibirCarta() {
        cout << "Nome: " << nome << endl;
        cout << "Atributo 1: " << atributo1 << endl;
        cout << "Atributo 2: " << atributo2 << endl;
        cout << "Atributo 3: " << atributo3 << endl;
    }
};

int main() {
    // Criação do baralho de cartas
    vector<Carta> baralho = {
        Carta("Carta A", 8, 6, 7),
        Carta("Carta B", 5, 9, 6),
        Carta("Carta C", 7, 7, 8)
    };

    // Simulação da escolha de cartas
    Carta jogador1 = baralho[0]; // Exemplo: Jogador 1 escolhe a primeira carta
    Carta jogador2 = baralho[1]; // Exemplo: Jogador 2 escolhe a segunda carta

    cout << "Jogador 1 escolheu:" << endl;
    jogador1.exibirCarta();

    cout << "\nJogador 2 escolheu:" << endl;
    jogador2.exibirCarta();

    // Comparação de atributos (por exemplo, Atributo 1)
    cout << "\nComparando Atributo 1..." << endl;
    if (jogador1.atributo1 > jogador2.atributo1) {
        cout << "Jogador 1 venceu!" << endl;
    } else if (jogador1.atributo1 < jogador2.atributo1) {
        cout << "Jogador 2 venceu!" << endl;
    } else {
        cout << "Empate!" << endl;
    }

    return 0;
}
