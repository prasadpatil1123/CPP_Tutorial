#include<iostream>
using namespace std;
int a; // extern(Global)
int main(){
    int b=10; // auto(Local)
    static int c; //static
    register int d; // Register
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}
