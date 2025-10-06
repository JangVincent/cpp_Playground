#include <iostream>
using namespace std;

int Health{150};

void TakeDamage() {
  cout << " - TakeDamage function starting\n";
  Health -= 50;
  cout << " - TakeDamage function complete\n";
}

int main() {
  cout << "Main function starting\n";
  TakeDamage();
  cout << "We are back in main\n";
  TakeDamage();
  cout << "Main function complete\n";
}
