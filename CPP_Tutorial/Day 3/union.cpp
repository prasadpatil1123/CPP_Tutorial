#include<iostream>
using namespace std;

union str2{
   int marks; // 4 byte
   float avg; // 4 byte
   double salary; //  8 byte
   
};
int main(){
      str2 un;
    cout << " union size: " << sizeof(un); // 8 bytes
    return 0;
}
