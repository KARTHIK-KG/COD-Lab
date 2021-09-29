//  C++ Program to Display Factors of a Number

// for loop is executed with an initial condition i = 1 and checked whether n is perfectly divisible by i or not. If n is perfectly divisible by i then, i will be the factor of n.

#include<iostream>
using namespace std;
int main()
{
    int num=60,i;
    cout<<"Factors of "<<num<<" are: ";
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        cout<<i<<" ";
    }
    return 0;
}

// Input : Enter a positive integer: 60

// Output : Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60
