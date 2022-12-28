/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int Donuts;
    int dozens, singles = 0;
    
    cout << "How many donuts will you eat? ";
    cin >> Donuts;
    
    if (Donuts < 12) {
        singles = Donuts;
        dozens = 0;
        if (Donuts == 1)
            cout << "This is " << singles << " single donut." << endl;
        else
            cout << "This is " << singles << " single donuts." << endl;
    }
    else {
        dozens = Donuts / 12;
        singles = Donuts - (dozens * 12);
        if (dozens == 1) 
            cout << "This is " << dozens << " dozen plus ";
        else
            cout << "This is " << dozens << " dozens plus ";
            
        if (singles == 0 || singles == 1)
            cout << singles << " single donut." << endl;
        else
            cout << singles << " single donuts." << endl;
    }
    
    if (Donuts == 0)
        cout << "On a diet or something?" << endl;
    else if (Donuts >= 1 && Donuts <= 2)
        cout << "You don't seem very hungry today" << endl;
    else if (Donuts >= 3 && Donuts <= 6)
        cout << "Just an appetizer for you?" << endl;
    else if (Donuts >= 7 && Donuts <= 9)
        cout << "What's for dessert...cinnamon rolls?" << endl;
    else if (Donuts >= 10 && Donuts <=12)
        cout << "You're a donut freak!";
    else if (Donuts > 12)
        cout << "Mmmmmmm......donuts!";
    
    cout << endl << endl;

    return 0;
}
