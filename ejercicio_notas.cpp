#include <iostream>

using namespace std;

/*
This program is about calculate a grade of a student

30% activities
60& Theory examen
10% participation

*/


int main(){

    float practicas, examen, participacion, nota = 0;

    cout << "Enter your grade from activities: "; cin >> practicas;
    cout << "\nEnter your grade from examen: "; cin >> examen;
    cout << "\nEnter your grade from participation: "; cin >> participacion;

    nota = (practicas*30/100) + (examen*60/100) + (participacion/10);

    cout << "\n\nThe final grade is: " << nota;

    if (nota>=70){
        cout << "\nFELICIDADES APROBASTE";
    }
    else{
        cout << "\LO SIENTO, REPROBASTE";
    }

    return 0;
}
