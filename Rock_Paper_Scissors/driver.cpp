/*
    Author: Garrett Mastin
    Last Date Edited: 11/8/2022
    Purpose: To make a game of rock paper scissors
*/

#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
    int choice;//users choice 
    int start;//users choice to play or not
    string username;//users username in the game
    cout << "Would you like to play rock paper scissors?" << endl;//asks the user if they want to play
    cout << "Choices:\n1. Play\n2. End program." << endl;//shows user the possible choices 
    cin >> choice;//gets the users answer and puts it into the choice varbible

    switch (choice)
    {
    case 1:
        cout << "You choose to play the game." << endl;
        cout << "What would you like your name in this game to be?" << endl;
        cin >> username;//gets username

        cout << "Are you ready to play?\nChoices:\n1. ready\n2. Not ready(will end program)" << endl;//checking to see if the user is ready
        cin >> start;
        if (start == 1)
        {
            beginGame(username);//starts game
            break;
        }
        else if(start == 2)
        {
            break;
        }
        else
        {
            cout << "invaild input." << endl;//checks if they input a choice that is vaild 
            break;
        }

        break;
    
    case 2:
        cout << "Ending the program." << endl;//ends program
        break;

    default:
        cout << "You choose nothing." << endl;//if they dont input anything and somehow it goes to this(this will never happen)
        break;
    }

    return 0;
}