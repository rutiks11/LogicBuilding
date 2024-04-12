// Call by Address

#include<iostream>
using namespace std;

template <class T>
void Swap(T *No1, T *No2)
{
    T *Temp;
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