/*Materia: Programación I, Paralelo 1
Autor: Alvaro Alejandro Ochoa Segales.
Fecha creación: 04/12/2024
Número de ejercicio: 2
Problema planteado: Implementa una función recursiva para calcular la potencia de un número. */

#include <iostream>
using namespace std;
int potencia(int a, int n);
int main() {
    int base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;
    if (exponente < 0) {
        cout << "El exponente debe ser un numero entero no negativo." << endl;
        return 1;
    }
    int resultado = potencia(base, exponente);
    cout << base << " elevado a la potencia de " << exponente << " es: " << resultado << endl;

    return 0;
}
int potencia(int a, int n) 
{
    if (n == 0) {   // Si cualquier número elevado a la potencia de 0 es 1
        return 1;
    }
    return a * potencia(a, n - 1);  // Caso recursivo: a^n = a * a^(n-1)
}
