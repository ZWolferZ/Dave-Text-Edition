//Main.h holds all the functions used in main.cpp
#pragma once
#include <iostream>
#include <thread>
#include <cstdlib> 
using namespace std;
#include <chrono>


int delayMilliseconds = 50;
int slowdelayMilliseconds = 200;

// A slow type function that writes the string provided slower
void slowType(const string& text, int delay) 
{
    for (char c : text) 
    {
        cout << c << flush; 
       this_thread::sleep_for(chrono::milliseconds(delay));
    }
}
// Overloaded function to use floats for a faster slow type
void slowType(const string& text, float delay) 
{
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::duration<float, milli>(delay));
    }

    
}
// A clear console function to give the player easier readablity
void clearConsole() 
    {
        system("cls");
    }