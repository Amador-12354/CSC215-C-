#include "BattleManger.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void BattleManager::addMonster(const Monster& m) { //Pushes a monster into the monsters vector
    monsters.push_back(m);
}

void BattleManager::simulateBattle() { //Runs a loop until only 1 monster is remaining
    srand(time(0));
    while (monsters.size() > 1) {
        int attacker = rand() % monsters.size();
        int defender = rand() % monsters.size();
        if (attacker == defender) continue;

        cout << monsters[attacker].name << " attacks " << monsters[defender].name << " for " << monsters[attacker].attackPower << " damage!\n";
        monsters[defender].takeDamage(monsters[attacker].attackPower);

        if (!monsters[defender].isAlive()) {
            cout << monsters[defender].name << " has been defeated!\n";
            monsters.erase(monsters.begin() + defender);
        }
    }

    cout << "\nThe winner is: " << monsters[0].name << "!\n";
}
