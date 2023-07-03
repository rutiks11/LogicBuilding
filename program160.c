// Write a program to accept String and calculate length

#include <stdio.h>
#include <string.h>

int strlenX(char str[])
{
    int iCnt = 0;
    int iCount = 0;

    while (str[iCnt]!='\0')
    {
        iCnt++;
        iCount++;
    }
    
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);    // strlenX(100)

    printf("Length of string is : %d\n",iRet);

    return 0;
    
}
