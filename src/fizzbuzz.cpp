#include "fizzbuzz.h"  // 선언 연결

#include <iostream>

using namespace std;

void fizzbuzz(int rangeStart, int rangeEnd) {
  for (int i = rangeStart; i <= rangeEnd; i++) {
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
