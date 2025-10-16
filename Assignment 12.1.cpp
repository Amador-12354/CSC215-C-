// Assignment 12.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2/218/2025

#include "interactive.h" //This connects source file to header
#include <iostream>
#include <string>
using namespace std;

// Function declarations are in "interactive.h"

//Global variables to track user progress has been cut to "interactive.cpp"


int main()
{
    displayIntroduction();
    displayRoom();

    string action;//Used to store and process user's input
    while (true) {//While loop will ensure that simulation runs correctly

        cout << endl;
        getline(cin, action);

        if (action == "inspect desk" || action == "inspect bookshelf" || action == "inspect box" || action == "inspect door") {
            cout << inspectObject(action) << endl;
        }
        else if (action == "use big key" || action == "use book" || action == "use small key" || action == "use key") {
            useItem(action);
        }
        else if (action == "enter code") {
            if (!hasCode) {
                cout << "You don't know the code yet!\n";
                continue;
            }
            int code = getCode();
            if (enterCode(code)) {
                cout << "You escape! Congratulations!\n";
                break; // End the game
            }
            else {
                cout << "Wrong code! Try again.\n";
            }
        }
        else if (action == "exit") {
            cout << "Quitting game...\n";
            break;
        }
        else {
            cout << "Invalid action. Try again.\n";
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
