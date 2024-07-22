#include <iostream>

using namespace std;

int main() {
    const int tamano = 10;
    int numeros[tamano];
    int sumaPositivos = 0, cantidadPositivos = 0;
    int sumaNegativos = 0, cantidadNegativos = 0;

    // Leer los 10 números enteros por teclado y guardarlos en el array
    cout << "Ingresa 10 números enteros:" << endl;
    for (int i = 0; i < tamano; i++) {
        cin >> numeros[i];
    }

    // Calcular la suma de valores positivos, la cantidad y la media
    for (int i = 0; i < tamano; i++) {
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
            cantidadPositivos++;
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
            cantidadNegativos++;
        }
    }

    // Calcular y mostrar la media de valores positivos
    if (cantidadPositivos > 0) {
        double mediaPositivos = static_cast<double>(sumaPositivos) / cantidadPositivos;
        cout << "Media de valores positivos: " << mediaPositivos << endl;
    } else {
        cout << "No se ingresaron valores positivos." << endl;
    }

    // Calcular y mostrar la media de valores negativos
    if (cantidadNegativos > 0) {
        double mediaNegativos = static_cast<double>(sumaNegativos) / cantidadNegativos;
        cout << "Media de valores negativos: " << mediaNegativos << endl;
    } else {
        cout << "No se ingresaron valores negativos." << endl;
    }

    return 0;
}
