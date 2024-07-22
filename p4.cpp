#include <iostream>
#include <string>

using namespace std;

const int cantidadEstudiantes = 10;

int main() {
    string nombres[cantidadEstudiantes];
    int notasCorte1[cantidadEstudiantes];
    int notasCorte2[cantidadEstudiantes];
    int notasCorte3[cantidadEstudiantes];
    double notasFinales[cantidadEstudiantes];

    // Ingresar los nombres y las notas de los estudiantes
    for (int i = 0; i < cantidadEstudiantes; i++) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> nombres[i];

        cout << "Ingrese la nota del primer corte para " << nombres[i] << ": ";
        cin >> notasCorte1[i];

        cout << "Ingrese la nota del segundo corte para " << nombres[i] << ": ";
        cin >> notasCorte2[i];

        cout << "Ingrese la nota del tercer corte para " << nombres[i] << ": ";
        cin >> notasCorte3[i];

        // Calcular la nota final del estudiante
        notasFinales[i] = (notasCorte1[i] + notasCorte2[i] + notasCorte3[i]) / 3.0;
    }

    // Mostrar la información en forma de tabla
    cout << "Estudiante\t1er Corte\t2do Corte\t3er Corte\tNota Final" << endl;
    for (int i = 0; i < cantidadEstudiantes; i++) {
        cout << nombres[i] << "\t\t" << notasCorte1[i] << "\t\t" << notasCorte2[i] 
             << "\t\t" << notasCorte3[i] << "\t\t" << notasFinales[i] << endl;
    }

    return 0;
}
