#include <iostream>
using namespace std;

union stu {
  int roll;
  char name[20];
  float marks;
};
int main() {
  union stu s;
  cout << " Enter student roll number: " << endl;
  cin >> s.roll;
  cout << " Student roll number : " << s.roll << endl;

  cout << " Enter student name: " << endl;
  cin >> s.name;
  cout << " Student Name : " << s.name;

  cout << " Enter student marks: " << endl;
  cin >> s.marks;
  cout << " Student marks : " << s.marks;
  return 0;
}
