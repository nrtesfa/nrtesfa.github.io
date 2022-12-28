/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Nayab Tesfa
#include <unordered_map>
#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    ifstream inputFile;

    double sum = 0,
           total = 0,
           average,
           number;
    unordered_map <double,int> frequency;
    // 1. Open file
    inputFile.open("lottotexas.txt");

    if (inputFile.fail())
    {
        cout << "Error opening the file." << endl;
    }
    else 
    {
        // Valid
        // 2. Process file (eof = end of file)
        while(inputFile >> number)
        {
            if(frequency.find(number)== frequency.end()){
                frequency[number]=1;
            } else{
                frequency[number]++;
            }
            sum += number;
            total++;

        }
        average = sum / total;
        cout << "Total numbers: " << total << endl;
        cout << "Sum of these numbers: " << sum << endl;
        cout << "Average of these numbers: " << average << endl; 
        for(auto entry: frequency){
            cout << "Frequency of the number " << entry.first << ": " << entry.second << endl;
        }
    }
    // 3. Close file
    inputFile.close();
    cout << "File closed. Program Ended." << endl;

    return 0;
}
