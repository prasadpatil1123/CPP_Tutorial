#include<iostream>
using namespace std;
int main(){
    int *p,a = 10;

    p = &a;
    cout << p << endl;
    cout << &a << endl;
    cout << a << endl;
    cout << *p << endl;
    return 0;
}
