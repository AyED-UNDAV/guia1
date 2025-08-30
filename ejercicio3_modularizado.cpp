#include <iostream>

using namespace std;

const int MAX_PROMEDIO = 20;
const int MAX_PRODUCTOS = 100;

bool deboSeguirRegistrando(float sumatoriaPrecios, int productosRegistrados)
{
    float promedio = sumatoriaPrecios / productosRegistrados;
    return promedio < MAX_PROMEDIO && productosRegistrados < MAX_PRODUCTOS;
}

int main()
{
    int totalProductos = 0;
    float precio = 0;
    float sumatoriaPrecios = 0;
    do
    {
        cout << "Ingrese precio: ";
        cin >> precio;
        sumatoriaPrecios = sumatoriaPrecios + precio;
        totalProductos++;

    } while (deboSeguirRegistrando(sumatoriaPrecios, totalProductos));

    cout << "Se registraron: " << totalProductos << " productos";
}