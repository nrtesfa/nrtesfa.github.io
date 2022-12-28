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
    cout<<"Addition & Multiplication Table \n";
    int Begin, End;
    cout << "Begin table at what number? ";
    cin >> Begin;
    cout << "End table at what number? ";
    cin >> End;
       for (int i(0); i< End-Begin+1; i++)
    {
     cout <<"\t"<< Begin << "+" << Begin+i << "=" << Begin+Begin+i<<"\t"<< Begin << "x" << Begin+i << "=" << Begin*(Begin+i)<<endl;
    }
    return 0;
}
