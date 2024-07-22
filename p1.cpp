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

    srand(time(0)); // Inicializar la semilla para generar n�meros aleatorios

    cout << "N�meros generados aleatoriamente:" << endl;
    for (int i = 0; i < tamano; i++) {
        numeros[i] = rand() % 100; // Generar n�meros aleatorios entre 0 y 99
        cout << numeros[i] << " ";

        if (esPrimo(numeros[i])) {
            primos[contadorPrimos] = numeros[i];
            contadorPrimos++;
        }
    }

    cout << "\n\nN�meros primos encontrados:" << endl;
    for (int i = 0; i < contadorPrimos; i++) {
        cout << primos[i] << " ";
    }

    return 0;
}
