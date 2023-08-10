#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

//   ofstream newFile("C:\\Learning\\CPP\\CPP_Tutorial\\Day 4\\OnePiece.txt");

//   cout << "file is created ... ";

//   newFile << "Monekey D. Luffy";

    string str;
    ifstream newFile("C:\\Learning\\CPP\\CPP_Tutorial\\Day 4\\OnePiece.txt");
    while(getline(newFile,str)){
       cout << str << endl; 
    }
    newFile.close();

  return 0;
}
