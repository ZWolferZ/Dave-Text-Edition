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
    Mainmenu();
    
    clearConsole();

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

    string Text1 = "It was a day like any other, Dave got out of bed and put on his hat.";

        slowType(Text1, delayMilliseconds);
}



