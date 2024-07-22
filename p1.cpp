#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int tamano = 20;
    int numeros[tamano];
    int primos[tamano];
    int contadorPrimos = 0;

    srand(time(0)); // Inicializar la semilla para generar números aleatorios

    cout << "Números generados aleatoriamente:" << endl;
    for (int i = 0; i < tamano; i++) {
        numeros[i] = rand() % 100; // Generar números aleatorios entre 0 y 99
        cout << numeros[i] << " ";

        if (esPrimo(numeros[i])) {
            primos[contadorPrimos] = numeros[i];
            contadorPrimos++;
        }
    }

    cout << "\n\nNúmeros primos encontrados:" << endl;
    for (int i = 0; i < contadorPrimos; i++) {
        cout << primos[i] << " ";
    }

    return 0;
}
