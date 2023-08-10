#include <iostream>
using namespace std;
class thief {
private:
  string name, address;
  int mob;
public:
  void input() {
    name = "Vaibhav";
    address = "F C road";
    mob = 546789;
  }

  void output() {
    cout << name << endl;
    cout << address << endl;
    cout << mob << endl;
  }
};

class Police : public thief {};

int main() {
  Police T;
  T.input();
  T.output();
  return 0;
}