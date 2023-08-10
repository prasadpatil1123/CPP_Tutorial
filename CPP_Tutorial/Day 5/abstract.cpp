#include <iostream>
using namespace std;
class Animal {

public:
  virtual void sound() = 0;
  void eat() { cout << " Animal is Eating " << endl; }
};

class dog : public Animal {

public:
  void sound() { cout << "Woof Woof ....." << endl; }
};

int main() {
  dog d;
  d.sound();
  d.eat();
  return 0;
}