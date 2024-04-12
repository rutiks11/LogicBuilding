// 6785
// 5    8   7   6

#include<stdio.h>

void FactorsI(int no)
{
    int iCnt = 2;

    while (iCnt <= (no/2))
    {
        if((no % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    FactorsI(iValue);
    
    return 0;
}