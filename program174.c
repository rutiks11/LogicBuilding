// Write a program to accept String and character and return the index of
// Last occurence

#include <stdio.h>
#define ERR_NOTFOUND -1

int LastOccurance(char *str,char cValue)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUND;

    while (*str != '\0')
    {
        if(*str== cValue)
        {
           iPos = iCount;  
        }
        str++;
        iCount++;
    }

    return iPos;
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

    iRet = LastOccurance(Arr,ch);  

    if(iRet == ERR_NOTFOUND)
    {
        printf("Character is Not found");
    }
    else
    {
        printf("First Occurence of character is at %d ",iRet);
    }
    return 0;

}
