#include<iostream>
using namespace std;
int main(){
    int age;
     cout <<" Enter Your Age : ";
     cin >> age;
     if(age >= 18)
     goto Vote;
     else
     goto notVote;

     Vote: 
        cout <<" Eligible for Vote ... ! ";
        return 0;
    notVote: 
        cout <<" Not Eligible for Vote ... ";
    return 0;
}