// Doubly Linear Linked List

class node
{
    public int data;
    public node next;
    public node prev;

    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    private node first;
    private int iCount;

    public DoublyLL()
    {
        System.out.println("Object of DoublyLL gets created");
        first = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(first != null)
        {
            newn.next = first;
            first.prev = newn;
        }
        first = newn;
        iCount++;
    }

    public void Insertlast(int no)
    {
        node newn = new node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
        iCount++;
    }

    public void DeleteFirst()
    {
        if(first == null)
            return;

        if(first.next == null)
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

        if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

    public void InsertAtPos(int no, int pos)
    {
        if(pos < 1 || pos > iCount + 1)
            {
            return;
            }

        if(pos == 1)
            {
            InsertFirst(no);
            }
        else if(pos == iCount + 1)
            {
            Insertlast(no);
            }
        else
            {
            node newn = new node(no);
            node temp = first;

            for(int i = 1; i < pos - 1; i++)
                {
                temp = temp.next;
                }

            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;

            iCount++;
            }
    }

    public void DeleteAtPos(int pos)
    {
        if(pos < 1 || pos > iCount)
            {
            return;
            }

        if(pos == 1)
            {
            DeleteFirst();
            }
        else if(pos == iCount)
            {
            DeleteLast();
            }
        else
        {
            node temp = first;

            for(int i = 1; i < pos; i++)
                temp = temp.next;

            temp.prev.next = temp.next;
            temp.next.prev = temp.prev;

            iCount--;
        }
    }

    public void Display()
    {
        node temp = first;
        while(temp != null)
        {
            System.out.print("| " + temp.data + " |<=>");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public int Count()
    {
        return iCount;
    }
}

class program450
{
    public static void main(String A[])
    {
        DoublyLL obj = new DoublyLL();
        int iRet  = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        obj.Insertlast(101);
        obj.Insertlast(111);
        obj.Insertlast(121);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        obj.DeleteFirst();
        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        obj.DeleteLast();
        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        obj.InsertAtPos(57, 2);
        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        obj.DeleteAtPos(2);
        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        System.out.println("Total nodes: " + obj.Count());
    }
}
