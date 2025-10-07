
#ifndef GAME_H
#define GAME_H

#include <iostream>

using namespace std;
namespace Game {
struct Vector3 {
  float x;
  float y;
  float z;

  Vector3 operator+(Vector3& b);
};
ostream& operator<<(ostream& outputStream, const Vector3& v);

class Monster {
 public:
  Monster(int initHp, int initAtk);
  ~Monster();

  void TakeDamage(int Damage);
  int getHp();
  int getAtk();

 private:
  int hp{100};
  int atk{10};
};
}  // namespace Game

#endif
