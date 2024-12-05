/*Materia: Programación I, Paralelo 1
Autor: Alvaro Alejandro Ochoa Segales.
Fecha creación: 04/12/2024
Número de ejercicio: 14
Problema planteado: Realizar un algoritmo recursivo para que imprima los elementos correspondientes a la
conjetura de Ullman  */
#include <iostream>
using namespace std;
void conjeturaUllman(int n) 
{
    cout << n << " ";
    if (n == 1) 
    {
        return;
    }
    if (n % 2 == 0) // Si n es par, lo dividimos entre 2
    {     
        conjeturaUllman(n / 2);
    }
    // Si n es impar, multiplicamos por 3 y sumamos 1
    else 
    {
        conjeturaUllman(n * 3 + 1);
    }
}
int main() 
{
    int n;
    cout << "Introduce un número entero positivo mayor que 1: ";
    cin >> n;
    if (n > 1) 
    {
        cout << "Secuencia de la conjetura de Ullman para " << n << ": ";
        conjeturaUllman(n);
        cout << endl;
    } 
    else 
    {
        cout << "El número debe ser mayor que 1." << endl;
    }
    return 0;
}
