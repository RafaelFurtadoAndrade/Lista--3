#include <iostream>
using namespace std;

bool is_palindrome(string text) {
    for (int i = 0; i < text.length() / 2; i++) {
        if (text[i] != text[text.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string numbers[5];

    // Solicita que o usu�rio insira 5 n�meros
    cout << "Digite 5 numeros inteiros: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    
    // Verifica se cada n�mero � um pal�ndromo
    cout << "Resultados:" << endl;
    for (int i = 0; i < 5; ++i) {
        if (is_palindrome(numbers[i])) {
            cout << numbers[i] << " e um palindromo." << endl;
        } else {
            cout << numbers[i] << " nao e um palindromo." << endl;
        }
    }

    return 0;
}
