#include <iostream>
using namespace std;
class suraj;

class kashi {
    private:
    int a;
public:
  void ihave() 
  { 
    a =10;
  }
  friend void vipul(kashi p, suraj m);
};

class suraj {
    private:
    int b;
public:
  void ihave() 
  { 
    b =10;
  }
  friend void vipul(kashi p, suraj m);
};

void vipul(kashi p, suraj m){
    int c;
    c = p.a + m.b;
    cout << c;
}
int main() {
  kashi x;
  x.ihave();

  suraj y;
  y.ihave();

  vipul(x,y);
  return 0;
}