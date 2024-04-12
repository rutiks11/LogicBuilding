// Call by Address

#include<iostream>
using namespace std;

void Display(int Arr[], int Size)
{
    int iCnt = 0;
    cout  << "Elements of Array :: \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout << Arr[iCnt] << "\n";
    }
}


void Display(double Arr[], double Size)
{
    int iCnt = 0;

    cout  << "Elements of Array :: \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout << Arr[iCnt] << "\n";
    }
}

int main()
{   
    int A[] = {10,20,30,40,50};

    Display(A,5);

    double B[] = {10,778,20.68,40.56,10.25};
    Display(B,5);

    return 0;

}