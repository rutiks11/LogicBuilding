/*
    input   : 4
    output  : *   *   *   * 
*/

#include<stdio.h>

void Display(int no)
{
    for(int iCnt =0;iCnt< no; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}