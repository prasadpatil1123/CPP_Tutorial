#include<iostream>
using namespace std;
int main(){
    int a, b;
    int max;
    cout << " Enter Two Number ";
    cin >> a >> b;
    /*
    if( a > b ){
        cout<< "a = "<< a;
    }else{
        cout<< "b = "<< b;
    }
    */
    max = ( a > b )? a:b;
    cout << max;
    return 0;
}