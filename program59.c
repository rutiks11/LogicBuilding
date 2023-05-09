// accept number and take search number from user

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(int iNo, int iSearch)
{
    int iDigit = 0;
    
    // Filter
    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range 0 to 9");
        return false;
    }

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo!= 0)
    {
        iNo = iNo % 10;
        if(iDigit == iSearch)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == iSearch)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("Enter Digit(0-9)\n");
    scanf("%d",&iValue2);

    bRet = ChkDigit(iValue1,iValue2);

    if(bRet == true)
    {
        printf("%d is present", iValue2);
    }
    else
    {
        printf("%d is not present", iValue2);
    }

    return 0;
}
