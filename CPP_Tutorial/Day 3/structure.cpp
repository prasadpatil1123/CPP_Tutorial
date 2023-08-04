#include<iostream>
using namespace std;

struct structure{
   int marks; // 4 byte
   float avg; // 4 byte
   double salary; //  8 byte
   // total = 4+4+8 = 16
};
int main(){
     struct structure s;
    cout << " Structure size: " << sizeof(s); //
    return 0;
}
