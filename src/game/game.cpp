#include "game/game.h"

#include <iostream>

using namespace std;

namespace Game {

Monster::Monster(int initHp, int initAtk) : hp(initHp), atk(initAtk) {}

void Monster::TakeDamage(int Damage) {
  hp -= Damage;
  if (hp < 0) hp = 0;
}

}  // namespace Game
