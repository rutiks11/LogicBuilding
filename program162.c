// Write a program to accept String and calculate length of small letters in array

#include <stdio.h>

int strlenSmallX(char *str)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
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

    iRet = strlenSmallX(Arr);    // strlenX(100)

    printf("Number of small letter in array : %d\n",iRet);

    return 0;
    
}
