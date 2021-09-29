// C++ Program to Check Leap Year.

//  All years which are perfectly divisible by 4 are leap years except for century years (years ending with 00) which is leap year only it is perfectly divisible by 400

#include <iostream>
using namespace std;
int main() {
   int year = 2014;
   if (year % 4 == 0) {
      if (year % 100 == 0) {
         if (year % 400 == 0)
         cout << year << " is a leap year";
         else
         cout << year << " is not a leap year";
      } else
      cout << year << " is a leap year.";
   } else
   cout << year << " is not a leap year.";
   return 0;
}

// Input : Enter a year: 2014

// Output : 2014 is not a leap year.
