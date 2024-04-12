#include<iostream>
using namespace std;

// Structure for singly Linear and Singly Circular
template<class T>
struct NodeS
{
    T data;
    struct NodeS *next; 
};

template<class T>
struct NodeD
{
    T data;
    struct NodeS *next;
    struct NodeS *prev; 
};

// class of Singly LL 
template <class T>
class SinglyLL
{
    public: 
        struct NodeS <T>*first;
        int iCount;
    
    void InsertFirst();
    void InserLast();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos();
    void DeleteAtPos();

};

// class of Doubly C LL 
template<class T>
class SinglyCL
{
    public: 
        struct NodeS<T> *first;
        struct NodeS<T> *Tail;

        int iCount;
    
    void InsertFirst();
    void InserLast();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos();
    void DeleteAtPos();

};

template<class T>
class DoublyLL
{
    public: 
        struct NodeS<T> *first;
        struct NodeS<T> *Last;

        int iCount;
    
    void InsertFirst();
    void InserLast();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos();
    void DeleteAtPos();

};


template<class T>
class DoublyCL
{
    public: 
        struct NodeS<T> *head;
        struct NodeS<T> *tail;

        int iCount;
    
    void InsertFirst();
    void InserLast();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos();
    void DeleteAtPos();

};

// Logic of 32 fuctions

int main()
{ 
    SinglyLL <int>obj1;
    return 0;
}