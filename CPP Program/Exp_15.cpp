// C++ program confirms whether the user is a robot or not.
// This program confirms whether the user is a robot or not.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char robotchk[10];
    int val;
    cin>>robotchk;
    val=strcmp("yes",robotchk);
    if(val==0)
      cout<<"You can't Proceed!";
    else
      cout<<"You're Welcome!";
    cout<<endl;
    return 0;
}

// Input: 
// Are You a Robot ?
// No

// Output:
// You're Welcome!


