#include <iostream>

using namespace std;

void bar() {
  for (int i = 0; ; ++i) {
    cout << "i = " << i << endl;
  }
}

int main() {
  bar();
}