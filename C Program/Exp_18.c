//  C program to calculate total average and percentage of five subjects

// Input marks of five subjects. Store it in some variables say eng, phy, chem, math and comp.
// Calculate sum of all subjects and store in total = eng + phy + chem + math + comp.
// Divide sum of all subjects by total number of subject to find average i.e. average = total / 5.
// Calculate percentage using percentage = (total / 500) * 100.
// Finally, print resultant values total, average and percentage.

#include<stdio.h>
int main()
{
    float marks[5]={95,76,85,90,89},sum=0.0,percentage=0.0,average=0.0;
    for(int i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    average=sum/5;
    percentage=(sum/500)*100;
    printf("Total marks = %.2f\n",sum);
    printf("Average marks = %.2f\n",average);
    printf("Percentage = %.2f\n",percentage);
    return 0;
}

// Input: 
// Enter marks of five subjects:
// 95
// 76
// 85
// 90
// 89

// Output:
// Total marks = 435.00
// Average marks = 87.00
// Percentage = 87.00
