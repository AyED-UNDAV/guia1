
#include <iostream>

using namespace std;

int main()
{

/* 

Ejercicio 4

Ingresar una serie de números naturales que termina con -1 e indicar cuántas veces se interrumpe el orden ascendente 
y cuántos números hay en cada grupo ordenado.

*/

int elementoIngresado = 0;
int elementoAnterior = -1;
int cantidadGrupos = 0;
int cantidadElementosGrupoActual = 0;

while (elementoIngresado != -1)
{
    cout << "Ingrese un número natural, -1 para salir" << endl;
    cin >> elementoIngresado;

    if (elementoIngresado > elementoAnterior) {
        cantidadElementosGrupoActual++;
    } else {
        
        cout << "Cantidad de elementos en el grupo " << cantidadGrupos << ": " << cantidadElementosGrupoActual << endl;
        cantidadElementosGrupoActual = 1;
        cantidadGrupos++;
    }

    elementoAnterior = elementoIngresado;
}

cantidadGrupos--; // Restamos 1 porque el último grupo no se cuenta porque es el del corte con -1
cout << "Cantidad de cortes del orden ascendente: " << cantidadGrupos << endl;

}

