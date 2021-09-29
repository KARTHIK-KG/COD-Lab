//  C++ Program to Find the Length of a String.

// To compute the length (size) of a string

#include<iostream>
using namespace std;
int main()
{
    char str[]="C++ Programming";
    int count=0;
    while(str[count]!='\0')
    count++;
    cout<<"String Length = "<<count<<endl;
    return 0;
}

// Input : C++ Programming

// Output : String Length = 15
