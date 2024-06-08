#include <iostream>
using namespace std;

int main() {
    // Definição das variáveis
    int lado1, lado2, lado3;

    // Solicitação para inserir os valores
    cout << "Digite a medida do lado 1: ";
    cin >> lado1;
    cout << "Digite a medida do lado 2: ";
    cin >> lado2;
    cout << "Digite a medida do lado 3: ";
    cin >> lado3;

    // Definição do tipo de triângulo
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "Triangulo equilatero\n";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "Triangulo isocele\n";
    } else {
        cout << "Triangulo escaleno\n";
    }

    return 0;
}
