#include <iostream>
using namespace std;

class A {
public:
  virtual void person() {
        cout << " Good Morning "<< endl;
  }
};

class B : public A {
public:
  void person() {
    cout << " Good Evening "<< endl;
  }
};

int main() {
    A *p;
    B obj;
    p = &obj;
    p -> person();
  return 0;
}