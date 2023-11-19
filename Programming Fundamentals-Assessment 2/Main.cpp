#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
using namespace std;
#include "Main.h"
#include <windows.h>
#include "Main Menu.h"



void main()
{
    // Starts the main menu function holds some ascii art
    Mainmenu();
    
    // Clears the console to progress
    clearConsole();

    //Dave Starts his journey
    cout << R"( 
 |----------------------------------------------------------------------------------------------------------------------------------------------------|
 |                                                                                                                                                    |
 |                                                                                                                                                    |
 |                                                                                                                                                    |
 |                                                                                                                                                    |
 |                                                                                                                               @@@@@@@@             |
 |                                                                                                                             @@        @@           |
 |                                                                                                                             @           @          |
 |                                                                                                                             @@@@@@@@@@@@@@@@@      |
 |                                                                                                                           @@           @           |
 |                                                                                                                         @@             @           |
 |                                                                                                                         @@             @           |
 |                                                                                                                         @@             @           |
 |                                                                                                                         @@             @           |
 |                                                                                                                          @@           @            |
 |                                                                                                                            @@@@@@@@@@@             |
 |                                                                                                                                @@                  |
 |                                                                                                                                @@                  |
 |                                                                                                                                @@                  |
 |                                                                                                                               @@@@                 |
 |                                                                                                                           @@@@@@@@@@               |
 |                                                                                                                         @@@@@@@@@@@@@              |
 |                                                                                                                       @@@      @@  @@@@            |
 |                                                                                                                      @@        @@     @@@          |
 |                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                            @@        @@       @@@        |
 |                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                            @@@@      @@       @@@        |
 |                                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                        @@@      @@                  |
 |                                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                                  @@                  |
 |            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                                @@@@                 |
 |            @@@                                                         @@@                                                  @@@@@@@@@              |
 |            @@@                                                         @@@                                                 @@@     @@              |
 |            @@@                                                         @@@                                               @@@@       @@             | 
 |            @@@                                                         @@@                                              @@@         @@@@           |  
 |                                                                                                                        @@            @@@           |
 |----------------------------------------------------------------------------------------------------------------------------------------------------|
)" << endl;
    // For the slowtype function to work it needs the text to be in a string varible, rather then just couting it out to console
    string Text1 = "It was a day like any other, Dave got out of bed and put on his hat.";

        slowType(Text1, delayMilliseconds);
}



