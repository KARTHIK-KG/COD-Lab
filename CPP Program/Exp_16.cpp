//  C++ Program to Find LCM

// To calculate the LCM (Lowest Common Multiple) of two integers using loops and decision making statements.

#include<iostream>
using namespace std;
long long gcd(long long int a,long long int b)
{
    if(b==0)
      return a;
    return gcd(b,a%b);
}

long long lcm(int a,int b)
{
    return(a/gcd(a,b))*b;
}

int main()
{
    int a=12,b=18;
    cout<<"LCM = "<<lcm(a,b);
    return 0;
}

// Input : Enter two numbers: 12 18

// Output : LCM = 36
