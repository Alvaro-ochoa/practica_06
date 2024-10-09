// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales.
// Fecha creación: 09/10/2024
// Número de ejercicio: 4
// Problema planteado: generar matriz de n x n
#include <iostream>
#include <vector>
using namespace std;
void matriz(int x) {
    // Declarar la matriz
    vector<vector<int>> matriz(x, vector<int>(x));

    // Llenar la matriz según el patrón
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            matriz[i][j] = 1 + (i + j) * 2;
        }
    }

    cout << "Matriz generada:"<<"\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{ 
    int n;
    cout<<"ingrese el tamaño de la matriz: ";
    cin>>n;
    matriz(n);
    return 0;
}