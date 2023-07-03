//////////////////////////////////////////////////////////////////
//            Singly Linear LL     
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;       // Characteristics
        int iCount;        // Characteristics 
    
    public:
        
        SinglyLL();
        ~SinglyLL();
        
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

// Implementation of all behaviours

/*
    Rreturn_Value Class_Name :: Function_Name(Parameters_List)
    {
        Function_Body;
    }
*/

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)  // LL is empty
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    int iCnt = 0;

    newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)  // LL is empty
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;
        
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount +1)
    {
        InsertLast(iNo);
    }
    else
    {
    
    PNODE temp = First;

    for(int iCnt =1; iCnt < iPos-1; iCnt++)
    {
        temp = temp->next;
    }

    PNODE newn = new NODE;
    
    newn->data = iNo;
    newn->next = NULL;

    newn->next = temp->next;
    temp->next = newn;
    }
}

void SinglyLL :: DeleteFirst()
{

    if(First == NULL)   // Empty LL
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;   // Free(First)
        First = NULL;
    }
    else    // More than one node in LL
    {
        PNODE temp = First;

        First = First->next;
        delete temp;
    }

    iCount--;
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)   // Empty LL
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;   // Free(First)
        First = NULL;
    }
    else    // More than one node in LL
    {
        PNODE temp = First;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }   
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE tempX = temp->next;

        temp->next = temp->next->next;
        delete tempX;

        iCount--;
    }
}

int SinglyLL :: Count()
{
    return iCount;
}

void SinglyLL :: Display()
{
    PNODE temp = First;
    
    cout << "Elements of Linked List are : " << "\n";

    while (temp != NULL)
    {
        cout << "| " << temp->data << " |->";
        temp = temp->next;
    }
    cout << "NULL" << "\n";
    
}

SinglyLL :: SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0 ;
}


SinglyLL :: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

int main()
{
    int iRet = 0;

    SinglyLL obj1;
    SinglyLL obj2;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertFirst(101);
    obj1.InsertFirst(111);
    
    obj1.Display();  
    iRet = obj1.Count();

    cout << "Number of elements are : " << iRet << "\n";

    obj2.InsertFirst(20);
    obj2.InsertFirst(10);
    obj2.InsertFirst(30);


    obj2.Display();
    iRet = obj2.Count();

    cout << "Number of elements are : " << iRet << "\n";

    obj1.InsertAtPos(51,3);
    obj1.Display();

    obj1.DeleteAtPos(3);
    obj1.Display();

    obj1.DeleteFirst();
    obj1.DeleteLast();
    
    obj1.Display();
    iRet = obj1.Count();

    cout << "Number of elements are : " << iRet << "\n";
    

    return 0;
}
