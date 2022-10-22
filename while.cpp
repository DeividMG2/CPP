#include <iostream>

// VEREMOS EL WHILE PERO TAMBI�N EL DO WHILE

#include <conio.h> //ESTA LIBRER�A

using namespace std;

int main(){

    int contador = 100;

    while(contador > 0){
        cout << contador << endl;
        contador--;
    }

    cout << contador << endl;

    do{
        cout << contador << endl;
        contador++;
    }while(contador<=10); //LA DIFERENCIA DEL DO WHILE Y EL WHILE ES QUE EL DO WHILE PRIMERO HACE LUEGO VALIDA SI SEGUIR HACIENDOLO.

    // EL WHILE PRIMERO PIENSA Y LUEGO ACTÚA, EL DO WHILE PRIMERO ACTúA Y LUEGO PIENSA

    getch(); //Esto sirve para que el ejecutable no se cierre hasta presionar una tecla (Creo que en windows igual funciona -> system("pause"); ) AUNQUE OCUPA LA LIBRER�A stdlib.h


    return 0;
}
