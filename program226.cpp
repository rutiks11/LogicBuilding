// Accept Number from user in decimal format and convert it into zero

#include<iostream>
using namespace std;

void DisplayBinaryResults(int iNo1, int iNo2)
{
    int iResult = 0 ;

    iResult = iNo1 & iNo2;
    cout << "Result of & is : "<<iResult <<"\n";

    iResult = iNo1 | iNo2;
    cout << "Result of | is : "<<iResult <<"\n";

    iResult = iNo1 ^ iNo2;
    cout << "Result of ^ is : "<<iResult <<"\n";
}

int main()
{
    int iValue1 = 0, iValue2= 0;
    
    cout << "Enter Number\n";
    cin >> iValue1;
    
    cout << "Enter Number\n";
    cin >> iValue2;

    DisplayBinaryResults(iValue1,iValue2);

    return 0;
}