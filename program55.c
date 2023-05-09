// Write the program to accept number and seperate digit 
// While Loop

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(int iNo)
{
    int iDigit = 0;
    bool bAns = false;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo!=0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 8)
        {
            bAns = true;
            break;
        }
        iNo = iNo / 10;         // Self Updating Statement
    }
    return bAns;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkDigit(iValue);

    if(bRet == true)
    {
        printf("Digit 8 is present in number\n");
    }
    else{
        printf("Digit 8 is not present in number\n");
    }

    return 0;
}
