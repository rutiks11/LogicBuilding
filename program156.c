// Write a program to accept character from user and check whether it is Digit or not

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(char cValue)
{
    if((cValue >= '0') && (cValue<'9'))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the Character \n");
    scanf("%c",&ch);

    bRet = ChkSmall(ch);

    if(bRet == true)
    {
        printf("%c is Digit\n",ch);
    }
    else
    {
        printf("%c is not Digit\n",ch);
    }
}
