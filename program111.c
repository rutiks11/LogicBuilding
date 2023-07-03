// Write a program to print pattern
// Input : 5
// Output : -5  -4  -3  

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //    1               2            3               
    for(iCnt = -iNo ; iCnt<=0 ;  iCnt++)
    {
        printf("%d\t",iCnt );      // 4
    }

    for(iCnt = 1 ; iCnt<=iNo ;  iCnt++)
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