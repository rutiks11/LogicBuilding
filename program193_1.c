// Write a program to accept String 
// Copy string into another string

#include <stdio.h>

void strcpyX(char *str, char *dest,int iLength)
{
    while ((*str != '\0') && (iLength != 0))
    {
        *dest = *str;
        dest++;
        str++;
        iLength--;
    }

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter number of characters that you want to copy \n");
    scanf("%d",&iNo);

    strcpyX(Arr,Brr,iNo);

    printf("String after copy is : %s\n",Brr);  

    return 0;    
}
