#include <iostream>

using namespace std;

int main(){

    int num;
    cout << "Ingresa un numero en rango 1-5: ";
    cin >> num;

    switch(num){ //Aqui compruebo el valor de la variable num (DEBE SER INTEGER)
        case 1: cout << "Tu numero es el 1"; break; //En los case valido cada una de las posibles respuestas, ej case 1: es como preguntar si num==1
        case 2: cout << "Tu numero es el 2"; break; //LOS BREAK SE USAN PARA QUE YA SE SALGA DEL SWITCH.
        case 3: cout << "Tu numero es el 3"; break;
        case 4: cout << "Tu numero es el 4"; break;
        case 5: cout << "Tu numero es el 5"; break;
        default: cout << "Numero fuera del rango 1-5"; break; //El default es por si no se da ninguno de los casos.
    }

    return 0;
}