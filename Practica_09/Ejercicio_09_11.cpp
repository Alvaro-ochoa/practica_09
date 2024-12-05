/*Materia: Programación I, Paralelo 1
Autor: Alvaro Alejandro Ochoa Segales.
Fecha creación: 04/12/2024
Número de ejercicio: 11
Problema planteado:  Realizar un algoritmo recursivo para que un 
granjero sepa cuantos pares de conejos podra poner a la venta en un año  */
#include <iostream>
using namespace std;
int fibonacci(int n) 
{
    if (n == 0 || n == 1) {  // En el mes 0 o 1, hay 1 par de conejos
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // el número de pares de conejos en el mes n es la suma de los pares de conejos de los dos meses anteriores
}
int main() 
{
    int meses = 12;
    int resultado = fibonacci(meses);
    cout << "Al cabo de " << meses << " meses, el granjero podrá vender " << resultado << " pares de conejos." << endl;
    return 0;
}
