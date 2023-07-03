// Write a program to print pattern
// Input : 7
// Output : a       c   d   e   f   g

// Input : 3
// Output : #   #   #

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
        //    1               2            3               
    for(iCnt = 1,ch ='A'; iCnt<=iNo;  iCnt++,ch++)
    {
        printf("%c\t",ch);      // 4
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