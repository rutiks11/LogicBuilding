// 6785
// 5    8   7   6

#include<stdio.h>

void DisplayR(int no)
{
    int iDigit = 0;

    if(no !=0)
    {
        iDigit = no % 10;
        printf("%d\t",iDigit);
        no = no / 10;
        DisplayR(no);       // Tail Recurssion
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}