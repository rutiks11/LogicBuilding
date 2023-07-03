#include <iostream>

struct Node
{
    int iNo;
    struct Node *next;
};

int main()
{
    struct Node sobj;
    struct Node sobj1;
    struct Node sobj2;

    struct Node *Head = &sobj;
    
    sobj.iNo = 11;
    sobj1.next = &sobj1;

    sobj1.iNo = 21;
    sobj1.next = &sobj2;

    sobj2.iNo = 51;
    sobj2.next = &sobj1;
    
    return 0;
}