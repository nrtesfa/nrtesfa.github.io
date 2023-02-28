/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <conio.h>
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <cctype>

using namespace std;

//function prototypes
void IntroScreen(void);
int Menu(void);
void ASCIIArt(int);

//global variables
string CLS = "\033[2J\033[1;1H";
string Red = "\033[31;1m";
string Green = "\033[32;1m";
string Yellow = "\033[33;1m";
string Blue = "\033[34;1m";
string Purple = "\033[35;1m";
string Cyan = "\033[36;1m";
string White = "\033[37;1m";
string Default = "\033[0m"; // default gray color & reset background to black

//function definitions
void ASCIIArt(int BadGuesses)
{
        if(BadGuesses==6) {
        cout<<
            "                     qccccc-------+      \n"      
            "                   u            |      \n"	
            "                   u            |      \n"		
            "            -======u====-       O		\n"
            "           /       u   /|      \\|/		\n"
            "          /        u  / |       |		\n"
            "         /           /  /      /\\       \n"
            "        /           /  /              \n"
            "       '===========|  /              \n"
            "       |           | /	              \n"
            "       |___________|/                \n"
            "										"
            "			GAME OVER					";
    }

    else if(BadGuesses == 5) {
                 cout<<"#############################################################"<<endl;
	    cout<<"#                    _                                      #"<<endl;  
	    cout<<"#                  -=\\`\\                                    #"<<endl;  
	    cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
	    cout<<"#            -=\\c`~~~~~~~~~~`)                               #"<<endl;  
	    cout<<"#               `~~~~~/ /~~`\\                                #"<<endl;  
	    cout<<"#                 -==/ /                                    #"<<endl;  
	    cout<<"#                   '-'                                     #"<<endl;  
	    cout<<"#                  _  _                                     #"<<endl;  
	    cout<<"#                 ( `   )_                                  #"<<endl;  
	    cout<<"#                (    )    `)                               #"<<endl;  
	    cout<<"#              (_   (_ .  _) _)                             #"<<endl;  
	    cout<<"#                                   _             #"<<endl;  
	    cout<<"#                               (  )           #"<<endl;  
	    cout<<"#             _ .               ( `  ) . )        #"<<endl;  
	    cout<<"#           (  _ )_         (_, _(  ,_)_)      #"<<endl;  
	    cout<<"#         (_  _(_ ,)                                        #"<<endl;  
	    cout<<"#############################################################"<<endl;
    }

    else if(BadGuesses == 4) {
                  cout<<"#############################################################"<<endl;
	    cout<<"#                    _                                      #"<<endl;  
	    cout<<"#                  -=\\`\\                                    #"<<endl;  
	    cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
	    cout<<"#            -=\\c`~~~~~~~~~~`)                               #"<<endl;  
	    cout<<"#               `~~~~~/ /~~`\\                                #"<<endl;  
	    cout<<"#                 -==/ /                                    #"<<endl;  
	    cout<<"#                   '-'                                     #"<<endl;  
	    cout<<"#                  _  _                                     #"<<endl;  
	    cout<<"#                 ( `   )_                                  #"<<endl;  
	    cout<<"#                (    )    `)                               #"<<endl;  
	    cout<<"#              (_   (_ .  _) _)                             #"<<endl;  
	    cout<<"#                                   _             #"<<endl;  
	    cout<<"#                               (  )           #"<<endl;  
	    cout<<"#             _ .               ( `  ) . )        #"<<endl;  
	    cout<<"#           (  _ )_         (_, _(  ,_)_)      #"<<endl;  
	    cout<<"#         (_  _(_ ,)                                        #"<<endl;  
	    cout<<"#############################################################"<<endl;
    }

    else if(BadGuesses == 3) {
                 cout<<"#############################################################"<<endl;
	    cout<<"#                    _                                      #"<<endl;  
	    cout<<"#                  -=\\`\\                                    #"<<endl;  
	    cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
	    cout<<"#            -=\\c`~~~~~~~~~~`)                               #"<<endl;  
	    cout<<"#               `~~~~~/ /~~`\\                                #"<<endl;  
	    cout<<"#                 -==/ /                                    #"<<endl;  
	    cout<<"#                   '-'                                     #"<<endl;  
	    cout<<"#                  _  _                                     #"<<endl;  
	    cout<<"#                 ( `   )_                                  #"<<endl;  
	    cout<<"#                (    )    `)                               #"<<endl;  
	    cout<<"#              (_   (_ .  _) _)                             #"<<endl;  
	    cout<<"#                                       _             #"<<endl;  
	    cout<<"#                                   (  )           #"<<endl;  
	    cout<<"#             _ .                   ( `  ) . )        #"<<endl;  
	    cout<<"#           (  _ )_             (_, _(  ,_)_)      #"<<endl;  
	    cout<<"#         (_  _(_ ,)                                        #"<<endl;  
	    cout<<"#############################################################"<<endl;
    }
    
    else if(BadGuesses == 2) {
                 cout<<"#############################################################"<<endl;
	    cout<<"#                    _                                      #"<<endl;  
	    cout<<"#                  -=\\`\\                                    #"<<endl;  
	    cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
	    cout<<"#            -=\\c`~~~~~~~~~~`)                               #"<<endl;  
	    cout<<"#               `~~~~~/ /~~`\\                                #"<<endl;  
	    cout<<"#                 -==/ /                                    #"<<endl;  
	    cout<<"#                   '-'                                     #"<<endl;  
	    cout<<"#                  _  _                                     #"<<endl;  
	    cout<<"#                 ( `   )_                                  #"<<endl;  
	    cout<<"#                (    )    `)                               #"<<endl;  
	    cout<<"#              (_   (_ .  _) _)                             #"<<endl;  
	    cout<<"#                                           _             #"<<endl;  
	    cout<<"#                                       (  )           #"<<endl;  
	    cout<<"#             _ .                       ( `  ) . )        #"<<endl;  
	    cout<<"#           (  _ )_                 (_, _(  ,_)_)      #"<<endl;  
	    cout<<"#         (_  _(_ ,)                                        #"<<endl;  
	    cout<<"#############################################################"<<endl;
 

    }       
    else if(BadGuesses == 1) {
        cout<<"#############################################################"<<endl;
	    cout<<"#                    _                                      #"<<endl;  
	    cout<<"#                  -=\\`\\                                    #"<<endl;  
	    cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
	    cout<<"#            -=\\c`~~~~~~~~~~`)                               #"<<endl;  
	    cout<<"#               `~~~~~/ /~~`\\                                #"<<endl;  
	    cout<<"#                 -==/ /                                    #"<<endl;  
	    cout<<"#                   '-'                                     #"<<endl;  
	    cout<<"#                  _  _                                     #"<<endl;  
	    cout<<"#                 ( `   )_                                  #"<<endl;  
	    cout<<"#                (    )    `)                               #"<<endl;  
	    cout<<"#              (_   (_ .  _) _)                             #"<<endl;  
	    cout<<"#                                            _             #"<<endl;  
	    cout<<"#                                           (  )           #"<<endl;  
	    cout<<"#             _ .                        ( `  ) . )        #"<<endl;  
	    cout<<"#           (  _ )_                     (_, _(  ,_)_)      #"<<endl;  
	    cout<<"#         (_  _(_ ,)                                        #"<<endl;  
	    cout<<"#############################################################"<<endl;
    }

    else if(BadGuesses == 0){ 
        cout<<"#############################################################"<<endl;
	    cout<<"#                    _                                      #"<<endl;  
	    cout<<"#                  -=\\`\\                                    #"<<endl;  
	    cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
	    cout<<"#            -=\\c`~~~~~~~~~~`)                               #"<<endl;  
	    cout<<"#               `~~~~~/ /~~`\\                                #"<<endl;  
	    cout<<"#                 -==/ /                                    #"<<endl;  
	    cout<<"#                   '-'                                     #"<<endl;  
	    cout<<"#                  _  _                                     #"<<endl;  
	    cout<<"#                 ( `   )_                                  #"<<endl;  
	    cout<<"#                (    )    `)                               #"<<endl;  
	    cout<<"#              (_   (_ .  _) _)                             #"<<endl;  
	    cout<<"#                                             _             #"<<endl;  
	    cout<<"#                                            (  )           #"<<endl;  
	    cout<<"#             _ .                         ( `  ) . )        #"<<endl;  
	    cout<<"#           (  _ )_                      (_, _(  ,_)_)      #"<<endl;  
	    cout<<"#         (_  _(_ ,)                                        #"<<endl;  
	    cout<<"#############################################################"<<endl;
	/*
        cout<<
            "                   qccccc-------+      \n"     
            "                   u            |      \n"	
            "            -======u====-		     	\n"
            "           /       u   /| 				\n"
            "          /        u  / | 				\n"
            "         /           /  /				\n"
            "        /           /  /				\n"
            "       '===========|  /				\n"
            "       |           | /					\n"
            "       |___________|/					\n";*/
    }
}  

void IntroScreen(void)
{
    cout << "Intro Screen" << endl;
    cout << Default <<"  _____                   _" << endl;       
    cout << Default <<" / ____|                 | |   " << endl;   
    cout << Default <<" | (___  _ __   ___  _ __| |_ ___" << endl; 
    cout << Default <<"  \\___ \\| '_ \\ / _ \\| '__| __/ __|" << endl;
    cout << Default <<"  ____) | |_) | (_) | |  | |_\\__ \\" << endl;
    cout << Default <<" |_____/| .__/ \\___/|_|   \\__|/__/" << endl;
    cout << Default <<"        | |" << endl;                      
    cout << Default <<"        |_|" << endl;
    
    cout << "Press <Enter> to begin..." << endl;
    cin.ignore();
}

int Menu(void)
{
    int Number;
    string strNumber;
    bool isNum = true;;
    
    cout << "This is the main menu. \n";
    cout << "Please enter a number \n";
    cout << "(1) Football \n";
    cout << "(2) Basketball \n";
    cout << "(3) Baseball  \n";
    cout << "(4) Hockey \n";
    
    do {
        cin >> strNumber;
        for (int i = 0; i < strNumber.length(); i++) {
            if (!(isdigit(strNumber[i])))
                isNum = false;
        }
        if (isNum == true) {
            Number = stoi(strNumber);
            if (!(Number >= 1 && Number <= 4))
                cout << "Please enter a valid number between 1 and 4" << endl;  
        }
        else
            cout << "Please enter a valid number between 1 and 4" << endl;  
        isNum = true;
    } while (isNum == false || !(Number >= 1 && Number <= 4));
    
    return Number;
}

int main(void)
{
    int length;
    srand(time(NULL));
    
    // Step 1 Intro Screen (do this last)
    IntroScreen();
    
    int MenuChoice = Menu(); 
    
    // Step 2 Select Random Phrase from your theme
    string FootballPhrases[] = {"arizona cardinals","atlanta falcons","baltimore ravens","buffalo bills","carolina panthers","chicago bears","cincinnati bengals","cleveland browns","dallas cowboys","denver broncos","detroit lions","green bay packers","houston texans","indianapolis colts","jacksonville jaguars","kansas city chiefs","las vegas raiders","los angeles chargers","los angeles rams","miami dolphins","minnesota vikings","new england patriots","new orleans saints","new york giants","new york jets","philadelphia eagles","pittsburgh steelers","san francisco niners","seattle seahawks","tampa bay buccaneers","tennessee titans","washington commanders"};
    string BasketballPhrases[] = {"atlanta hawks", "boston celtics","brooklyn nets","charlotte hornets","chicago bulls","cleveland cavaliers","dallas mavericks","denver nuggets","detroit pistons","golden state warriors","houston rockets","indiana pacers","los angeles clippers","los angeles lakers","memphis grizzlies","miami heat","milwaukee bucks","minnesota timberwolves","new orleans pelicans","new york knicks","oklahoma city thunder","orlando magic","philadelphia sixers","phoenix suns","portland trail blazers","sacramento kings","san antonio spurs","toronto raptors","utah jazz","washington wizards"};
    string BaseballPhrases[] = {"arizona diamondbacks", "atlanta braves", "baltimore orioiles", "boston red sox", "chicago white sox","chicago cubs","cincinnati reds","cleveland guardians","colorado rockies","detroit tigers","houston astros","kansas city royals","los angeles angels","los angeles dodgers","miami marlins","milwaukee brewers","minnesota twins","new york mets","new york yankees","oakland athletics","philadelphia phillies","pittsburgh pirates","san diego padres","san francisco giants","seattle mariners","st louis cardinals","tampa bay rays","texas rangers","toronto blue jays","washington nationals"};
    string HockeyPhrases[] = {"anaheim ducks", "arizona coyotes", "boston bruins", "buffalo sabres", "calgary flames", "carolina hurricanes","chicago blackhawks","colorado avalanche","columbus blue jackets","dallas stars","detroit red wings","edmonton oilers","florida panthers","los angeles kings","minnesota wild","montreal canadiens","nashville predators","new jersey devils","new york islanders","new york rangers","ottawa senators","philadelphia flyers","pittsburgh penguins","san jose sharks","seattle kraken","st louis blues","tampa bay lightning","toronto maple leafs","vancouver canucks","vegas golden knights","washington capitals","winnipeg jets"};
    
    string SecretPhrase = "Default";
    
    if (MenuChoice == 1) {
        length = sizeof(FootballPhrases)/sizeof(FootballPhrases[0]);
        string secretFootballPhrase = FootballPhrases[rand()%length];
        SecretPhrase = secretFootballPhrase;
    }
    
    if (MenuChoice == 2) {
        length = sizeof(BasketballPhrases)/sizeof(BasketballPhrases[0]);
        string secretBasketballPhrase = BasketballPhrases[rand()%length];
        SecretPhrase = secretBasketballPhrase;
    }
    
    if (MenuChoice == 3) {
        length = sizeof(BaseballPhrases)/sizeof(BaseballPhrases[0]);
        string secretBaseballPhrase = BaseballPhrases[rand()%length];
        SecretPhrase = secretBaseballPhrase;
    }
    
    if (MenuChoice == 4) {
        length = sizeof(HockeyPhrases)/sizeof(HockeyPhrases[0]);
        string secretHockeyPhrase = HockeyPhrases[rand()%length];
        SecretPhrase = secretHockeyPhrase;
    }
    
    // Step 3 Create GuessPhrase
    string GuessPhrase = SecretPhrase;
    for (int i=0; i < SecretPhrase.size(); i++) {
        if (SecretPhrase[i] == ' ')
            GuessPhrase[i] = ' ';
        else
            GuessPhrase[i] = '.';
    }
    
    //cout << "SecretWord = " << SecretPhrase << endl;     //testing only
    
    // Step 4: Declare Variables
    //  Declare an integer named BadGuesses = 0
    //  Declare a string named Letter
    //  Declare an integer named Location
    int BadGuesses = 0;
    string Letter;
    int Location;
    string LettersRemaining = "abcdefghijklmnopqrstuvwxyz";
    
    // Step 5: Game Loop
    //  Set up a while loop for steps 6 - 10.  
    //  It should loop as long as BadGuesses < 6 and GuessWord != SecretWord.
    //  This is the main loop of the program.  
    //  The game keeps playing as long as you haven't lost (when BadGuesses = 6) 
    //  and you haven't won (when GuessWord = SecretWord).
    
    //ASCIIArt(0);
    while (BadGuesses < 6 && GuessPhrase != SecretPhrase) {
        // Step 6: Display Graphics (ASCII Art) (do this last)
        cout << "BadGuesses = " << BadGuesses << endl;
        ASCIIArt(BadGuesses);
        
        // Step 7: Display Letters Already Guessed (do this step last)
        // LettersRemaining
        cout << "Hitpoints: " << Yellow << 60-BadGuesses*10 << Default << endl;
        cout << "Letters remaining: " << Cyan << LettersRemaining << Default << endl;
        
        // Step 8: Cout the GuessWord variable (the placeholder will all periods)
        // GuessWord
        cout << "Phrase to Guess: " << Purple << GuessPhrase << Default << endl;
        
        // Step 9: Prompt player to enter a letter (their guess) and store it
        //         in the variable Letter.  Add this letter to LettersGuessed.
        //         <User enters a letter>
        do {
            cout << "Enter a letter: ";
            cin >> Letter;
            if (!isalpha(Letter.at(0)))
                cout << "Please enter a valid letter between a and z" << endl;
        } while(!isalpha(Letter.at(0)));
    
        Letter[1]='\0';
        char h = tolower(Letter[0]);
      	Letter[0]=h;
        cout << "Letter = " << Letter << endl;
        
        size_t Found = LettersRemaining.find(Letter,0);
        if (Found != string::npos)
            LettersRemaining.replace(Found, 1, " ");
        
        // Step 10: If Letter is not located in SecretWord (note: use Letter.find( ), increment BadGuesses
        //           Else continue looping and find all occurences of Letter in GuessWord and replace the periods. 
        Found = SecretPhrase.find(Letter,0);
        if (Found != string::npos) {
            do {
                GuessPhrase[Found] = Letter[0];
                Found = SecretPhrase.find(Letter,Found+1);
            } while (Found != string::npos);
        }
        else
            BadGuesses++;
    } // end game loop 
    
    // winning and losing screens
    if (GuessPhrase == SecretPhrase) {//  player wins 
        cout << CLS;
        {
cout<<"           /  \\~~~/  \\ " <<endl;   
cout<<"     ,----(     ..    ) " <<endl;
cout<<"    /      \\__     __/   " <<endl;
cout<<"   /|         (\\  |( " <<endl;
cout<<"  ^ \\   /___\\  /\\ |   hjw " <<endl;
cout<<"     |__|   |__|-\"    `97 " <<endl;
cout<<endl<<"You Win";
    return 0;
}
       
    }
    else {
        cout << CLS;
        {
cout<<"           /  \\~~~/  \\ " <<endl;   
cout<<"     ,----(     ..    ) " <<endl;
cout<<"    /      \\__     __/   " <<endl;
cout<<"   /|         (\\  |( " <<endl;
cout<<"  ^ \\   /___\\  /\\ |   hjw " <<endl;
cout<<"     |__|   |__|-\"    `97 " <<endl;
cout<<endl<<"You Lose";

    return 0;
}
    }

    return 0;
}

