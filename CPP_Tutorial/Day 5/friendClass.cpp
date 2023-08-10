#include <iostream>
using namespace std;
class kashi {
private:
  int a, b;

public:
  void input() { a = 10, b = 20; }
  friend class vipul;
};

class vipul {
private:
  int c;

public:
  void add(kashi p) {
    c = p.a + p.b;
    cout << c;
  }
};

int main() {
  kashi a;
  a.input();
  vipul m;
  m.add(a);
  return 0;
}