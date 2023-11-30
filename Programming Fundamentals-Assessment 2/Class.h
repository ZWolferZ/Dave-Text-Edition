// Class Header File holds the class selection function
#pragma once
#include <iostream>
#include <string>
using namespace std;

#pragma region Class Select
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
        cout << "Please choose a character class below: " << '\n';

        int i = 0;
        //Iterate through class list, like a smart person
        while (i != classessize)
        {
            cout << i << ". " << Classes[i] << '\n';
            i++;
        }

        cout << '\n';
        cout << ">";
        //Error handling stuff
        if (!(cin >> choice))
        {
            cin.clear();

            cin.ignore(1000, '\n');

            cout << '\n';

            cout << "Invalid input! Please enter a valid number." << '\n';
            cout << '\n';
            continue;
        }

        
        //Error handling stuff
        if (choice < 0 || choice >= size(Classes))
        {

            cout << "Out of range! (0 - " << size(Classes) - 1 << ")" << '\n';

            cout << '\n';

            continue;
        }

        notselected = true;
        //End Loop
    }

    cout << '\n';
    cout << "You have selected the " << Classes[choice] << " character class..." << '\n';
   
    return choice;
    


}
#pragma endregion