#include <iostream>
using namespace std;
class kashi {
    private:
    string movie;
public:
  void show() 
  { 
    movie = "oppenheimer" ;
  }
  friend void vipul(kashi r);
};
void vipul(kashi r){
    cout << " I'm watching oppenheimer"<< r.movie;
}
int main() {
  kashi a;
  a.show();
  vipul(a);
  return 0;
}