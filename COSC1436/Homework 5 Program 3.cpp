/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Nayab Tesfa
#include <iostream>

using namespace std;
bool isPalindrome(string Sentence)
{
    string a;
    for (int i=0; i<Sentence.size(); i++){
      if(isalnum(Sentence[i])){
          a+= tolower(Sentence[i]);
      }  
    }
    string Reverse;
    for (int i=a.size()-1; i>=0; i--)
    {
        Reverse += a[i];
    }
    if(a == Reverse){
        return true;
    }
        return false;
}
int main()
{
    cout << "This program is used to detect a palindrome. \n";
    cout << "Please enter a word or sentence: ";
    string Sentence, Reverse;
    getline(cin,Sentence);
    for (int i=Sentence.size()-1; i>=0; i--)
    {
        Reverse += Sentence[i];
    }
    cout << "Your sentence in reverse: " << Reverse << endl;
    
    if(isPalindrome(Sentence))
    {
        cout << "This sentence is a palindrome.";
    }
    else 
    {
        cout << "This sentence is not a palindrome.";
    }
    
    return 0;
}


