#include <iostream>
using namespace std;

/*
In this program I learn the use of data and its input and output.
And this is the way you comment your code here in C++
*/

int main(){

    //TYPES OF DATA (int, string, float, char, etc.)

    int number = 15;
    float weight = 65.4;
    double bigFloat = 16.9829;
    char character = 'a';

    cout << "The number is: " << number << " and your weight is " << weight << ", your double number is "<< bigFloat << ", and your character is: " << character << endl;

    // ****** INPUT AND OUTPUT of data

    int yourNumber;

    cout << "Enter a number: ";
    cin >> yourNumber; // "cin" is for input and use ">>" not "<<"
    cout << "The number you entered is " << yourNumber;
    return 0;
}
