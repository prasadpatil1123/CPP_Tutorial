#include<iostream>
using namespace std;

struct stu{
   int roll; 
   char name[20]; 
   float marks; 
};
int main(){
     struct stu s;
    cout << " Enter student roll number: " << endl;
    cin >> s.roll;
     cout << " Enter student name: " << endl;
    cin >> s.name;
     cout << " Enter student marks: " << endl;
    cin >> s.marks;

    cout << s.roll <<" "<< s.name <<" "<< s.marks;
    return 0;
}
