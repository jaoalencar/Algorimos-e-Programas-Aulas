#include <iostream>

using namespace std;

// Função para validar o caractere
bool validarCaractere(char c) {
    return (c == 'A' || c == 'a' || c == 'P' || c == 'p');
}

int main() {
    char caractere;

    // Loop para solicitar um caractere válido
    do {
        cout << "Digite um caractere (A, a, P ou p): ";
        cin >> caractere;

        if (!validarCaractere(caractere)) {
            cout << "Caractere invalido! Tente novamente." << endl;
        }
    } while (!validarCaractere(caractere));

    cout << "Caractere aceito: " << caractere << endl;

    return 0;
}
