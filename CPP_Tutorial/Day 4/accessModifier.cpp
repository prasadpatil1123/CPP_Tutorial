#include <fstream>
#include <iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
};

int main() {
    A op;
    // op.a=10;
    op.b=20;
    // op.c=30;
    // cout << op.a << endl;
    cout << op.b << endl;
    // cout << op.c << endl;
    return 0;
}
