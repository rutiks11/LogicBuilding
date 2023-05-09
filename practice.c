#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = (iSum*10) + iDigit;
        iNo = iNo / 10;
    }
    printf("%d",iSum);
}

int main()
{
    int iValue =0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);
}