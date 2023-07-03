// Write a program to accept String 
// and check whether it is palindrome or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPalindrome(char *str)
{   
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start<end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }
    
    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[50];
    bool bRet = false;

    printf("Enter First String \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPalindrome(Arr);

    if(bRet == true)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }

    return 0;    
}