#pragma once
#include <iostream>
#include <string>
using namespace std;

int ClassSelect()
{
    //Inistialise Struct
    struct Playersettings
    {
        string Playername;
        string Playerclass;

    };
    //Inistialise Class array
    string Classes[3]{};
    Classes[0] = "Strong Dave";
    Classes[1] = "Fast Dave";
    Classes[2] = "Charismatic Dave";

    int choice = NULL;
    bool notselected = false;
    int classessize = size(Classes);
    int i = 0;
    int Index = 0;
    Playersettings PlayerOptions[100]{};


    PlayerOptions[Index].Playername;
    PlayerOptions[Index].Playerclass;
    //Loop Start
    while (notselected == false)
    {
        cout << "Please choose a character class below: " << endl;

        int i = 0;
        //Iterate through class list, like a smart person
        while (i != classessize)
        {
            cout << i << ". " << Classes[i] << endl;
            i++;
        }

        cout << endl;
        cout << ">";
        //Error handling stuff
        if (!(cin >> choice))
        {
            cin.clear();

            cin.ignore(1000, '\n');

            cout << endl;

            cout << "Invalid input! Please enter a valid number." << endl;
            cout << endl;
            continue;
        }

        cout << endl;
        //Error handling stuff
        if (choice < 0 || choice >= size(Classes))
        {

            cout << "Out of range! (0 - " << size(Classes) - 1 << ")" << endl;

            cout << endl;

            continue;
        }

        notselected = true;
        //End Loop
    }


    cout << "You have selected the " << Classes[choice] << " character class..." << endl;
   
    return choice;
    


}