/*
    cpp file to add functionility to the fucntions in functions.h
*/

#include<iostream>
#include <time.h>
#include "functions.h"

using namespace std;

int cpuPlay()
{
    srand(time(NULL));

    int cpuChoice = (rand() % 3) + 1;

    return cpuChoice;
}
void beginGame(string username)//the fucntion that does the actual game functionallity
{
    int wins = 0;
    int loses = 0;
    int ties = 0;
    bool again = true;
    char againAns;
    int usersPlay;
    cout << "The game is going to start soon." << endl;
    cout << "The rules are you will be given 3 choies to choose from." << endl;
    cout << "Rock = 1, Paper = 2, Scissors = 3." << endl;
    cout << "Please input a number that corrisponds with the correct choice." << endl;
    cout << "Ok the game will begin now." << endl;

    while(again)
    {
        //rules output to the user
        
        cout << "Rock, Paper, Scissors 1... 2... 3..." << endl;
        cin >> usersPlay;
        int cpuChoice = cpuPlay();

        if(cpuChoice == usersPlay)//checks for tie
        {
            cout << username << " choose " << usersPlay << endl;
            cout << "CPU choose " << cpuChoice << endl;
            cout << "It is a tie" << endl;
            ties++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else if(cpuChoice == 1 && usersPlay == 2)//checks for cpu rock vs user paper
        {
            cout << username << " choose Paper. " << endl;
            cout << "CPU choose Rock. " << endl;
            cout << username << " wins" << endl;
            wins++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else if(cpuChoice == 1 && usersPlay == 3)//checks for cpu rock vs user scissors
        {
            cout << username << " choose Scissors. " << endl;
            cout << "CPU choose Rock. " << endl;
            cout << username << " loses " << endl;
            loses++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else if(cpuChoice == 2 && usersPlay == 1)//checks for cpu paper vs user rock
        {
            cout << username << " choose Rock. " << endl;
            cout << "CPU choose Paper. " << endl;
            cout << username << " loses " << endl;
            loses++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else if(cpuChoice == 2 && usersPlay == 2)//checks for cpu paper vs user scissors
        {
            cout << username << " choose Scissors. " << endl;
            cout << "CPU choose Paper. " << endl;
            cout << username << " wins " << endl;
            wins++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else if(cpuChoice == 3 && usersPlay == 2)//checks for cpu scissors vs user paper
        {
            cout << username << " choose Paper. " << endl;
            cout << "CPU choose Scissors. " << endl;
            cout << username << " loses " << endl;
            loses++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else if(cpuChoice == 3 && usersPlay == 1)//checks for cpu scissors vs user rock
        {
            cout << username << " choose Rock. " << endl;
            cout << "CPU choose Scissors. " << endl;
            cout << username << " wins " << endl;
            wins++;
            cout << "Want to play again y/n" << endl;//checks if want to play again
            cin >> againAns;
            if (againAns == 'y')
            {
                again = true;
            }
            else 
            {
                again = false;
            }
        }
        else 
        {
            cout << "error" << endl;
        }
    }
    cout << username << " won " << wins << " times." << endl;
    cout << username << " lost " << loses << " times." << endl;
    cout << username << " tied " << ties << " times." << endl;

    return; 
}

