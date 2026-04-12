#include "Monster.h"
#include <iostream>

//This will initialize monster with a name, health, and attack power
Monster:: Monster(string n, int h, int a) : name(n), health(h), attackPower(a) {}

//This will reduce monster's health whenever hit
void Monster::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
}
//This checks if monster is still alive
bool Monster::isAlive() const {
    return health > 0;
}
