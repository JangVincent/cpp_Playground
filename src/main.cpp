#include <iostream>

#include "fizzbuzz/fizzbuzz.h"
#include "game/game.h"

using namespace std;

int main() {
  // Game::Monster bunny{100, 5};
  // Monster* bunny = new Monster(100, 5);
  // bunny->TakeDamage(10);
  // delete bunny

  Game::Vector3 CurrentPosition{1.0, 2.0, 3.0};
  Game::Vector3 Movement{4.0, 5.0, 6.0};
  Game::Vector3 NewPosition{CurrentPosition + Movement};

  cout << "Current : " << CurrentPosition << endl;
  cout << "Movement : " << Movement << endl;
  cout << "New Position" << NewPosition << endl;

  return 0;
}
