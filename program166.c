// Write a program to accept String and calculate spaces

#include <stdio.h>

int strlenSpaceX(char *str)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if(*str==' ')
        {
            iCount++;  
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenSpaceX(Arr);    // strlenX(100)

    printf("Number of spaces in array : %d\n",iRet);
 

    return 0;
    
}
