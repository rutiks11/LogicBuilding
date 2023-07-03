
#include <iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;
    
    Array(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }


    void Accept()
    {
        cout << "Enter the Elements: \n";

        int iCnt = 0;
        
        for(iCnt = 0;iCnt <iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    
    void Display()
    {
        cout << "Enter the Elements: \n";

        int iCnt = 0;
        
        for(iCnt = 0;iCnt <iSize; iCnt++)
        {
            cout << Arr[iCnt] <<"\n";
        }
    }


};

int main()
{

    int iNo = 0;

    cout << "Enter Number of Elements : \n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();
    aobj.Display();

    return 0;
}