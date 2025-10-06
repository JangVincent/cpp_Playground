#include <iostream>
using namespace std;

void fizzbuzz(int rangeStart, int rangeEnd);

int main() { fizzbuzz(1, 100); }

void fizzbuzz(int rangeStart, int rangeEnd) {
  int i{rangeStart};

  for (; i <= rangeEnd; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "FizzBuzz" << endl;
      continue;
    } else if (i % 3 == 0) {
      cout << "Fizz" << endl;
      continue;
    } else if (i % 5 == 0) {
      cout << "Buzz" << endl;
      continue;
    }
    cout << i << endl;
  }
}
