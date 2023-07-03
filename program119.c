/*
    Input:
    Row : 3
    Col : 5

    Output:
    a   a   a   a
    b   b   b   b
    c   c   c   c

*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i<= iRow; i++)   // Outer
    {
        for(j=1; j <= iCol; j++)  // Inner
        {
            if((i%2)==0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
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

