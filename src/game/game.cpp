#include "game/game.h"

#include <iostream>

using namespace std;

namespace Game {

Vector3 Vector3::operator+(Vector3& b) {
  return Vector3{x + b.x, y + b.y, z + b.z};
};

ostream& operator<<(ostream& outputStream, const Vector3& v) {
  outputStream << '(' << v.x << ',' << v.y << ',' << v.z << ')';
  return outputStream;
}

Monster::Monster(int initHp, int initAtk) : hp(initHp), atk(initAtk) {
  cout << "Monster Initialized" << endl;
}
Monster::~Monster() { cout << "Monster Destructed" << endl; }

void Monster::TakeDamage(int Damage) { hp -= Damage; }
int Monster::getHp() { return hp; }
int Monster::getAtk() { return atk; }

}  // namespace Game
