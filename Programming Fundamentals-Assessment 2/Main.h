#pragma once
#include <iostream>
#include <thread>
#include <cstdlib> 
using namespace std;
#include <chrono>
#define CLEAR_SCREEN "cls"

int delayMilliseconds = 50;


void slowType(const string& text, int delay) 
{
    for (char c : text) 
    {
        cout << c << std::flush; 
       this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

void slowType(const string& text, float delay) 
{
    for (char c : text) {
        cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::duration<float, std::milli>(delay));
    }

    
}
void clearConsole() 
    {
        std::system(CLEAR_SCREEN);
    }