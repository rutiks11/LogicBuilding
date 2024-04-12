// Call by Address

#include<iostream>
using namespace std;

void Swap(int *No1, int *No2)
{
    int *Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{   
    int A = 10, B =20;
    
    Swap(&A,&B);

    cout << "Data after Swapping : " << "\n";
    cout << "Value of A is " << A << "\n";
    cout << "Value of A is " << B << "\n";

    return 0;
}