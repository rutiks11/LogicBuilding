// Data Structure - Doubly Linear Linked List

#include<stdio.h>   // Standard Input Output function
#include<stdlib.h>  // library for calloc and malloc 

// Declaring the Structure
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      // #

}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // Pointer to create node
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(PNODE));

    newn->prev = NULL;      // #
    newn->data = No;
    newn->next = NULL;

    if((*Head) == NULL)     // Linked List is empty
    {
        *Head = newn;
    }
    else                    // LL contains atleast one node
    {
        (*Head)->prev = newn; // First two line sequence is not important
        newn->next = (*Head);
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(PNODE));

    newn->prev = NULL;      // #
    newn->data = No;
    newn->next = NULL;

    if((*Head) == NULL)     // Linked List is empty
    {
        *Head = newn;
    }
    else                    // LL contains atleast one node
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)       // LL is Empty
    {
        return;
    }
    else if((*Head)->next == NULL)    // LL contain one Node
    {   
        free(*Head);
        *Head = NULL;
    }
    else    
    {
        *Head = (*Head)->next;      // If LL is contain more than one node
        free((*Head)->prev);        // Without temperary Pointer because we have prev that contains address of first Node
        (*Head)->prev = NULL;       // Sequence is imp
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)       // LL is Empty
    {
        return;
    }
    else if((*Head)->next == NULL)    // LL contain one Memory
    {   
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp ->next ->next)
        {
            temp = temp->next;
        }  
        
        free(temp->next);
        temp->next = NULL;    
    }
}


void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");
    printf("NULL <=>");

    while (Head != NULL)
    {
        printf("| %d | <=> ", Head->data);
        Head = Head->next;        
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
    {
        iCount++;
        Head = Head->next;        
    }
    return iCount;
}

void InsertAtPos(PPNODE Head, int iPos, int No)
{
    int iLength = 0;
    int iCnt = 0;
    PNODE newn = NULL;
        
    PNODE temp = *Head;

    iLength = Count(*Head); 

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == iLength+1)
    {   
        InsertLast(Head,No);
    }   
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE temp = *Head;

        newn = (PNODE)malloc(sizeof(PNODE));

        newn->prev = NULL;      // #
        newn->data = No;
        newn->next = NULL;  

        newn->next = temp->next;    //
        temp->next->next = newn;    // #  
        temp->next = newn;          //
        newn->prev = temp;          // #
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    int iCnt = 0;
    PNODE temp = *Head;
    
    iLength = Count(*Head); 

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iLength+1)
    {   
        DeleteLast(Head);
    }   
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    iRet = Count(First);
    printf("Number of elements are : %d \n",iRet);

    Display(First);
    
    InsertAtPos(&First,55,4);
    
    Display(First);

    DeleteAtPos(&First,4);
    
    iRet = Count(First);
    printf("Number of elements are : %d \n",iRet);   
    
    Display(First);

    DeleteFirst(&First);
    DeleteLast(&First);


    Display(First);

    return 0;
}