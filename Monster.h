#pragma once
#include <string>
using namespace std;

class Monster { //Class of mosnter where name, health, and attack power are public
public:
    string name; //Name of monster
    int health; //Health of it in points
    int attackPower; //The damage it deals

    Monster(string n, int h, int a); //COnstructor to set name, health, and attack power
    void takeDamage(int dmg); //This is one of the function that subtracts damage from health
    bool isAlive() const;  //Will return true if health is above 0
};
