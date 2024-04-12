/*
    input   : 4
    output  : *   *   *   * 
*/

#include<stdio.h>

void DisplayI(int no)
{
    int iCnt= 0;

    iCnt = 1;

    while (iCnt <= no)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    return 0;
}