// Assignment 6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2/218/2025

#include <iostream>
#include <string>
using namespace std;
 
// Function declarations
void displayIntroduction();
void displayRoom();
string inspectObject(string object);
bool useItem(string item);
int getCode();
bool enterCode(int code);

//Global variables to track user progress
bool hasSmallKey = false;//This key opens drawer and is found inside the book on the bookshelf
bool hasBigKey = false;//This key opens box and is found inside the drawer
bool boxOpened = false;
bool hasCode = false;
string lastInspected = ""; //This will track the last inspected object

// This function will display the default message of what the simulator is about
// and how the user needs to type out actions for game to work
void displayIntroduction() {
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "                      WELCOME TO THE ESCAPE ROOM                    " << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "You find yourself trapped in a loocked room. " << endl;
    cout << "Explore the room, solve puzzles, and try to escape!" << endl;
    cout << "Type your actions out like 'inspect desk', 'use key', or 'enter code'" <<
        endl << "Type 'exit' to quit the game." << endl;
}

//This function will display where the user is basically its going to describe
//the room
void displayRoom() {
    cout << "\nYou wake up in a small room with a desk, a bookshelf, and a locked door"
        << endl << "You see a locked box on the desk." << endl;
}

//Function to inspect objects in the room
// It will also update 'kastInspected' so code knows what user is currently looking at
string inspectObject(string object) {
    lastInspected = object; //This will update based on last onspected object
    if (object == "inspect desk") {
        if (hasSmallKey && !hasBigKey) {
            hasBigKey = true;
            return "You used the small key to open the drawer. Inside, you find a BIG key";
        }
        return "You see a locked drawer. Maybe there's a key somewhere.";
    }
    else if (object == "inspect bookshelf") {
        if (!hasSmallKey) {
            hasSmallKey = true;
            return "You find an old book. Inside, there's a small key.";
        }
        return "Just a bunch of books, nothing interesting.";
    }
    else if (object == "inspect box") {
        return "A locked box sits on the desk. You need a key.";
    }
    else if (object == "inspect door") {
        return "The door is locked. You need a code to open it.";
    }
    return "You don't see anything special.";
}

//This function allows for user to use item
bool useItem(string item) {
    if (item == "use small key") {
        //This will prevent using small key on box
        if (lastInspected == "inspect box") {
            cout << "The small key doesn't work on the box. Try using the big key instead.\n";
            return false;
        }
        if (hasSmallKey && !hasBigKey && lastInspected == "inspect desk") {
            cout << "You unlocked the drawer and found a BIG key!\n";
            hasBigKey = true;
            return true;
        }
        else if (hasBigKey) {
            cout << "You've already used the small key on the drawer\n";
            return false;
        }
        else {
            cout << "You don't have a small key.";
            return false;
        }
    }
    else if (item == "use big key") {
        if (hasBigKey) {
            cout << "You unlocked the box! Inside, you find a note with the numebrs '1201'";
            boxOpened = true;
            hasCode = true;
            return true;
        }
    }
    else if (item == "use key") {
        if (!hasSmallKey && !hasBigKey) {
            cout << "You don't have any keys." << endl;
        }
        else if (!hasSmallKey) {
            cout << "You don't have the small key." << endl;
        }
        else if (!hasBigKey) {
            cout << "You don't have the big key." << endl;
        }
        else {
            cout << "Which key do you want to use? You have a small key and a big key." << endl;
        }
        return false;
    }
    cout << "You can't use that.\n";
    return false;
}

//This function is for user to get the code
int getCode() {
    int code;
    cout << "Enter the 4-digit code: ";
    cin >> code;
    return code;
}

//This last function will make sure that code is correct
bool enterCode(int code) {
    return code == 1201; //This is the correct code
}

int main()
{
    displayIntroduction();
    displayRoom();

    string action;//Used to store and process user's input
    while (true) {//While loop will ensure that simulation runs correctly

        cout << endl;
        getline(cin, action);

        if (action == "inspect desk" || action == "inspect bookshelf" || action == "inspect desk" || action == "inspect box" || action == "inspect door") {
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
