#include <iostream>
using namespace std;

class Number
{    
    public:
        // Characteristics
        int iNo1 ;
        int iNo2 ;

        void Accept()
        {
            cout << "Enter First Number\n";
            cin >> iNo1; 

            cout << "Enter Second Number\n";
            cin >> iNo2;
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
    Number nobj;

    nobj.Accept();

    iRet = nobj.Maximum();
    cout <<"Maximum Number is : "<<iRet<<"\n";

    return 0;
}
