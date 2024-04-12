/*
    input   : 4
    output  : *   *   *   * 
*/

#include<stdio.h>

void DisplayI(int no)
{
    int iCnt = 1;

    while (iCnt <= no)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int no)
{
    static int iCnt = 1;
    
    if(iCnt <= no)
    {
        printf("*\n");
        iCnt++;
        DisplayR(no); // Recursive Call
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);


    return 0;
}