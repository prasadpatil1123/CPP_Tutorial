#include <iostream>
using namespace std;
template <class A> void print(A x, A y) {
  cout << x << " " << y << endl;
}

int main() {
  print(10, 20);
  print('a', 'b');
  print(45.3, 676.7);
  print("kashi", "Patil");
  return 0;
}