// Write a program to accept String and calculate z in it or not

#include <stdio.h>
#include <stdbool.h>

bool strlenCountX(char *str,char cValue)
{
    int iCount = 0;
    bool bChar = false;

    while (*str!='\0')
    {
        if(*str== cValue)
        {
            bChar = true;
            break;  
        }
        str++;
    }

    return bChar;
}

int main()
{
    char Arr[10];
    char ch = '\0';

    bool bRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character\n");
    scanf(" %c",&ch);

    bRet = strlenCountX(Arr,ch);    // strlenX(100)

    if(bRet == true)
    {
        printf("Array Contains letter %c ",ch);
    }
    else
    {
        printf("Array contain letter %c", ch );
    }

    return 0;

}
