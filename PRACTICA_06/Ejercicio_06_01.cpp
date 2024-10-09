// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 09/10/2024
// Número de ejercicio: 1
// Problema planteado: cambio de fila
#include <iostream>
#include <vector>
using namespace std;

void matriz_c(int x) {

    vector<vector<int>> matriz(x, vector<int>(x));
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> matriz[i][j];
        }
    }

    for (int j = 0; j < x; ++j) {
        swap(matriz[0][j], matriz[x - 1][j]);
    }

    cout << " cambio de la fila 1 por la fila "<<"\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << std::endl;
    }
}
int main()
{
    int n;
    cout << "Ingrese el orden de la matriz cuadrada: ";
    cin >> n;
    matriz_c(n);
    return 0;
}