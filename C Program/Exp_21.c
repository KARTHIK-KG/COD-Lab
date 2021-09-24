// C Program to find factorial of number using Recursion.

// finds the factorial of input number and displays the output on screen. We will use a recursive user defined function to perform the task. Here we have a function find_factorial that calls itself in a recursive manner to find out the factorial of input number

#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
    int n=4;
    printf("factorial of %d is: %ld",n,multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if(n>=1)
      return n*multiplyNumbers(n-1);
    else
      return 1;
}

// Input : 
// Enter any integer number: 4

// Output :
// factorial of 4 is: 24
