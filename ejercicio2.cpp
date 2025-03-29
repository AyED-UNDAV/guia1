#include <iostream>

using namespace std;

int main()
{

    const int MAYORIA_EDAD = 18;
    const int EDAD_JUBILACION = 66;

    int edad = 0;
    int edadMaxima = -1;
    int contadorMenores = 0;
    int contadorActivos = 0;

    // ENTRADA DE DATOS
    cout << "ingresar un numero, -1 si desea salir del programa" << endl;
    cin >> edad;
    
    while (edad != -1 && edad >= 0)
    {
        if (edad > edadMaxima) {
            edadMaxima = edad;
        }

        if (edad < MAYORIA_EDAD) {
            contadorMenores++;
        } else {
            if (edad < EDAD_JUBILACION) {
                contadorActivos++;
            } else {
                cout << "Edad de posible jubilado o por jubilarse: " << edad << endl;
            }
        }
        
        cout << "ingresar un numero, -1 si desea salir del programa" << endl;
        cin >> edad;
    }

    
    cout << "La edad maxima es: " << edadMaxima << endl;
    cout << "La cantidad de menores de edad es: " << contadorMenores << endl;
    cout << "La cantidad de personas activas es: " << contadorActivos << endl;

    return EXIT_SUCCESS;
}