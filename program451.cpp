////////////////////////////////////////////////////////
//                Selection Sort                      //
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
        void BubbleSort();
        void InsertionSort();
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
void ArrayX<T> :: BubbleSort()
{
    T temp;
    int i =0, j = 0 ;
    bool flag = false;

    for(i = 0; i<iSize; i++)
    {
        flag = false;

        for(j =0; j<iSize-i-1;j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        }
        cout << "Data after pass one :: "<< i << "\n";
        Display();
    }
}

template <class T>
void ArrayX <T> :: InsertionSort()
{
    int i=0,j=0, selected = 0;

    for(i=1; i<iSize; i++)
    {
        for(j= i-1; selected = Arr[i]; ((j >= 0) && (Arr[j] > selected));j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the size of Array :: \n";
    cin >> iValue;

    // ArrayX <int> obj(iValue)
    ArrayX<int> *obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->BubbleSort();

    cout << "Data after Sorting :: \n";
    obj->Display();

    obj->InsertionSort();
    

    delete obj;

    return 0;
}
