// Accept number and take bit and toggle bit
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    UINT iMask = 0XFFFFFBF;
    return iNo  & iMask;
     
}

int main()
{
    UINT iValue1 =0;
    UINT iRet = 0;
    UINT iBit = 0;
    
    cout << "Enter Number\n";
    cin>> iValue1;

    
    cout << "Enter the Position\n";
    cin>> iBit;
    
    iRet = ToggleBit(iValue1);
    cout << "Result is : " << iRet << "\n";

    return 0;
}