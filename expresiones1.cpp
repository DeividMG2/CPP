#include <iostream>
using namespace std;

//I´m gonna create a program who calculate a/b +1

int main(){

    float a,b,result=0,c,d;

    cout << "Enter your A number: "; cin >> a;
    cout << "\nEnter your B number: ";cin >> b;

    result = (a/b)+1; //It´s not mandatory in this case the use of "()"
    cout.precision(2); //This is for return only 2 (in this case) decimals of the entire number
    cout << "The result is: " << result;

    //Now I'll create this formula (a+b)/(c+d)
    cout << "FORUMA 1 READY, FORMULA 2 IS JUST STARTING\n" << endl;
    result = 0;
    cout << "\n\nEnter your A number: "; cin >> a;
    cout << "\nEnter your B number: ";cin >> b;
    cout << "\nEnter your C number: "; cin >> c;
    cout << "\nEnter your D number: ";cin >> d;

    result = (a+b)/(c+d); //It´s not mandatory in this case the use of "()"
    cout.precision(2); //This is for return only 2 (in this case) decimals of the entire number
    cout << "The result is: " << result;

    return 0;
}
