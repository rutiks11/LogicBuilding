/*
    Input:
    Row : 4
    Col : 4

    Output:
    *   @   @   @
    $   *   @   @
    $   $   *   @
    $   $   $   *
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\0");
        return; 
    }
   
    for(i = 1; i<= iRow; i++)   // Outer
    {
        for(j=1; j <= iCol; j++)  // Inner
        {
            if(i==j) // Diagonal
            {
                printf("*\t");
            }
            else if(i<j) // Upper Triangle
            {
                printf("@\t");
            } 
            else // Lower Triangle   
            {
                printf("$\t");
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

