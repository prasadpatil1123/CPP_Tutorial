#include <iostream>
using namespace std;
class A {
protected:
    int a,b;
public:
  void input() {
        cout << " Enter Two Numbers: "<< endl;
        cin >> a >> b;
  }
};

class B : public A {
    int c;
public:
  void add() {
   c = a+b;
    cout << "Addition: " << c << endl;
  }
  void sub() {
   c = a-b;
    cout << "Subtraction: " << c << endl;
  }
};

class C : public B {
    int c;
public:
  void mul() {
   c = a*b;
    cout << "Multiplication: " << c << endl;
  }
  void div() {
   c = a/b;
    cout << "Division: " << c << endl;
  }
};


int main() {
  C x;
  x.input();
  x.add();
  x.sub();
  x.mul();
  x.div();
  return 0;
}