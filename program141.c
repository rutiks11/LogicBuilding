/*
    Input:
    Row : 4
    Col : 4

    Output:
   *    a   a   a
   b    *   b   b
   c    c   *   c
   d    d   d   *
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0, ch = '\0';

    if(iRow != iCol)
    {
        printf("Invalid Input\0");
        return; 
    }
   
    for(i = 1,ch='a'; i<= iRow; i++,ch++)   // Outer
    {
        for(j=1; j<=iCol; j++)  // Inner
        {
            if(i==j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }               
        }

        printf("\n");
        printf("\n");
    }
}

int main()
{   
    int iValue1 =0, iValue2 =0;

    printf("Enter Number of rows :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
