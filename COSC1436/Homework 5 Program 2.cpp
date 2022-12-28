/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Nayab Tesfa
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand (time(NULL));
    int N1,N2,N3,N4,N5,N6;
    // select N1
    N1 = rand()%50 + 1;
    // select N2
    N2 = rand()%50 + 1;
    while (N2 == N1)
    N2 = rand()%50 + 1;
    // select N3
    N3 = rand()%50 + 1;
    while (N3 == N1 || N3 == N2)
    N3 = rand()%50 + 1;
    // select N4
    N4 = rand()%50 + 1;
    while (N4 == N1 || N4 == N2 || N4 == N3)
    N4 = rand()%50 + 1;
    // select N5
    N5 = rand()%50 + 1;
    while (N5 == N1 || N5 == N2 || N5 == N3 || N5 == N4)
    N5 = rand()%50 + 1;
    //select N6
    N6 = rand()%50 + 1;
    while (N6 == N1 || N6 == N2 || N6 == N3 || N6 == N4 || N6 == N5)
    N6 = rand()%50+1;
    
    // print your lottery quick pick
    cout << "Here's your Lotto Texas quick pick: " << N1 << ", " << N2 << ", " << N3 << ", " << N4 << ", " << N5 << ", " << N6 << endl;
    
    int R = rand()%5 +1;
    if(R == 1)
    cout << "Gambling is a tax on people poor at math! \n";
    else if (R == 2)
    cout << "Lottery winners aren't born. \n";
    else if (R == 3)
    cout << "If you want more luck, take more chances. \n";
    else if (R == 4)
    cout << "Home is where the jackpot is. \n";
    else if (R == 5)
    cout << "Good things take time. \n";
    
    return 0;
}

