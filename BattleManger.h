#pragma once
#include "Monster.h"
#include <vector>
using namespace std;

class BattleManager {
public:
    vector<Monster> monsters;
    void addMonster(const Monster& m);
    void simulateBattle();
};
