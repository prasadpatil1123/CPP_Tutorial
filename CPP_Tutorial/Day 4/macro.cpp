#include<iostream>
using namespace std;
#define num 10

int main(){
    int i, r;
    for(i = 1; i<=10; i++){
        r = num * i;
        cout << num << "*" << i << "=" << r << endl;
    }
    return 0;
}

/*
10*1=10
10*2=20
10*3=30
10*4=40
10*5=50
10*6=60
10*7=70
10*8=80
10*9=90
10*10=100
*/