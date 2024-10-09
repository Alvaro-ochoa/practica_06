// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 09/10/2024
// Número de ejercicio: 5
// Problema planteado: multiplicación de matrices
#include <iostream>
#include <vector>
using namespace std;
void gen_mat(int x, int y) {

    // Declarar las matrices
    vector<vector<int>> matrizA(x, vector<int>(y));
    vector<vector<int>> matrizB(y, vector<int>(x));
    vector<vector<int>> resultado(x, vector<int>(x, 0)); // Inicializar en 0

    cout << "Ingrese los elementos de la primera matriz :\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cin >> matrizA[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz :\n";
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            for (int k = 0; k < y; ++k) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    cout << "la matriz resultante de la multiplicación de las otras matrices es:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            std::cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
     int n, m;

    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> n;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> m;
    gen_mat(n,m);
    return 0;
}