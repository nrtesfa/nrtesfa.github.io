/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Nayab Tesfa
#include <iostream>

using namespace std;

int main()
{
    int Choice = 0;
    while (Choice != 4)
{
    cout << "------------------------------- \n";
    cout << "1 = Convert Fahrenheit to Celsius \n";
    cout << "2 = Convert Miles to Kilometers \n";
    cout << "3 = Convert Gallons to Liters \n";
    cout << "4 = Exit \n";
    cout << "Enter your choice: ";
    cin >> Choice;
    if (Choice < 1 || Choice > 4)
    cout << " Please enter 1 - 4 \n";
    if (Choice == 1)
    {
        cout << "Enter the number of degrees in Fahrenheit: ";
        float Fahrenheit;
        cin >> Fahrenheit;
        cout << "This is " << (Fahrenheit - 32) *.5556 << " Celsius " << endl;
    }
    if (Choice == 2)
    {
        cout << "Enter the number of miles: ";
        float Miles;
        cin >> Miles;
        cout << "This is " << Miles * 1.609344 << " Kilometers " << endl;
    }
        if (Choice == 3)
    {
        cout << "Enter the number of gallons: ";
        float Gallons;
        cin >> Gallons;
        cout << "This is " << Gallons * 3.78541 << " Liters " << endl;
    }
}
return 0;
}
    

