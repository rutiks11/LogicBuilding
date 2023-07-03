#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data =  No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;
    }

    (*Tail)->next = *Head; // Circular Nature cha sentence
    (*Head)->prev = *Tail;
}

void Display(PNODE Head, PNODE Tail)
{
    if((Head != NULL) && (Tail != NULL))
    {
        printf("<=> ");
        do
        {
            printf("| %d | <=>", Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
        
        printf("\n");
    }
    else
    {
        printf("Linked List is Empty\n");
    }
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,&Last,101);
    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Display(First,Last);

    return 0;
}