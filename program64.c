// Check whether Number is Palindrome or not 
// imp - temp variable

#include <stdio.h>
#include <stdbool.h>

bool ChkPalindrome(int iNo)
{   
    int itemp = iNo;

    int iDigit = 0;
    int iReverse = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iReverse == itemp)
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
    int iValue =0;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    bRet = ChkPalindrome(iValue);
    
    if(bRet == true)
    {
        printf("%d is Palindrome Number",iValue);
    }
    else
    {
        printf("%d is not Palindrome Number",iValue);
    }
    
    return 0;
}