// Doubly linear linked list

import java.util.*;

class Node
{
    public int data;
    public Node next;
    public Node prev;

    // Initialization of Variable
    public Node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL 
{
    public Node first;
    public int iCount;
    
    // Initilization of Variable
    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    
    public void Display()
    {
        System.out.println("Elements of Linked List are : ");

        Node temp = first;

        while(temp != null)
        {
            System.out.print("<-|"+temp.data+" |->");
            temp = temp.next;
        }
        System.out.println();

    }
    public void DisplayReverse()
    {
        System.out.println("Elements of Linked List are : ");

        Node temp = first;

        while(temp.next != null)
        {
            temp = temp.next;
        }

        while(temp != null)
        {
            System.out.print("<-|"+temp.data+" |->");
            temp = temp.prev;
        }

        System.out.println();

    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {   
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        iCount++;
    }

    public void InsertLast(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {   
            Node temp = first;
            
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }

        iCount++;
    }

    public void InsertAtPos(int no,int iPos)
    {
        int iSize = Count();

        if((iPos < 1) || (iPos > iSize +1))
        {
            System.out.println("Invalid Position\n");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(no);
        }
        else if(iPos == iSize+1)
        {
            InsertLast(no);
        }
        else
        {
            Node temp = first;
            for(int iCnt =1; iCnt < iPos-1; iCnt++)
            {
                temp = temp.next;
            }

            Node newn = new Node(no);

            newn.next = temp.next;
            temp.next.prev = newn;

            temp.next = newn;
            newn.prev = temp;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {   
            first = first.next;
            first.prev = null;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            Node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        if(first != null)
        {
            first = first.next;
            iCount--;
        }

        int iSize = Count();

        if((iPos < 1) || (iPos > iSize))
        {
            System.out.println("Invalid Position\n");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iSize)
        {
            DeleteLast();
        }
        else
        {
            Node temp = first;

            for(int iCnt =1; iCnt < iPos-1; iCnt++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;

            iCount--;
        }
}

}

class program421
{
    public static void main(String args[])
    {
        DoublyLL obj = new DoublyLL();
        
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        
        int iRet = obj.Count();
        System.out.println("Number of elements are :: " + iRet);

        obj.InsertAtPos(12,1);
        
        obj.Display();
        
        iRet = obj.Count();
        System.out.println("Number of elements are :: " + iRet);

        obj.DeleteAtPos(1);
        obj.Display();
        
        iRet = obj.Count();
        System.out.println("Number of elements are :: " + iRet);

        obj.DeleteFirst();
        obj.Display();
        
        iRet = obj.Count();
        System.out.println("Number of elements are :: " + iRet);

        obj.DisplayReverse();
    }
}
