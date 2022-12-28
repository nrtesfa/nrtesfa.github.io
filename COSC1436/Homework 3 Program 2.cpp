/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string message, spaces = "", line = "";
    int msgLength;
    
    cout << "Enter a message:" << endl;
    getline(cin, message);
    
    msgLength = (message.length()) / 2;
    for (int i = 0; i < (40-msgLength-1); i++)
        spaces += " ";
    
    msgLength = message.length();
    for (int i = 0; i < msgLength; i++)
        line += "-";
        
    cout << spaces << "-" << line << "-" << endl;
    cout << spaces << "|" << message << "|" << endl;
    cout << spaces << "-" << line << "-" << endl;

    return 0;
}
