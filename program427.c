#include<stdio.h>

void DisplayR(int no)
{
    static int iCnt = 1;
    
    if(iCnt <= no)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(no);

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