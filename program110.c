// Write a program to print pattern
// Input : 5
// Output : 1   2   3   4   5   5   4   3   2   1

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //    1               2            3               
    for(iCnt = -iNo ; iCnt<0 ;  iCnt++)
    {
        printf("%d\t",iCnt );      // 4
    }

    printf("\n");
}

int main()
{   
    int iFrequency = 0;

    printf("Enter the Frequency\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    
    return 0;
}