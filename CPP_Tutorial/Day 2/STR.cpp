#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[] = "kashi";
    cout<<"String: "<<str<<endl;

    // int r = strlen(str);
    // cout<<" String Length: "<<r;

    // strrev(str);
    // cout<<" String Reverse: "<<str << endl;

    // char str2[] = "Patil";
    char str2[20];

    // strcat(str,str2);

    strcpy(str2,str);

    cout<<str2<<" ";
}