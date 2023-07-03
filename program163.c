// Write a program to accept String and calculate length of small letters in array

#include <stdio.h>

int strlenCapitalX(char *str)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
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

    iRet = strlenCapitalX(Arr);    // strlenX(100)

    printf("Number of Capital letter in array : %d\n",iRet);
 

    return 0;
    
}
