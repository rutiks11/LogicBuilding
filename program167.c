// Write a program to accept String and calculate z in it or not

#include <stdio.h>

int strlenCountX(char *str)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if(*str=='z')
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

    iRet = strlenCountX(Arr);    // strlenX(100)

    printf("Number of z in array : %d\n",iRet);
 

    return 0;
    
}
