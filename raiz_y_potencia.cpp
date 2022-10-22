#include <iostream>
#include <math.h> // I HAVE TO Import math bookstore for use some function like SQRT or POW
using namespace std;

int main(){

    int num1,num2;

    cout << "Ingrese numero para ver su raiz cuadrada: "; cin >> num1;
    cout << "\nLa raiz cuadrada de " << num1 << " es: " << sqrt(num1); //This way give me the square root from a number

    cout << "\n\n\nIngrese numero para ver su potencia al cubo: "; cin >> num2;
    cout << "\nLa potencia de " << num1 << " es; " << pow(num2, 3); //Asi saco potencia, primer parametro la base, segundo el exponente

    /*
        Ejercicio ax**2 + bx + c = 0; tal que x = (-b + raiz de (b**2 - 4ac))/2a

    */
    cout << "\n\n\n****** Ejercicio matematico ******" << endl << endl;

    float a,b,c,x;

    cout << "Ingrese el numero A: "; cin >> a;
    cout << "\nIngrese el numero B: "; cin >> b;
    cout << "\nIngrese el numero C: "; cin >> c;

    //x = ((0-b)+sqrt((pow(b,2))-4*a*c));

    x = ((0-b)+sqrt(((pow(b,2)-4)*(a*c))))/2*a;

    //float result = pow((a*x),2) + b*x + c;

    cout << "\n\nLa x equivale a: " << x << endl;

    return 0;
}