#pragma once
#include <iostream>
#include "Main.h"
#include <windows.h>

HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;
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
	float answer = 0;
	float trueanswer = 0;

	while (correct == false)
	{
		cout << endl;
		trueanswer = Answer(4, 6, 19, 10);
		answer = Vector2Calculator();


		if (answer == trueanswer)
		{
			correct = true;

		}
		else if (correct == false)
		{
			cout << endl;
			SetConsoleTextAttribute(hc, 12);
			string text9 = R"("Wrong answer Dave!, try again...")";

			slowType(text9, slowdelayMilliseconds);
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


	string text10 = R"("You are lucky this time dave,")";
	string text11 = R"("now get out of my sight")";
	SetConsoleTextAttribute(hc, 12);
	slowType(text10, slowdelayMilliseconds);
	cout << '\n';
	slowType(text11, slowdelayMilliseconds);
	SetConsoleTextAttribute(hc, 7);

	Sleep(2500);
	clearConsole();

}
