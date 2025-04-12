#include <iostream>
#include "limits.h"

using namespace std;

// Ingresar N juegos de N1 valores enteros cada uno, donde N se
// informa al comienzo y N1 al cargar cada juego. 

// 1. Mostrar en la pantalla el número del juego con promedio más alto
// 2. Mostrar en la pantalla la suma total de todos los juegos.

int main() {

    int cantidadDeJuegos = 0;
    int acumuladoTotal = 0;
    //TODO: en vez de este "INT_MIN" que no es el mínimo dentro del espectro float,
    //podemos chequear si es la primera iteración, seteamos el valor directamente
    float mayorPromedio = INT_MIN;
    int numeroJuegoMayorPromedio = -1;

    //TODO: acá puede faltar la validación de que la cantidad de juegos sea positiva, etc
    cout << "Cuantos juegos vas a ingresar\n";
    cin >> cantidadDeJuegos;

    int cantidadNumeros;

    for (int juego = 0; juego < cantidadDeJuegos; juego++) {
        
        float promedioJuegoActual = 0.0;
        int acumuladoJuegoActual = 0;

        cout << "Cuantos números va a tener el juego " << juego << "\n";
        cin >> cantidadNumeros;
        for (int num = 0; num < cantidadNumeros; num++) {
            int nuevoValor;
            cout << "Número: ";
            cin  >> nuevoValor;
            acumuladoJuegoActual = acumuladoJuegoActual + nuevoValor;
            acumuladoTotal = acumuladoTotal + nuevoValor;
        }

        promedioJuegoActual = acumuladoJuegoActual / cantidadNumeros;

        if (promedioJuegoActual > mayorPromedio) {
            mayorPromedio = promedioJuegoActual;
            numeroJuegoMayorPromedio = juego;
        }

    }

    cout << "El numero de juego con el mayor promedio es: " << numeroJuegoMayorPromedio;
    cout << "\nEl acumulado total es " << acumuladoTotal;
}