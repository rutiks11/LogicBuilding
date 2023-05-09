// for loop
// Write the program to accept number and seperate digit 
// While Loop

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    for( ;iNo!=0; )
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;         // Self Updating Statement
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue); 

    return 0;
}
