#include <iostream>
using namespace std;

int c ;
class A {

public:
  A() { cout << "object " << ++c << " created " << endl; }
  ~A() { cout << "object " << c-- << " deleted " << endl; }
};
int main() {
  A op1;
  A op2;
  A op3;
  return 0;
}