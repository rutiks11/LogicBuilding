
#include<iostream>
using namespace std;

template  <class T>

T Maximum(T Arr[],int Size)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }

    return Max;
}



int main()
{   
    int A[] = {10,20,30,40,50};
    int Ret = 0;
    
    Ret = Maximum(A,5);
    cout << "Addition is : " << Ret <<"\n";

    double B[] = {10,778,20.68,40.56,10.25};
    double dRet = 0.0;

    dRet = Maximum(B,5);
    cout << "Additon is : " << dRet << "\n";

    return 0;
}