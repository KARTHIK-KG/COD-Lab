//  C Program to check Armstrong number.

// A number is called as Armstrong number if sum of cubes of digits of number is equal to the number itself. In the below C program, we are checking whether the input number is Armstrong or not

#include<stdio.h>
int main()
{
    int num=370, originalNumber,remainder,result=0;
    originalNumber=num;
    while(originalNumber!=0)
    {
        remainder=originalNumber%10;
        result+=remainder*remainder*remainder;
        originalNumber/=10;
    }
    if(result==num)
      printf("%d is an Armstrong Number",num);
    else
      printf("%d is not an Armystrong Number",num);
    
    return 0;  
}

// Input : 
// Enter a number: 370

// Output :
// 370 is an Armstrong Number

