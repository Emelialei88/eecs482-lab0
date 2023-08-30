#include <iostream>
using namespace std;

class A {
 public:
  static int i;
  A(){};
};

int main() {
  A obj1;
  A obj2;
  obj1.i = 2;
  obj2.i = 3;
  cout << obj1.i << " " << obj2.i;
}