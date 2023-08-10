#include <iostream>
using namespace std;
class myBank {

private:
  int atmPin, Balance;

public:
  string bName, IFSC;
  int accNumber;

  void input() {
    atmPin = 0007;
    Balance = 220000;
    bName = "Deautch Bank";
    IFSC = "Deautch123456";
    accNumber = 223344556;
  }

  void output() {
    cout << "My Bank Details .... " << endl;
    cout << atmPin << endl;
    cout << Balance << endl;
    cout << bName << endl;
    cout << IFSC << endl;
    cout << accNumber << endl;
  }
};

int main() {
  myBank b;
  b.input();
  b.output();

  cout << " Vijay Mallya accesing the bank details" << endl;
  // cout << b.atmPin << endl;
  // cout << b.Balance << endl;
  cout << b.bName << endl;
  cout << b.IFSC << endl;
  cout << b.accNumber << endl;
}