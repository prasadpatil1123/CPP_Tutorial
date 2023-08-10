#include <iostream>
using namespace std;
class Animal {

public:
  void eat() { cout << " Animal is Eating " << endl; }
};

class cat : public Animal {

public:
  void voice() { cout << "Meaw Meaw ....." << endl; }
};

class dog : public Animal {

public:
  void Bark() { cout << "Woof Woof ....." << endl; }
};

int main() {
  dog d;
  cat c;

  c.eat();
  c.voice();
  d.eat();
  d.Bark();
  return 0;
}