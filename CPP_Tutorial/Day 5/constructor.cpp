#include <iostream>
using namespace std;

class A{

    // public:
    // A() // Default
    // {  
    //     cout << "I Love my country";
    // }

    // public:
    // A(int x, int y)   // parameterised
    // {
    //     cout << "India's Independence Day: " << x << " AUG "<< y;
    // }

    public:
    int x , y;
    public:
    A(int a, int b)   // parameterised
    {
        x = a ; y = b;
        cout << "India's Independence Day: " << x << " AUG "<< y<< endl;
    }
    A (A &ref)  // copy
    {
        x = ref.x;
        y = ref.y;
        cout <<ends << x << " "<< y;
    }

};

int main() {
    // A op = A();
    // A obj = A(15,1947);
    A obj(15,1947);
    A obj2 = obj;
    return 0;
}
