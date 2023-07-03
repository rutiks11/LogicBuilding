// Accept number and take bit and toggle bit
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos-1);

    iResult = iNo  ^ iMask;
    return iResult;

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
    
    iRet = ToggleBit(iValue1,iBit);
    cout << "Result is : " << iRet << "\n";

    return 0;
}