/*

Un programa debe pedir al usuario ingresar la cantidad de notas de examenes que se desean cargar. 

Una vez que se terminan de ingresar las notas se debe calcula e informar:

a) cuántas notas fueron mayores o iguales a 6 (aprobadas)
b) cuántas notas fueron menores a 6 (desaprobadas).

*/


#include <iostream>

using namespace std;

int main() {

    /// estructura del for
    /*for(variable ; condicion ; aumentar contador){
        //hacer algo con la variable
    }

    1) se crea variable (solo la primera iteracion)
    2) se evalua condicion -> si es true
    3) se hace algo (se itera) con la variable
    4) aumenta contador

    for(int contador = 5 ; contador < 1; contador++){
        cout << "el valor de contador es: " << contador;  //2 
        // etc
    }
    */


    //// variables a utilizar

    // cantidad de notas a ingresar
    int cantidad_notas = 0;

    //variable para ingresar cada nota
    float nota_ingresada = 0;

    // CONTADORES
    //a) notas aprobadas
    int notas_aprobadas = 0;
    
    //b) notas desaprobadas
    int notas_desaprobadas = 0;

    //notas ingresadas hasta el momento
    int contador_notas_ingresadas = 0;


    cout << "Cantidad de notas a ingresar: " << endl;
    cin >> cantidad_notas;

    while (contador_notas_ingresadas < cantidad_notas ) {
      
        cout << "Ingrese la nota numero " << contador_notas_ingresadas + 1 << ": " << endl;
        cin >> nota_ingresada; 
        contador_notas_ingresadas++; 

        if(nota_ingresada >= 6){
            notas_aprobadas ++;
        }

        if(nota_ingresada < 6){
            notas_desaprobadas ++;
        }

    }

    cout << "Cantidad de aprobados es: " << notas_aprobadas << endl;
    cout << "Cantidad de desaprobados es: " << notas_desaprobadas << endl;

    return EXIT_SUCCESS;
}
