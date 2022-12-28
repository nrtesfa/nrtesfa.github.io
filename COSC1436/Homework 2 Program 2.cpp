/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float First, Second, Third;
    
    cout << "Enter the first number: ";
    cin >> First;
    cout << "Enter the second number: ";
    cin >> Second;
    cout << "Enter the third number: ";
    cin >> Third;
    
    cout << "The sum of the numbers is " << First + Second + Third << endl;
    cout << "The product of the numbers is " << First * Second * Third <<endl;

    return 0;
}