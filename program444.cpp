////////////////////////////////////////////////////////
//               Bidirectional Search                 //
////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();

        void Accept();
        void Display();
        bool BidirectionalSearch(T);
};

template<class T>
ArrayX<T> :: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[iSize];
}

template<class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T>:: Accept()
{
    cout << "Enter the Elements : \n";

    for(int iCnt =0; iCnt <iSize ; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

template<class T>
void ArrayX<T> :: Display()
{
    cout << "Elements of Array are : \n";

    for(int iCnt =0; iCnt <iSize ; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}

template<class T>
bool ArrayX<T>::BidirectionalSearch(T No)
{
    bool flag = false;
    int iStart = 0;
    int iEnd = iSize -1;
    
    while (iStart <= iEnd)
    {
        if((Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the size of Array :: \n";
    cin >> iValue;

    // ArrayX <int> obj(iValue)
    ArrayX<int> *obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->Display();

    cout << "Enter the Element that you want to search :: " << "\n";
    cin >> iValue;

    bRet = obj->BidirectionalSearch(iValue);

    if(bRet == true)
    {
        cout << iValue << " is present is array \n";
    }
    else
    {
        cout << iValue << " is not present in the array\n";
    }

    delete obj;
    
    return 0;
}
