/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Nayab Tesfa HW#6 Program 1
#include <iomanip>

using namespace std;
#include "geometry.h"
int main()
{
    // set flags for cout
    cout << fixed << showpoint << setprecision(2);
    
    int Apples, Pizzas, Donuts, Cones;
    cout << "How many apples will you eat? ";
    cin >> Apples;
    cout << "How many pizzas will you eat? ";
    cin >> Pizzas;
    cout << "How many donuts will you eat? ";
    cin >> Donuts;
    cout << "How many ice cream cones will you eat? ";
    cin >> Cones;
    
    float TotalVolume = Apples * geometry::VolSphere(1.5) * Pizzas * geometry::VolCylinder(6, 0.5) * 
        Donuts * geometry::VolDonut(2, 1.5) * Cones * (geometry::VolCone(1, 5) + geometry::VolSphere(1.25));
    
    cout << "Volume of junk food in cubic inches = " << TotalVolume << endl; 

    return 0;
}
