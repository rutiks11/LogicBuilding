// Write a program to accept String and character and return the index of
// first occurence

#include <stdio.h>

int FirstOccurance(char *str,char cValue)
{
    int iCount = 1;
    int iPos = 0;

    while (*str!='\0')
    {
        if(*str== cValue)
        {
           iPos = iCount;
           break;  
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

    iRet = FirstOccurance(Arr,ch);  

    printf("First Occurence of character is at %d ",iRet);

    return 0;

}
