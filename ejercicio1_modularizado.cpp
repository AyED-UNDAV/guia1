#include <iostream>

using namespace std;

int ingresoDeValor() {
    int valorIngreso = 0;
    cout << "Ingrese un número entre 2 y 9 inclusive" << endl;
    cin >> valorIngreso;
    
    while (valorIngreso < 2 || valorIngreso > 9)
    {
        cout << "El número ingresado no es válido. Ingrese un número entre 2 y 9 inclusive" << endl;
        cin >> valorIngreso;
    }

    cout << "El número ingresado es: " << valorIngreso << endl;

    return valorIngreso;
}

void mostrarOrdenAscendente(int valorIngreso, int &resultado, int &multiplicador) {
    multiplicador = 1;
    resultado = multiplicador * valorIngreso;


    cout << "ORDEN ASCENDENTE" << endl;
    do {
        cout << "Resultado: " << resultado << " || Multiplicador: " << multiplicador << endl;

        multiplicador = multiplicador + 1;
        resultado = multiplicador * valorIngreso;

    } while(resultado <= 100);
}

void mostrarOrdenDescendente(int valorIngreso, int resultado, int multiplicador) {
    cout << "ORDEN DESCENDENTE" << endl;
    while (resultado > 0) {
        
        if (resultado < 100) {
            cout << "Resultado: " << resultado << " || Multiplicador: " << multiplicador << endl;
        }

        multiplicador = multiplicador - 1;
        resultado = multiplicador * valorIngreso;
    }
}

int main()
{
    int multiplicador, resultado;
    int valorIngreso = ingresoDeValor();
    mostrarOrdenAscendente(valorIngreso, resultado, multiplicador);
    mostrarOrdenDescendente(valorIngreso, resultado, multiplicador);

    return EXIT_SUCCESS;
}