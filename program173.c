// Write a program to accept String and character and return the index of
// first occurence

#include <stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurance(char *str,char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while ((*str != '\0') && (*str != cValue))
    {
        str++;
        iCnt++;
    }

    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    char Arr[10];
    char ch = '\0';
    int iRet = 0;


    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character\n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);  

    if(iRet == ERR_NOTFOUND)
    {
        printf("Not Found");
    }
    else
    {
        printf("First Occurence of character is at %d ",iRet);
    }

    return 0;
}
