// Assignment Code Block, Scope, and Lifetimes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3/12/2025
//Rock, Paper, Scissors Game

#include <iostream>
#include <cstdlib> //cstdlib and ctime are going to help with randomness
#include <ctime>
using namespace std;

//Global declarations
string getUserChoice();
string getComputerChoice();
string determineWinner(string userChoice, string computerChoice);
void playGame();

int main()
{
    playGame();//Start game
    return 0;
}

//Function definitions
string getUserChoice() { //Function gets user's choice
    int userChoice;
    string choice;

    do {
        cout << "1. Rock\n2. Paper\n3. Scissors\n";
        cout << "Choose a number between 1-3: ";
        cin >> userChoice;
        //If userChoice is 1 it will be rock , if 2 = paper and if 3 = scissor
        if (userChoice == 1) {
            choice = "Rock";
        }
        else if (userChoice == 2) {
            choice = "Paper";
        }
        else if (userChoice == 3) {
            choice = "Scissors";
        }
        else {
            cout << "Invalid choice. Please try again.\n\n";
        }
    } while (userChoice != 1 && userChoice != 2 && userChoice != 3);

    cout << "You chose: " << choice << endl;
    return choice;
}
    

string getComputerChoice() {
    //Below is the seed for random number generator
    srand(time(0));
    int randomNumber = rand() % 3 + 1; //Will generate random number between 1-3

    //Assign random number to a move
    string computerMove;
    //Used switch to make 1 = Rock, 2=Paper, and 3=Scissors
    switch (randomNumber) {
    case 1:
        computerMove = "Rock";
        break;
    case 2:
        computerMove = "Paper";
        break;
    case 3:
        computerMove = "Scissors";
        break;
    }

    cout << "The computer chose: " << computerMove << endl;
    return computerMove;//Allow for computer move to return as string instead of integer
}

//Function will determine the winner
string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) {//If both user and computer chose same displays tied
        cout << "You tied!" << endl;
        return "tie";
    }
    //If user wins will display You Won
    else if ((userChoice == "Rock" && computerChoice == "Scissors") ||
        userChoice == "Paper" && computerChoice == "Rock" ||
        (userChoice == "Scissors" && computerChoice == "Paper")) {
        cout << "YOU WON! :)" << endl;
        return "win";
    }
    else {//If computer wins will display you lost
        cout << "You lost! :(" << endl;
        return "lose";
    }
}

void playGame() {
    //Welcome message
    cout << "++++++++++++++++WELCOME TO ROCK,PAPER,SCISSORS++++++++++++++++\n";
    //variable that defines if user wants to play again
    char playAgain = "Y" || "y";
    int userWins = 0, computerWins = 0, ties = 0;//Will track score

    //do-while loop to keep playing or quit
    do {
        if (playAgain == 'y' || playAgain == 'Y') {
            cout << "\n---New Round---\n"; //will display when user plays again
        }
        //Get choices
        string userChoice = getUserChoice();
        string computerChoice = getComputerChoice();

        //Will determine the winner & update score
        string result = determineWinner(userChoice, computerChoice);
        if (result == "win") {
            userWins++;
        }
        else if (result == "lose") {
            computerWins++;
        }
        else {
            ties++;
        }

        //Will display current scores
        cout << "\n---Current Score---\n";
        cout << "You: " << userWins << " | Computer: " << computerWins << " | Ties: " << ties;

        //Will ask if user wants to play again
        cout << " Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y'); //Loop will continue
    

    //Once user quits will display final score summary
    cout << "\n---FINAL SCORE---\n";
    cout << "You: " << userWins << " | Computer: " << computerWins << " | Ties: " << ties << endl;
    cout << "Thanks for playing!" << endl;

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