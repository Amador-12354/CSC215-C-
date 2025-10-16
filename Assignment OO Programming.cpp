// Assignment OO Programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//4/29/2025

#include "Monster.h" //Needed to connect with this head
#include "BattleManger.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the Monster Battle Simulator!\n\n"; //display welcome messafe

    //Creates a BattleManager
    BattleManager manager; 

    //Adds 10 different mosters with custom stats
    manager.addMonster(Monster("Dragon", 100, 25));
    manager.addMonster(Monster("Goblin", 60, 15));
    manager.addMonster(Monster("Orc", 80, 20));
    manager.addMonster(Monster("Troll", 120, 18));
    manager.addMonster(Monster("Vampire", 70, 22));
    manager.addMonster(Monster("Werewolf", 90, 19));
    manager.addMonster(Monster("Golem", 150, 10));
    manager.addMonster(Monster("Ghost", 50, 14));
    manager.addMonster(Monster("Minotaur", 85, 17));
    manager.addMonster(Monster("Hydra", 110, 21));

    manager.simulateBattle(); //Starts simulator

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
