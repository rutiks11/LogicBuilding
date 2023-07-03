// Write a program to accept String 
// Reverse the String

#include <stdio.h>

void strrevX(char *str)
{   
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;
    
    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter First String \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    
    printf("Reverse String is  : %s\n",Arr);

    return 0;    
}