#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Program Started";
    int a,b,c;
    cout << "Enter Two Number: "<< endl;
    cin >> a;
    cin >> b;

    try{
        if(b == 0)
        throw b;
        c = a/b;
        cout << " Result is " << c << endl;
    }
    catch(int x){
        cout << "It is not divided by " << x << endl;
    }
    cout << " Program completed";
  return 0;
}
