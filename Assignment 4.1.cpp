// Assignment 4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h> // For Beep function on Windows
using namespace std;

int main()
{
    //Using a do-while loop so user can play again
    char choice;
    do {
        int getRandomProfessor();
        //Array of different professors
        string professors[10] = {
            "Professor Battana", "Professor Perrine", "Professor Peters", "Dr.Pike",
            "Professor Portillo", "Professor Rodriguez", "Professor Vosteen",
            "Professor Habib", "Professor Marquit", "Professor Prater"
        };
        cout << "Welcome to UAT! Here are the professors who are going to be visiting different classes today!" << endl;
        //for loop will display the professors who will be introduced
        for (int i = 0; i < 10;i++) {
            cout << i + 1 << ". " << professors[i] << endl;
        }

        //Will ask user to guess which professor will be introduced to them
        int professorGuess;
        cout << "Guess which professor will visit your class (Enter a number between 1-10): ";
        cin >> professorGuess;

        //Will use rand() to randomly select a professor
        srand(time(0)); //Adding seed for random to work properly
        int chosenProfessor = rand() % 10;
        cout << "The visiting professor is: " << professors[chosenProfessor] << ".\n";

        if (professorGuess - 1 == chosenProfessor) {
            cout << "Correct! You guessed the right professor.\n";
            Beep(750, 300); // Frequency of 750 Hz for 300 milliseconds looked this up online 
        }
        else {
            cout << "Oops you guessed wrong. Good luck next time.";
        }
        cout << "Would you like to play again (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
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
