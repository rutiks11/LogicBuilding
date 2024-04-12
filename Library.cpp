// STL data structure

#include<iostream>
using namespace std;

// Structure for singly linear and singly circular
template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

// Structure for doubly linear and singly circular
template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

// Class of singly linear Linked list
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * first;
        int iCount;

    SinglyLL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

// Class of singly circular Linked list
template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> * first;
        struct NodeS<T> * last;
        int iCount;

    SinglyCL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

// Class of doubly linear Linked list
template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> * first;
        int iCount;

    DoublyLL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int); 
};

// Class of doubly cicular Linked list
template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> * first;
        struct NodeD<T> * last;
        int iCount;

    DoublyCL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

// Logic of 32 functions

///////////////////////////////////////////////////////////
//                     Singly Linear LL
///////////////////////////////////////////////////////////

template <class T>
SinglyLL <T>::SinglyLL()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements of Singly Linear Linked list are : "<<"\n";

    NodeS<T> * temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        NodeS<T> *temp = first;

        while(temp->next != NULL)
        {
            temp= temp -> next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        first = first->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
        if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        while(temp ->next -> next!= NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{   
    int iCount = Count();

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        NodeS<T> * temp = first;
        NodeS<T> * newn = new NodeS<T>;

        newn-> data = no;
        newn-> next = NULL;

        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp -> next = newn;
        
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int iCount = Count();

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

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
        NodeS<T> * temp1 = first;
        NodeS<T> * temp2 = NULL;

        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next->next;
        delete temp1->next;
        temp1->next = temp2;
        
        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//                  Singly Circular LL
/////////////////////////////////////////////////////////////
template <class T>
SinglyCL <T>::SinglyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL <T>::Display()
{
    cout<<"Elements of Singly Circular Linked list are : "<<"\n";

    NodeS<T> *temp = first;
    
    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout << " | " << temp->data << "|->";
        temp = temp->next;
    }
    cout << "NULL" << "\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last ==NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last ==NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {   
        last->next = newn;
        last = last->next;
    }
    last->next = first;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T no, int iPos)
{
    if((iPos < 1 ) || (iPos > (iCount +1)))
    {
        cout << "Invalid Position " << "\n";
        return;
    }

    if(iPos ==1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(no);
    }
    else 
    {
        NodeS<T> * temp = first;
        NodeS<T> * newn = new NodeS<T>;

        newn-> data = no;
        newn-> next = NULL;

        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp -> next = newn;
        
        iCount++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete(last->next);
        last->next = first;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
       NodeS<T> * temp = first;

       for(int iCnt=1; iCnt < (iCount-1); iCnt++)
       {
            temp = temp->next;
       }
       delete last;
       last = temp;
       last->next = first;
    }   
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1 ) || (iPos > (iCount)))
    {
        cout << "Invalid Position " << "\n";
        return;
    }

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
        NodeS<T> * temp = first;
        
        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        NodeS<T> *tempX = temp->next; 
        
        temp->next = temp->next->next;
        delete tempX;

        iCount--;
    }
}

///////////////////////////////////////////////////////////////////////
//                      Doubly Linear Linked List
///////////////////////////////////////////////////////////////////////

template<class T>
DoublyLL<T>::DoublyLL()
{
    first = NULL;
    iCount = 0;
}

template<class T>
void DoublyLL<T>::Display()
{
    NodeD<T> * temp = first;

    cout << "Elements of Doubly Linear Linked list are :: " << "\n";

    cout << "NULL <=>";

    while (temp != NULL)
    {
        cout << " | " << temp->data << " | <=>";
        temp = temp->next;
    }
    cout << "NULL \n";    
}

template<class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
    NodeD<T> *newn = new NodeD<T>;  

    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;
    
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        first->prev = newn;
        newn->next = first;
        first = newn;
    }
    iCount++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
    NodeD<T> *newn = new NodeD<T>;  

    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;
    
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        NodeD<T> *temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template<class T>
void DoublyLL<T>::InsertAtPos(T no, int iPos)
{
    if((iPos < 0) || (iPos > iCount+1))
    {
        cout << "Invalid Position " << "\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == (iCount+1))
    {
        InsertLast(no);
    }
    else
    {
        NodeD<T> *temp = first;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        { 
            temp = temp->next;
        }       
        
        NodeD<T> *newn  = new NodeD<T>;
        
        newn->next = NULL;
        newn->data = no;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;

        newn->prev = temp;
        temp->next = newn;
    
        iCount++;
    }
}

template<class T>    
void DoublyLL<T>::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next ==  NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
    iCount--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next ==  NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeD<T> * temp = first;

        for(int iCnt =1; iCnt < (iCount-1); iCnt++)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 0) || (iPos > iCount+1))
    {
        cout << "Invalid Position " << "\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iCount))
    {
        DeleteLast();
    }
    else
    {
        NodeD<T> *temp = first;

        for(int iCnt = 1; iCnt < (iPos-1); iCnt++)
        { 
            temp = temp->next;
        }       
        
        temp->next = temp->next->next;
        delete (temp->next->prev);
        temp->next->prev = temp;

        iCount--;
    }
}

///////////////////////////////////////////////////////////////////////
//                      Doubly Linear Linked List
///////////////////////////////////////////////////////////////////////
template<class T>
DoublyCL<T>::DoublyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

template<class T>
void DoublyCL<T>::Display()
{   
    NodeD<T> * temp = first;

    cout << "Elements of Linked List are :: "  <<"\n";

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout << " | " << temp->data << " |-> ";
        temp = temp->next;
    }
    cout << "NULL" << "\n";
}

template<class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template<class T>
void DoublyCL<T>::InsertFirst(T no)
{
    NodeD<T> *newn = new NodeD<T>;     

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next =  first;
        first->prev = newn;
        first = newn;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

template<class T>
void DoublyCL<T>::InsertLast(T no)
{
    NodeD<T> *newn = new NodeD<T>;     

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {   
        last->next = newn;
        newn->prev = last;
        last = last->next;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

template<class T>
void DoublyCL<T>::InsertAtPos(T no, int iPos)
{   
    if((iPos < 0) || (iPos < iCount+1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == (iCount+1))
    {
        InsertLast(no);
    }
    else
    {
        NodeD<T>* temp = first;

        for(int iCnt =1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        NodeD<T> *newn = new NodeD<T>;

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template<class T>   
void DoublyCL<T>::DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;

        first->prev = last;
        last->next = first;
    }
    iCount--;
}

template<class T>
void DoublyCL<T>::DeleteLast()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;

        first->prev = last;
        last->next = first;
    }

    iCount--;
}

template<class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
     if((iPos < 0) || (iPos < iCount+1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iCount+1))
    {
        DeleteLast();
    }
    else
    {
        NodeD<T>* temp = first;

        for(int iCnt =1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }

}

int main()
{
    SinglyLL <int>obj1;
    SinglyCL <int>obj11;
    DoublyLL <int>obj21;
    DoublyLL <int>obj51;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.InsertAtPos(55,4);
    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    obj1.DeleteAtPos(4);
    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    SinglyLL <char>obj2;

    obj2.InsertFirst('C');
    obj2.InsertFirst('B');
    obj2.InsertFirst('A');

    obj2.InsertLast('D');
    obj2.InsertLast('E');

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";


    SinglyLL <double>obj3;

    obj3.InsertFirst(90.90);
    obj3.InsertFirst(80.80);
    obj3.InsertFirst(70.70);

    obj3.InsertLast(60.60);
    obj3.InsertLast(50.50);

    obj3.Display();
    cout<<"Number of elements are : "<< obj3.Count()<<"\n";

    obj11.InsertFirst(51);
    obj11.InsertFirst(21);
    obj11.InsertFirst(11);

    obj11.Display();

    cout<<"Number of elements are : "<<obj11.Count()<<"\n";
    
    obj11.InsertLast(60.60);
    obj11.InsertLast(50.50);

    obj11.Display();
    cout<<"Number of elements are : "<< obj11.Count()<<"\n";

    obj11.InsertAtPos(55,4);
    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

    obj11.DeleteFirst();
    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

    obj11.DeleteLast();
    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";
    
    obj11.DeleteAtPos(2);
    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";
    

    obj21.InsertFirst(51);
    obj21.InsertFirst(21);
    obj21.InsertFirst(11);

    obj21.Display();

    cout<<"Number of elements are : "<<obj21.Count()<<"\n";

    obj21.InsertLast(60);
    obj21.InsertLast(50);

    obj21.Display();
    cout<<"Number of elements are : "<< obj21.Count()<<"\n";

    obj21.InsertAtPos(11,5);
    obj21.InsertAtPos(21,6);

    obj21.Display();
    cout<<"Number of elements are : "<< obj21.Count()<<"\n";

    obj21.DeleteFirst();
    obj21.DeleteLast();
    obj21.DeleteAtPos(2);

    obj21.Display();
    cout<<"Number of elements are : "<< obj21.Count()<<"\n";

    obj51.InsertFirst(51);
    obj51.InsertFirst(21);
    obj51.InsertFirst(11);

    obj51.InsertLast(101);
    obj51.InsertLast(111);
    obj51.InsertAtPos(22,2);
    
    obj51.Display();
    cout<<"Number of elements are : "<< obj21.Count()<<"\n";

    obj51.DeleteFirst();
    obj51.DeleteLast();
    obj51.DeleteAtPos(2);

    obj51.Display();
    cout<<"Number of elements are : "<< obj51.Count()<<"\n";


    return 0;
}