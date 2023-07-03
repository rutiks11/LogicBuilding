// Write a program to print pattern
// Input : 7
// Output : #   #   #   #   #   #

// Input : 3
// Output : #   #   #

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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