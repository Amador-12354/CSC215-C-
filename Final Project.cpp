// Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zombie Apocalypse Survival Simulator
//Final Project - C++
//5/1/2025

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "player.h" //Connects to the player header
#include "zombie.h" //Connects to zombie header
using namespace std;

void displayIntro() { //Displays intro
    cout << "============================\n";
    cout << " Zombie Apocalypse Simulator\n";
    cout << "============================\n";
    cout << "Survive as many days as possible.\n";
    cout << "Choose actions wisely to manage health, hunger, and supplies.\n\n";
    
}

int main() {
    srand(time(0)); //randomness seed
    Player player;
    int day = 1;

    displayIntro();

    while (player.isAlive()) {
        cout << "\n--- Day " << day << " ---" << endl;
        player.displayStatus();

        cout << "What will you do?\n";
        cout << "1. Scavenge\n2. Rest\n3. Travel\n4. Use Medkit\n (Pick a number 1-4)\n ";
        int choice;
        cin >> choice;

        switch (choice) { //Switch allows for player to do different tasks
        case 1:
            player.scavenge();
            break;
        case 2:
            player.rest();
            break;
        case 3:
            player.travel();
            break;
        case 4:
            player.useMedkit();
            break;
        default:
            cout << "Invalid choice.\n";
        }

        day++; //Counts number of days player survived
    }

    cout << "\nGame Over. You survived " << day - 1 << " days.\n"; //Whenever player dies or escapes this appears
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
