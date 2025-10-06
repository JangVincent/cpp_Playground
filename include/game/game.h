
#ifndef GAME_H
#define GAME_H

class Monster {
 public:
  Monster(int initHp, int initAtk);

  int hp{100};
  int atk{10};

  void TakeDamage(int Damage);
};

#endif
