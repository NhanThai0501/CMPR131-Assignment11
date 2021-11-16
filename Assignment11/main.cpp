// main.cpp

// Team: Anthony, An, Van, Vincent, Nhan
// Chapter 11: 
// 11/18/2021

#include <iostream>
#include <ctime>
#include <string>
#include "optionOne.h"
#include "optionTwo.h"
#include "optionThree.h"
#include "input.h"
#include "menus.h"


void mainMenu(void);
void programOne(void);
void programTwo(void);
void programThree(void);

using namespace std;

int main(void)
{
    mainMenu();
    return 0;
}

//PreCondition: NA
//PostCondition: redirects user to different menus based on their choice
void mainMenu(void)
{
    do
    {
        clearScreen();

        displayMainMenu();

        int userInput = inputInteger("\t\tOption: ", 0, 3);
        switch (userInput)
        {
        case 0: clearScreen(); return;
        case 1: clearScreen(); programOne(); break;
        case 2: clearScreen(); programTwo(); break;
        case 3: clearScreen(); programThree(); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..3." << endl;
        }

    } while (true);
}

//PreCondition: NA
//PostCondition: 
void programOne(void)
{
    cout << "\n\tVectors are sequence containers representing arrays that can change in size.\n";
    do
    {
        clearScreen();
        displayOptionOneMenu();
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': /*function here*/ break;
        case 'b': case 'B': /*function here*/ break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("\n\t\tPress enter to continue...");
        }
    } while (true);
}


//PreCondition: NA
//PostCondition: 
void programTwo(void)
{
    do
    {
        clearScreen();
        displayOptionTwoMenu();
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': /*function here*/ break;
        case 'b': case 'B': /*function here*/ break;
        case 'c': case 'C': /*function here*/ break;
        case 'd': case 'D': /*function here*/ break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C', or 'D'" << endl;
            pause("\n\t\tPress enter to continue...");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: display the contents in option 3
void programThree(void)
{
    optionThree();
}
