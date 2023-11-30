// Landlord Header file holds all the landlord-outcome functions 
#pragma once
#include <iostream>
#include "Main.h"
#include <windows.h>

using namespace std;

// Colour Handle Grabber
HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);

#pragma region Landlord Stength
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
#pragma endregion

#pragma region Landlord Charisma

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
	string Text3 = R"("Can I get a extension on my rent this month, Mr Weightman?")"; // CRAIG REFERENCE
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
	string text6 = " - the landlord interposed";
	SetConsoleTextAttribute(hc, 12);
	slowType(Text5, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text6, delayMilliseconds);
	Sleep(2500);
	
	//Endl Line to clear buffer
	cout << endl;
	
	clearConsole();
}
	
	#pragma endregion

#pragma region Landlord Speed
	
void LandlordSPEED()
{
	cout << R"(|---------------------------------------------------------------------------|                                                                           
|            @@@@@@@@@@@                                                    |
|         @@@@@@@@@@@@@@@@                                                  | 
|       @@@@@@@       @@@@@@                             @@@@@@@@@@         | 
|      @@@@@@@          @@@@@                          @@@@@@@@@@@@@@       |
|     @@@@                @@@@                         @@@@@@@@@@@@@@       |
|     @@@@   @@@@@  @@@@   @@@@                        @@@@@@@@@@@@@@@@@@@@ | 
|     @@@    @@@    @@@    @@@@                        @@@@@@@@@@@@@@@@@@@@ |
|     @@@                  @@@@                      @@@         @@@        |
|     @@@                  @@@@                    @@@             @@       |
|     @@@                  @@@@                    @@@             @@       |  
|     @@@@                 @@@@                    @@@             @@       |
|     @@@@@                @@@@                    @@@            @@        |
|      @@@@@              @@@@                       @@@         @@         |
|        @@@@@        @@@@@@                           @@@@@@@@@@@          |
|           @@@@@@@@@@@@                                   @@@              |
|               @@@@                                       @@@              |
|               @@@@                                       @@@              |
|               @@@@                                       @@@              |
|               @@@@                                 @@@@@@@@@@@@@@         |
|               @@@@                               @@@@@@@@@@@@@@@@         |
|               @@@@                               @@@@@   @@@ @@@@         |
|               @@@@                               @@@@@@  @@@              |
|               @@@@                                 @@@@  @@@              |
|               @@@@                                 @@@@  @@@              |
|               @@@@                                       @@@              |
|               @@@@                                       @@@              |
|               @@@@                                       @@@              |
|               @@@@                                       @@@              |
|              @@@@@@                                      @@@              |
|             @@@@@@@@                                 @@@@@@@@             |
|            @@@@@@@@@@                              @@@@    @@@@@          |
|          @@@@@@ @@@@@@                            @@@     @@@@@@          |
|          @@@@@@ @@@@@@@                            @@@                    |
|---------------------------------------------------------------------------|)" << '\n';
	string Text1 = "Dave, like the flash,";
	string Text2 = "ran away from his problems";
	string Text3 = R"("I'll FIND YOU DAVE, YOU CANT RUN FOREVER")";
	string text4 = " - The landlord Boomed, loudly";
	cout << '\n';
	slowType(Text1, delayMilliseconds);
	cout << '\n';
	slowType(Text2, delayMilliseconds);
	cout << '\n';
	cout << '\n';
	SetConsoleTextAttribute(hc, 12);
	slowType(Text3, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text4, delayMilliseconds);
	cout << '\n';
	cout << '\n';

	Sleep(2500);

	//Endl Line to clear buffer
	cout << endl;

	clearConsole();
}

#pragma endregion

#pragma region Landlord Fail
void LandlordFAIL()
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
	string Text1 = "Dave, tried to do his action but FAILED,";
	string Text2 = "the landlord stood in his way!";
	string Text3 = R"("Stop right there dave!")";
	string text4 = " - The landlord spoke, forcefully";
	cout << '\n';
	slowType(Text1, delayMilliseconds);
	cout << '\n';
	slowType(Text2, delayMilliseconds);
	cout << '\n';
	cout << '\n';
	SetConsoleTextAttribute(hc, 12);
	slowType(Text3, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text4, delayMilliseconds);
	cout << '\n';
	cout << '\n';
	Sleep(2500);
	clearConsole();
	//Dave failed to do his action so he must do a calculation to get out of this situation, 
	cout << R"(
|------------------------------------------------------|
|             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     |        
|             @    @@@@@@@@@@@@@@@@@@@@@@@@@@    @     |        
|             @  @@                          @@  @     |        
|             @  @@                           @  @     |        
|             @  @@                           @  @     |        
|             @  @@                           @  @     |        
|             @  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @     |        
|             @                                  @     |        
|             @    @@@@@@@@@@@@@@@@@@@@@@@@@@    @     |        
|             @  @@                          @@  @     |        
|             @  @@ @@@@@ @@@@@@ @@@@@ @@@@@@ @  @     |        
|             @  @@ @  @@ @@  @@ @   @ @@  @@ @  @     |        
|             @  @@ @@@@@ @@@@@  @@@@@  @@@@  @  @     |        
|             @  @@ @@@@   @@@@   @@@   @@@@  @  @     |        
|             @  @@ @  @@ @@  @@ @  @@ @@  @@ @  @     |        
|             @  @@ @@ @@ @@  @@ @@ @@ @@  @@ @  @     |        
|             @  @@                           @  @     |        
|             @  @@ @@@@@ @@@@@  @@@@@ @@@@@@ @  @     |        
|             @  @@ @  @@ @@  @@ @   @ @@  @@ @  @     |        
|             @  @@ @@@@@ @@@@@  @@@@@ @@@@@@ @  @     |        
|             @  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @     |        
|             @                                  @     |        
|             @                                  @     |        
|             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     |
|------------------------------------------------------|
)" << '\n';

	string text5 = R"("You owe me the distance between vector2 points (4,6) and points (19,10))";
	string text6 = " - The landlord exclaimed";
	SetConsoleTextAttribute(hc, 12);
	slowType(text5, delayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text6, delayMilliseconds);
	cout << '\n';
	cout << '\n';
	string text7 = "Dave brought out his handy vector2 distance calculator,";

	string text8 = "to work out his rent from the vectors ";
	slowType(text7, delayMilliseconds);
	cout << '\n';
	slowType(text8, delayMilliseconds);
	bool correct = false;
	Sleep(2000);
	cout << endl;
	cout << endl;
	//Variables for the calculation
	float answer = 0;
	

	const float X2 = 19.0;
    const float X1 = 4.0;
    const float Y2 = 10.0;
    const float Y1 = 6.0;

	//While loop to check if the answer is correct
while (correct == false)
{
    cout << endl;

    answer = Vector2Calculator();

	// This problem was so annoying to solve, I ended up on stack overflow for a solution, it turns out i needed a tolerance and some constants to make it work.

    const double expectedDistance = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
	const double tolerance = 1e-6;
	
	//Checks the for the answer againts the expected distance using the tolerance

	if (abs(answer - expectedDistance) < tolerance)
	{
		Sleep(1000);
		correct = true;
	}
    else
    {
        cout << endl;
        SetConsoleTextAttribute(hc, 12);
        string errorMessage = R"("Wrong answer Dave!, try again...")";
        slowType(errorMessage, slowdelayMilliseconds);
        SetConsoleTextAttribute(hc, 7);
    }
}

	clearConsole();

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
	cout << '\n';


	string text10 = R"("You got lucky this time dave,")";
	string text11 = R"("now get out of my sight")";
	SetConsoleTextAttribute(hc, 12);
	slowType(text10, slowdelayMilliseconds);
	cout << '\n';
	slowType(text11, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);

	Sleep(2500);
	clearConsole();

}

#pragma endregion

#pragma region Landlord Fail2
void LandlordFAIL2()
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

	cout << '\n';

string text1 = "I dont know how you would of known that dave,";
string text2 = "But I dont care anyway.";
string text3 = "Now get out of my sight";
SetConsoleTextAttribute(hc, 12);
slowType(text1, delayMilliseconds);
cout << '\n';
slowType(text2, delayMilliseconds);
cout << '\n';
cout << '\n';
slowType(text3, slowdelayMilliseconds);
SetConsoleTextAttribute(hc, 7);
Sleep(2500);
clearConsole();
}

#pragma endregion

#pragma region Landlord Charisma2
void LandlordCHARAISMA2()
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

	cout << '\n';
	string text1 = "Just a lucky Guess!";
string text2 = " - Dave Lied";
	SetConsoleTextAttribute(hc, 2);
	slowType(text1, delayMilliseconds);
	SetConsoleTextAttribute(hc, 7);
	slowType(text2, delayMilliseconds);
	SetConsoleTextAttribute(hc, 12);
	string text3 = "Well I dont care anyway.";
string text4 = "Now get out of my sight";
cout << '\n';
cout << '\n';
slowType(text3, delayMilliseconds);
cout << '\n';
cout << '\n';
slowType(text4, slowdelayMilliseconds);
SetConsoleTextAttribute(hc, 7);

}

#pragma endregion

