#include <iostream>
using namespace std;

class A {
 public:
  static int i;
  A(){};
};

// int A::i = 1;

int main() {
  // A obj;
  // cout << obj.i << endl;
  A::i = 4;
  cout << A::i << endl;
}
