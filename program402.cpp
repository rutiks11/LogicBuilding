// Generic LinkList

#include<iostream>
using namespace std;

// T - Template Variable
template <class T>      // Template Header

T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;

    return Ans;
}

int main()
{   
    int Value1 = 10, Value2 =20;

    int Ret = Addition(Value1, Value2);

    cout << "Addition  is : " << Ret << "\n";

    double X= 90.7,Y=78.9, Result = 0.0;
    Result = Addition(X,Y);
    cout << "Addition is : " << Result << "\n";

    float L = 90.7f, M=78.9 , Resultf = 0.0f;
    Resultf = Addition(L,M);
    cout << "Addition is : " << Resultf << "\n";
    
    return 0;
}