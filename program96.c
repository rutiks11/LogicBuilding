// Write a program to print pattern
// Input : 7
// Output : A   A   A   A   A   A   A

// Input : 3
// Output : A   A   A

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("A\t");
    }
}

int main()
{   
    int iFrequency = 0;

    printf("Enter the Frequency\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    
    return 0;
}