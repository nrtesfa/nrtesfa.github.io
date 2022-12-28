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
    int Pennies, Nickels, Dimes, Quarters;
    cout << "How many pennies do you have? ";
    cin >> Pennies;
    cout << "How many nickels do you have? ";
    cin >> Nickels;
    cout << "How many dimes do you have? ";
    cin >> Dimes;
    cout << "How many quarters do you have? ";
    cin >> Quarters;
    float DollarValue = (Pennies * 0.01) + (Nickels * 0.05) + (Dimes * 0.10) + (Quarters * 0.25);
    cout << " The dollar value is " << DollarValue << endl;
    if (DollarValue < 0.5)
    cout << "You need to search for some pennies." << endl;
    else if (DollarValue >= 0.5 && DollarValue < 2 )
    cout << "You can barely buy a soda." << endl;
    else if (DollarValue >= 2 && DollarValue < 5 )
    cout << "You can eat at McDonald's!"<< endl;
    else if (DollarValue >= 5 )
    cout << "Those coins must be heavy."<< endl;
     
  char YN;  
  cout << "Would you like for me to give you this amount in fewest possible coins? Y/N"<<endl;
  cin>>YN;
  
  if (YN=='N' || YN=='n') { cout<<"Okay. Take care.";}
  
  else if  (YN == 'Y' || YN=='y')
    {
  		int QDNP[4]= {0,0,0,0};
      	int  a= 100*(DollarValue); 
      	
  		int coins[4]= {25,10,5,1};
  		
      	for(int i(0); i<4;i++) { QDNP[i] = a/coins[i]; a%=coins[i]; }
      	
      	cout<<"I can give you $"<<DollarValue<<" in:\n "<< QDNP[0] << " quarters\n"<< QDNP[1]<<" dimes\n"<< QDNP[2] << "nickels\n"<< QDNP[3] << " pennies\n" <<endl;
    }
    return 0;
}
