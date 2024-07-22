
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int filas = 4;
    const int columnas = 5;
    int numeros[filas][columnas];
    srand(time(0)); // Inicializar la semilla para generar números aleatorios

    // Generar e introducir los números aleatorios en el array
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            numeros[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
        }
    }

    // Mostrar la matriz y calcular las sumas parciales
    int sumaTotal = 0;
    cout << "Matriz de números generados:" << endl;
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) {
            cout << numeros[i][j] << " ";
            sumaFila += numeros[i][j];
            if (i == filas - 1) {
                sumaTotal += numeros[i][j];
            }
        }
        cout << "| Suma fila " << i + 1 << ": " << sumaFila << endl;
    }

    // Calcular y mostrar las sumas parciales de las columnas
    for (int j = 0; j < columnas; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < filas; i++) {
            sumaColumna += numeros[i][j];
        }
        cout << "----";
    }
    cout << endl;

    // Mostrar la suma total en la esquina inferior derecha
    cout << "Suma total: " << sumaTotal << endl;

    return 0;
}
