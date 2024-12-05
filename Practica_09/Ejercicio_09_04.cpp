/*Materia: Programación I, Paralelo 1
Autor: Alvaro Alejandro Ochoa Segales.
Fecha creación: 04/12/2024
Número de ejercicio: 4
Problema planteado: Escribe una función que reciba un vector de enteros y un número
a buscar*/

#include <iostream>
#include <vector>
using namespace std;
bool buscarNumero(const vector<int>& vec, int num, int indice);
int main() 
{
    int n, numeroBuscar;
    cout << "Introduce el tamaño del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Introduce los elementos del vector:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> vec[i];
    }
    cout << "Introduce el número a buscar: ";
    cin >> numeroBuscar;
    if (buscarNumero(vec, numeroBuscar, 0)) {
        cout << "El número " << numeroBuscar << " se encuentra en el vector." << endl;
    } else {
        cout << "El número " << numeroBuscar << " no se encuentra en el vector." << endl;
    }
    return 0;
}
bool buscarNumero(const vector<int>& vec, int num, int indice) 
{
    if (indice == vec.size()) {    // Si hemos recorrido todo el vector sin encontrar el número
        return false;
    }
    if (vec[indice] == num) { // Si encontramos el número en el índice actual
        return true;
    }
    return buscarNumero(vec, num, indice + 1);    // Llamada recursiva para el siguiente índice
}
