#include <iostream>
using namespace std;

class Number
{    
    public:
        // Characteristics
        int iNo1 ;
        int iNo2 ;

        // Constructor
        Number(int X, int Y)
        {
            iNo1 = X;
            iNo2 = Y;
        }

        // Behaviours
        int Maximum()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet =0 ;
    

    cout << "Enter First Number\n";
    cin >> iValue1;

    
    cout << "Enter Second Number\n";
    cin >>iValue2;

    Number nobj1(iValue1,iValue2);

    iRet = nobj1.Maximum();    
    cout<<"Maximum Number is : "<<iRet<<"\n";
    
    cout << "Enter First Number\n";
    cin >> iValue1;

    
    cout << "Enter Second Number\n";
    cin >>iValue2;

    Number nobj2(iValue1,iValue2);

    iRet = nobj2.Maximum();
    cout<<"Maximum Number is : "<<iRet<<"\n";

    return 0;
}
