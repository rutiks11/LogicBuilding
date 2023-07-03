// Write a program to accept character from user and check whether it capital letter or not

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char cValue)
{
    if((cValue >= 'A') && (cValue<'Z'))
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

    bRet = ChkCapital(ch);

    if(bRet == true)
    {
        printf("%c is capital letter\n",ch);
    }
    else
    {
        printf("%c is not capital letter\n",ch);
    }
}