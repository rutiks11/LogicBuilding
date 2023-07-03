///////////////////////////////////////////////////////////////////
//                  DATA STRUCTURE FIRST CODE                    //   
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PNODE First = NULL;

    struct Node sobj1;
    struct Node sobj2;
    struct Node sobj3;

    sobj1.Data = 10;
    sobj1.next = &sobj2; 
    
    sobj2.Data = 20;
    sobj1.next = &sobj2; 
    
    return 0;
}