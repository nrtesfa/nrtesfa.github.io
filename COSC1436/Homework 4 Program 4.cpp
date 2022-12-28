/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Nayab Tesfa
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;


int main()

{
    int count(0); 
    srand(time(NULL));
    int num = rand()%100 + 1;
    
    int guess (-1);

    while (guess!=num)

    {
    
    count++;
    cout<<"What's your guess?  :";
    cin>>guess;
    int diff= fabs(guess-num); 
    
if(guess ==     num) cout<<"That's it!! It took you "<<count<<" guesses."; 
    
    else
{ 
if( diff<=10 ) cout << "That's a little low/high"<<endl;
    else if (diff<=20) cout <<"That's low/high"<<endl;
    else if (diff<=30) cout <<"That's way too low/high"<<endl;
    else if (diff<=80) cout << "You're not even in the ballpark."<<endl<<endl;
   }
    }
}

