#include <iostream>

using namespace std;

int main(){

	int age;
	char gender[10];//It is for enter from one char to 10 characters
	float heigth;

	cout<<"Digite su edad: "; cin >> age;
	cout<<"\nIngrese su sexo: ";cin >> gender;
	cout<<"\nIngrese su altura: ";cin >> heigth;

	cout<<"\n\n**** DATOS DEL USUARIO *****\nEdad: "<<age<<"\nGenero: "<<gender<<"\nAltura en metros: "<<heigth;
	return 0;
}
