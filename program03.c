#include <stdio.h>

int main()
{
    int No1 = 10;
    int No2 = 11;

    int Ans = 0;



    printf("Enter the first number : ");
    scanf("%d", &No1);

    printf("Enter the second number : ");
    scanf("%d", &No2);

    Ans = No1 + No2;

    printf("ANS = %d ", Ans);   //%d format in decimal
    
    return 0;
}
