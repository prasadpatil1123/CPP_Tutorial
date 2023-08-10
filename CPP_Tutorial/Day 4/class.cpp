#include <fstream>
#include <iostream>
using namespace std;

class person{
    private:
    int run;
    string msg;
    public:
    void play(){
        run = 50;
        cout << "Today I scored " << run << " runs" << endl;
    }
    void walk(){
        msg = " I am very happy";
        cout << msg;
    }
};

int main() {
    person obj;
    obj.play();
    obj.walk();
    return 0;
}
/*
Today I scored 50 runs
 I am very happy
*/