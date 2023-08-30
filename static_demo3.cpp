#include <iostream>
using namespace std;

class A {
  int i = 0;

 public:
  A() {
    i = 0;
    cout << "Inside Constructor" << endl;
  }

  ~A() { cout << "Inside Destructor" << endl; }
};

int main() {
  int x = 0;
  if (x == 0) {
    static A obj;
  }
  cout << "End of main\n";
}