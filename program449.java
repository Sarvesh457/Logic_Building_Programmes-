// Doubly Circular
class node
{
    public int data;
    public node next;                       // self referential class
    public node prev;

    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyCL
{
    private node first;
    private node last;

    private int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL gets created");
        this.first = null;
        this.last = null;

        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        newn = new node(no);

        if(first == null && last == null)
            {
                first = newn;
                last = newn;
            }
        else
        {
                newn.next = first;
                first.prev = newn;
                first = newn;
            }
        last.next = first;
        first.prev = last;
        
        iCount++;
    }

    public void Insertlast(int no)
    {
        node newn = null;
        newn = new node(no);

        if(first == null && last == null)
            {
                first = newn;
                last = newn;
            }
        else
            {
                last.next = newn;
                newn.prev = last;
                last = newn;
            }
        last.next = first;
        first.prev = last;
        
        iCount++;
    }


    public void DeleteFirst()
    {
        if(first == null && last == null)
            {
                return ;
            }
        
        if(first == last)
            {
                first = null;
                last = null;
            }
        else
            {
                first = first.next;
                last.next = first;
                first.prev = last;
            }

            

            System.gc();
            iCount--;
        
    }

    public void DeleteLast()
    {
        if(first == null && last == null)
        {
            return ;
        }
    
    if(first == last)
        {
            first = null;
            last = null;
        }
    else
        {
            last = last.prev;
            last.next = first;
            first.prev = last;
        }
        

        System.gc();
        iCount--;
    }


    public void Display()
    {
        node temp = null;

        temp = first;

        do
        {
            System.out.print("| "+temp.data+" |<=>");
            temp = temp.next;
        }while(temp != last.next);

        System.out.println("");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertAtPos(int no,int pos)
    {
        node newn = null;
        node temp = null;
        int iCnt = 0;
        
        newn = new node(no);

        if(pos < 1 || pos > iCount +1)
            {
                System.out.println("Invalid Position");
                return;
            }
        if(pos == 1)
            {
                InsertFirst(no);
            }
        else if(pos == iCount+1)
            {
                Insertlast(no);
            }
        else
        {
            temp = first;

            for(iCnt = 1;iCnt < pos-1;iCnt++)
                {
                    temp = temp.next;
                }
            
                newn.next = temp.next;
                newn.next.prev = newn;
                temp.next = newn;
                newn.prev = temp;
            
                iCount++;
        }
    }

    public void DeleteAtPos(int pos)
    {
        node temp = null;
        int iCnt = 0;

        if(pos < 1 || pos > iCount)
            {
                System.out.println("Invalid Position");
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
            temp = first;

            for(iCnt = 1;iCnt < pos-1;iCnt++)
                {
                    temp = temp.next;
                }

            temp.next = temp.next.next;
            temp.next.prev = temp;

            System.gc();
            iCount--;
        }
    }
}

class program449
{
    public static void main(String A[])
    {
        DoublyCL obj = null;
        int iRet = 0;

        obj  = new DoublyCL();

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

        obj.InsertAtPos(57, 3);

        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        obj.DeleteAtPos(3);

        obj.Display();

        iRet = obj.Count();

        System.out.println("The number of node are : "+iRet);

        //important of memory deallocation
        obj = null;
        System.gc();
    }
}