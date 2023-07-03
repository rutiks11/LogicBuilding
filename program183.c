// Write a program to accept String 
// Copy string into another string

#include <stdio.h>

void strcpyX(char *str, char *dest)
{
    while (*str != '\0')
    {
        *dest = *str;
        dest++;
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

    strcpyX(Arr,Brr);

    printf("String after copy is : %s\n",Brr);  

    return 0;    
}
