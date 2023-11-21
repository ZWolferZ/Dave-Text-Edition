//Main.h holds all the functions used in main.cpp
#pragma once
#include <iostream>
#include <thread>
#include <cstdlib> 
using namespace std;
#include <chrono>
#define CLEAR_SCREEN "cls"

int delayMilliseconds = 50;
int slowdelayMilliseconds = 150;
// A slow type function that writes the string provided slower
void slowType(const string& text, int delay) 
{
    for (char c : text) 
    {
        cout << c << std::flush; 
       this_thread::sleep_for(chrono::milliseconds(delay));
    }
}
// Overloaded function to use floats for a faster slow type
void slowType(const string& text, float delay) 
{
    for (char c : text) {
        cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::duration<float, std::milli>(delay));
    }

    
}
// A clear console function to give the player easier readablity
void clearConsole() 
    {
        std::system(CLEAR_SCREEN);
    }