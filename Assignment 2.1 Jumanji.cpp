// Assignment 2.1 Jumanji.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Amador Leon
// 01/23/2025

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "    @@@@@@JUMANJI@@@@@@" << endl;
    cout << "@@@@WELCOME TO THE JUNGLE@@@@" << endl;
    cout << "1.Dr.Smolder Bravestone" << endl << "2.Franklin 'Moose' Finbar"
        << endl << "3.Professor Shelly Oberon" << endl << "4.Ruby Roundhouse" << endl << "Pick your player (1-4): ";
    // Need a switch for user to pick character and reframe from making own character
    int playerChoice;
    string playerAvatar;

    cin >> playerChoice;

    switch (playerChoice) {
    case 1:
        playerAvatar = "Dr. Smolder Bravestone";
        break;
    case 2:
        playerAvatar = "Franklin 'Moose' Finbar";
        break;
    case 3:
        playerAvatar = "Professor Shelly Oberon";
        break;
    case 4:
        playerAvatar = "Ruby Roundhouse";
        break;
    default:
        cout << "Invalid choice! Please restart and pick a valid character." << endl;
        return 1; // Exit the program if an invalid choice is made
    }

    cout << "You chose " << playerAvatar << "!" << endl;

    // First mission is to hunt down Nigel (the guide) to get full mission
    cout << "You wake up in the jungle. You're confused and hear a voice saying, 'Find Nigel to learn your misison. Looking around what do you do?" << endl <<
        "1. Follow the sound of a car horn in the distance" << 
        endl << "2. Climb a tree to get a better view." << 
        endl << "3. Stay where you are and call for help"<<endl<< "Enter your choice (1-3): ";
    int firstChoice;
    cin >> firstChoice;
    if (firstChoice == 1) {
        cout << "You follow the sound of the car horn and find Nigel in his jeep. He says, 'Welcome to Jumanji! Your mission is to return the Jaguar's Eye to its statue and lift the curse and escape.'";
    }else if (firstChoice == 2) {
        cout << "Climb up the tree and notice a jeep near a rock. You climb down and make your way to the rock. "
            << "There you find Nigel who says, 'Welcome to Jumanji! Your mission is to return the Jaguar's Eye to its statue and lift the curse and escape.'";
    }
    else {
        cout << "You shout for Nigel but your voice attracts a wild boar instead! You try escaping but end up being killed by the wild boar" <<
            endl << "GAME OVER";
        return 0;
    }

    // After meeting Nigel will hint where the jewel is and player will be given 
    // three differnt paths to take
    cout << endl<<"Nigel says to look for Alan's treehouse where you would find the jewel." <<
        "On the look for the treehouse you come across a raging river. What do you do?" << endl <<
        "1. Try to swin across." << endl << "2. Build a raft." << endl << "3. Look for a bridge" << endl<< "Enter your choice (1-3): ";
    int secondChoice;
    cin >> secondChoice;
    if (secondChoice == 1) {
        cout << "You attempted to swim across, but the current was too strong so you died."<<endl
            <<"Game Over.";
        return 0;
    }
    else if (secondChoice == 2) {
        cout << "You start gathering logs and vines to build a raft. Once built you paddle across "<<
            "the river safety and avoid the dangerous current. Well done!!! You made it across to the other side.";
    }
    else {
        cout << "You walk along the riverbank, searching for a bridge. After a short while, you find a narrow wooden bridge. " <<
            "However, it looks old and unstable, but its the best option. You carefully start crossing the bridge, it starts creaking but you make it safelty across.";
    }

    // User reaches treehouse and starts looking for the jewel
    cout << "You found Alan's treehouse when entering you can either search the kitchen, bedroom, and the porch" <<
        "What room will you check?" << endl <<
        "1. Kitchen." << endl << "2. Bedroom." << endl << "3. Porch" << endl << "Enter your choice (1-3): ";
    int thirdChoice;
    cin >> thirdChoice;

    if (thirdChoice == 1) {
        cout << "You decide to check the kitchen where you find Alan's notebook. However, you didn't notice the wild monkeys" << 
            "The wild monkeys causing you to die"<<endl<< "Game Over.";
        return 0;
    }
    else if (thirdChoice == 2) {
        cout << "You find a locked door with a riddle: 'I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?'" << endl
            << "A. Echo" << endl
            << "B. Sound" << endl
            << "C. Wind" << endl
            << "Enter your answer (A,B,C): ";

        // To give different outputs for the riddle added an if-else if-else statement inside the if statement
        // Variable correctAnswer is for the if-else statement for the riddle
        char correctAnswer;
        cin >> correctAnswer;
        if (correctAnswer == 'A') {
            cout << "The door opens, revealing the jewel!" << endl;
        }
        else {
            cout << "Wrong answer! A poisonous spider bites you." << endl
                << "GAME OVER." << endl;
            return 0;
        }
    }
    else {
        cout << "You walk onto the porch where you find something shiny. By thinking it is the jewel you grab the railing that is old and fall to your death."<<
            endl<<"GAME OVER";
        return 0;
    }

    // A final fourth option where a final challenge
    cout << "After grabbing the jewel and fleeing from the killer monkeys you make it to the Jaguar statue. However you meet Van Pelt " <<
        "A hunter that doesn't want you to leave the game. To place the jewel, you need to choose a distraction for Van Pelt"<<
        "Which do you choose"<<endl <<
        "1. Fight him directly" << endl << "2. Use a decoy to lure him away" << endl << "3. Sneak past him" << endl << "Enter your choice (1-3): ";
    int fourthChoice;
    cin >> fourthChoice;
    if (fourthChoice == 1) {
        cout << "You charge at Van Pelt. He draws his weapon and attacks! You manage to land a few blows, but he's too fast and strong" <<
            "You lose"<<endl<< "Game Over.";
        return 0;
    }
    else if (fourthChoice == 2) {
        cout << "You quickly grab a nearby rock and wrap it in some cloth that you then toss into the jungle. Van Pelt chases after it" <<
            "You rush to the statue and place the jewel in it's rightful place. The ground trembles, you fall losing conscious and you wake up" <<
            " to see a old tv with the words" << endl << "CONGRATULATIONS" << endl << "YOU WON";
        return 0;
    }
    else {
        cout << "You try sneaking pass Van Pelt but he catches of you. He starts drawing his weapon so you run back into the jungle." <<
            " But you don't hear or notice the pack of rhinos leading to you freezing in shock and being ran over by the rhinos" <<
            endl << "GAME OVER";
        return 0;
    }
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
