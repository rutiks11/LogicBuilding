// Write a program to accept String 
// Compare the two strings

#include <stdio.h>
#include <stdbool.h>

bool strcmpX(char *str1,char *str2)
{   
    // If condition combine
    while((*str1!='\0') && (*str2!='\0') && (*str1==*str2))
    {
        str1++;
        str2++;
    }

    return((*str1 == '\0') && (*str2 == '\0'));
}

int main()
{
    char Arr[20];
    char Brr[20];

    bool bRet = false;

    printf("Enter First String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Second String \n");
    scanf(" %[^'\n']s",Brr);
    
    bRet = strcmpX(Arr,Brr);
    
    if(bRet==true)
    {
        printf("String are Equal");
    }
    else
    {
        printf("String are Not Equal");
    }

    return 0;    
}