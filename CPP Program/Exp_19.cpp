//  Check Whether a Number can be Expressed as a Sum of Two Prime Numbers

// This program takes a positive integer from the user and checks whether that number can be expressed as the sum of two prime numbers.
// If the number can be expressed as the sum of two prime numbers, the output shows the combination of the prime numbers.

#include<iostream>
using namespace std;

bool check_prime(int n)
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n=34;
    int n1=1;
    int n2=33;
    while(n2!=n/2-1)
    {
        bool pass1=check_prime(n1);
        bool pass2=check_prime(n2);
        if(pass1 && pass2 && n1+n2==n)
        {
            cout<<n<<" = "<<n1<<" + "<<n2<<endl;
        }
        n1+=1;
        n2-=1;
    }
}

// Input : 
// Enter a positive integer: 34

// Output :
// 34 = 3 + 31
// 34 = 5 + 29
// 34 = 11 + 23
// 34 = 17 + 17
