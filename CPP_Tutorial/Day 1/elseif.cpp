#include<iostream>
using namespace std;
int main(){
    int a, b, ch, add, sub, mul, div;
    int max;
    cout << " Enter Two Number ";
    cin >> a >> b;
    cout << " Enter Choice ";
    cin >> ch;
    
    if( ch == 1 ){
        add = a + b;
        cout<< "add = "<< add;
    }
    else if( ch == 2 ){
        sub = a - b;
        cout<< "sub = "<< sub;
    }
    else if( ch == 3 ){
        mul = a * b;
        cout<< "mul = "<< mul;
    }
    else if( ch == 4 ){
        div = a + b;
        cout<< "div = "<< div;
    }
    else{
            cout << " Invalid Task ";
    }
    return 0;
}