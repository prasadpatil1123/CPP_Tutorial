#include<iostream>
using namespace std;
int main(){
    enum gender{
        male, female, Trnas
    };
    cout << male << endl;
    gender str  = Trnas;
    cout << str;
    return 0;
}
