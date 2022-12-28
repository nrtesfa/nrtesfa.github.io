/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    const float Pi = 3.1416;
    cout << "This calculates the area of a circle, volume of a sphere, and surface area of a sphere.\n";
    cout << "Enter a radius in inches: ";
    float Radius;
    cin >> Radius;
    cout << "Area of a circle is " << Pi * Radius * Radius << endl << "inches";
    cout << " Volume of a sphere is " << 4.0/3.0 * Pi * Radius * Radius * Radius << endl << "inches";
    cout << " Surface area of a sphere is " << 4.0 * Pi * Radius * Radius << endl << "inches";
    
    return 0;
}