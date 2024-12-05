/*Materia: Programación I, Paralelo 1
Autor: Alvaro Alejandro Ochoa Segales.
Fecha creación: 04/12/2024
Número de ejercicio: 5
Problema planteado: Implementa una función recursiva que devuelva el enésimo número en la
secuencia de Fibonacci.  */
#include <iostream>
using namespace std;
int fibonacci(int n);
int main() 
{
    int n;
    cout << "Introduce el valor de n (n >= 0): ";
    cin >> n;
    if (n < 0) {
        cout << "El valor de n debe ser un número no negativo." << endl;
        return 1;
    }
    cout << "El número de Fibonacci en la posición " << n << " es: " << fibonacci(n) << endl;
    return 0;
}
int fibonacci(int n) 
{
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); //Formula para recursividad de fibonacci F(n) = F(n-1) + F(n-2)
}