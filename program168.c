// Write a program to accept String and character in it and Count occurence of character

///////////////////////////////
// INPUT ERROR
///////////////////////////////
#include <stdio.h>

int strlenCountX(char *str, char cValue)
{
    int iCount = 0;

    while (*str!='\0')
    {
        if(*str==cValue)
        {
            iCount++;  
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character \n");
    scanf("%c",&ch);
    

    iRet = strlenCountX(Arr,ch);    // strlenX(100)

    printf("Number of z in array : %d\n",iRet);
 
    return 0;
    
}
