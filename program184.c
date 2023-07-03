// Write a program to accept String 
// Copy only small letters string into another string 

#include <stdio.h>

void strcpysmallX(char *str, char *dest)
{
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *dest = *str;
             dest++; 
        }
        str++;
    }

    *dest = '\0';
    
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    strcpysmallX(Arr,Brr);

    printf("String after copy is : %s\n",Brr);  

    return 0;    
}
