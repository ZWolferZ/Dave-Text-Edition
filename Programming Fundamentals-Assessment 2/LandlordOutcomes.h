#pragma once
#include <iostream>
#include "Main.h"
#include <windows.h>

using namespace std;

// Colour Handle Grabber
HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);


void LandlordSTRENGTH()
{
		cout << R"(|------------------------------------------------------------------------------------------------------|                                                                                                      
|                                         @@@@                                                         |
|                                        @@@@@@@@@@                                                    |
|                                        @@@@@@@@@@@@@@@                                               | 
|                                       @@@@@@@@@@@@@@@@@@@@@@                                         |  
|                                      @@@@@@@@@@@@@@@@@@@@@@@@                                        |  
|           @@@@@@                     @@@@@@@@@@@@@@@@@@@@@@@                                         | 
|          @@@@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@                                         | 
|          @@@@@@@@@@@@              @@@@@@@@@@@@@@@@@@@@@@@@                                          | 
|         @@     @@                  @@@@@@@@@@@@@@@@@@@@@@@                                           | 
|        @        @@                @@@@@@@@@@@@@@@@@@@@@@@@                                           | 
|        @        @@               @@@@@@@@@@@@@@@@@@@@@@@@                                            | 
|         @@     @@                @@@@@@@@@@@@@@@@@@@@@@@                                             | 
|          @@@@@@                 @@@@@@@@@@@@@@@@@@@@@@@@                                 @@          | 
|            @@                  @@@@@@@@@@@@@@@@@@@@@@@@                               @@@@@@         |
|            @@     @@           @@@@@@@@@@@@@@@@@@@@@@@                             @@@@@@@@@@        |
|            @@@@@@@@@          @@@@@@@@@@@@@@@@@@@@@@@                           @@@@@@@@@@@@@@       |
|            @@     @@         @@@@@@@@@@@@@@@@@@@@@@@@                       @@@@@@@@@@@@@@@@@@@      |
|            @@                @@@@@@@@@@@@@@@@@@@@@@@                      @@@@@@@@@@@@@@@@@@@@@@@    | 
|            @@               @@@@@@@@@@@@@@@@@@@@@@@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@   |
|            @@              @@@@@@@@@@@@@@@@@@@@@@@                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  |
|            @@             @@@@@@@@@@@@@@@@@@@@@@@@              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    |
|           @@@@            @@@@@@@@@@@@@@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       |
|         @@   @@@@        @@@@@@@@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           |
|         @@     @@@      @@@@@@@@@@@@@@@@@@@@@@@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@              |
|                         @@@@@@@@@@@@@@@@@@@@@@@    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                 |
|                          @@@@@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                    |
|                                @@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                       |
|                                    @@@@@@@@@@    @@@@@@@@@@@@@@@@@@@@@@@@@@                          |
|                                          @@@      @@@@@@@@@@@@@@@@@@@@@                              |
|                                                    @@@@@@@@@@@@@@@@@                                 |
|                                                     @@@@@@@@@@@@@                                    |
|                                                      @@@@@@@@@                                       |
|                                                        @@@@                                          |
|------------------------------------------------------------------------------------------------------|)" << '\n';
		string Text1 ="Dave, like a mad-man,";
		string Text2 = "kicked his door down and crushed the landlord under it!";
		string Text3 = R"("No more rent for me!")";
		string text4 = " - Dave remarked, strongly";
		cout << '\n';
        slowType(Text1, delayMilliseconds);
		cout << '\n';
		slowType(Text2, delayMilliseconds);
		cout << '\n';
		cout << '\n';
		SetConsoleTextAttribute(hc, 4);
		slowType(Text3, slowdelayMilliseconds);
		SetConsoleTextAttribute(hc, 7);
		slowType(text4, delayMilliseconds);
		Sleep(2500);

		//Endl Line to clear buffer
		cout << endl;

		clearConsole();

}
void LandlordCHARISMA()
{
	cout << R"(|------------------------------------------------------------------|                                                                       
|                                              @@@@@@@@@           |     
|                                           @@@@@@@@@@@@@@@        |     
|                                         @@@@@@@      @@@@@@      |     
|              @@@@@@@@@@@               @@@@@@@        @@@@@@     |     
|             @@@@@@@@@@@@@@             @@@               @@@     |     
|             @@@@@@@@@@@@@@            @@@    @@@@   @@@   @@@    |     
|             @@@@@@@@@@@@@@@@@@@@@    @@@     @@@@   @@@@  @@@@   |     
|           @@          @@             @@@     @@     @@    @@@@   |     
|         @@              @@           @@@                  @@@@   |     
|         @@              @@           @@@                  @@@@   |     
|         @@              @@           @@@                  @@@@   |     
|         @@              @@           @@@@                 @@@@   |     
|         @@@@          @@@@            @@@@@               @@@@   |     
|           @@          @@               @@@@@           @@@@@@    |     
|             @@@@@@@@@@                   @@@@@@@@@@@@@@@@@@      |     
|                 @@                         @@@@@@@@@@@@@         |     
|                 @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|           @@@@@@@@@@@@@@                       @@@@@             |     
|         @@@@    @@  @@@@                       @@@@@             |     
|         @@@@    @@                             @@@@@             |     
|           @@@@  @@                             @@@@@             |     
|           @@@@  @@                             @@@@@             |     
|           @@@@  @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|                 @@                             @@@@@             |     
|             @@@@@@@@                          @@@@@@             |     
|           @@@@    @@@@@                      @@@@ @@@            |     
|           @@      @@@@@@                   @@@@@  @@@@@          |    
|           @@@@                            @@@@@   @@@@@@         | 
|                                          @@@@@@   @@@@@@         |  
|                                          @@@@@@   @@@@@@         |   
|------------------------------------------------------------------|)" << '\n';
	string Text1 = "Dave, like a normal human,";
	string Text2 = "discussed his rent issues with his landlord";
	string Text3 = R"("Can I get a extension on my rent this month, Mr Weightman?")";
	string text4 = " - Dave remarked, charismatically";
	cout << '\n';
	slowType(Text1, delayMilliseconds);
	cout << '\n';
	slowType(Text2, delayMilliseconds);
	cout << '\n';
	cout << '\n';
	SetConsoleTextAttribute(hc, 2);
	slowType(Text3, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text4, delayMilliseconds);
	cout << '\n';
	cout << '\n';
	string Text5 = "Your lucky I like you, david";
	string text6 = " - the landlord interposed, charismatically";
	SetConsoleTextAttribute(hc, 12);
	slowType(Text5, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text6, delayMilliseconds);
	Sleep(2500);
	
	//Endl Line to clear buffer
	cout << endl;
	
	clearConsole();
}
	
	
	
void LandlordSPEED()
{
	cout << R"()" << '\n';
}

