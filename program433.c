// 6785
// 5    8   7   6

#include<stdio.h>

void FactorsR(int no)
{
    static int iCnt = 1;

    if(iCnt <= (no/2))
    {
        if((no % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(no);
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    FactorsR(iValue);
    
    return 0;
}