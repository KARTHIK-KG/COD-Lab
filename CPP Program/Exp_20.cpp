//  C++ Program to Find Quotient and Remainder

// The user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.
// To compute quotient and remainder, both divisor and dividend should be integers.

#include<iostream>
using namespace std;
int main()
  {
  int divisor, dividend,quotient,remainder;
  dividend=13;
  divisor=4;
  quotient=dividend/divisor;
  remainder=dividend%divisor;
  cout<<"Quotient = "<<quotient<<endl;
  cout<<"Remainder = "<<remainder;
  return 0;
  }

// Input :
// Enter dividend: 13
// Enter divisor: 4

// Output:
// Quotient = 3
// Remainder = 1



