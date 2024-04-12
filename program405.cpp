// Call by reference

#include<iostream>
using namespace std;

void Swap(double &No1, double &No2)
{
    double Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;

}
void Swap(int &No1, int &No2)
{
    int Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;

}

int main()
{   
    int A = 10, B =20;
    
    Swap(A,B);

    cout << "Data after Swapping : " << "\n";
    cout << "Value of A is " << A << "\n";
    cout << "Value of A is " << B << "\n";

    double X = 10.89, Y= 11.67;
    Swap(X,Y);

    cout << "Data after Swapping : " << "\n";
    cout << "Value of A is " << X << "\n";
    cout << "Value of A is " << Y << "\n";

    return 0;
}