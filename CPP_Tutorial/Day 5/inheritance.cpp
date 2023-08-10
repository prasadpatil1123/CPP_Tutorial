#include <iostream>
using namespace std;
class Dad {
protected:
    int amount;
public:
  void porperty() {
    amount = 2500000;
  }
};

class Son : public Dad {
    int money;
public:
  void Paisa() {
    money = 120000;
    cout << " Son's Money " << money << endl;
    cout << " Dad's Money " << amount << endl;
  }
};


int main() {
  Son T;
  T.Paisa();
  T.porperty();
  return 0;
}