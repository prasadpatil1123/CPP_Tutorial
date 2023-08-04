#include<iostream>
using namespace std;

void fun(int a, int b){
    a = 100, b= 200;
    cout << a <<endl<< b ;
}
int main(){
    fun(20,30);
    return 0;
}
