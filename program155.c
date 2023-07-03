// Write a program to accept character from user and check whether it is small letter or not

#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char cValue)
{
    if((cValue >= 'a') && (cValue<'z'))
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
        printf("%c is Small letter\n",ch);
    }
    else
    {
        printf("%c is not small letter\n",ch);
    }
}
