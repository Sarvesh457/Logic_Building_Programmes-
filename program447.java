// Singly Circular
class node
{
    public int data;
    public node next;                       // self referential class

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCL
{
    private node first;
    private node last;

    private int iCount;

    public SinglyCL()
    {
        System.out.println("Object of SinglyLL gets created");
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
                first = newn;
            }
        
            last.next = first;
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
                last = newn;  
            }
            last.next = first;
            iCount++;
    }


    public void DeleteFirst()
    {
        if(first == null && last == null)
            {
                return;
            }
        else if(first == last)
            {
                first = null;
            }
        else
            {
                first = first.next;
                last.next = first;
            }
            System.gc();
            iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;

        if(first == null && last == null)
            {
                return;
            }
        else if(first == last)
            {
                first = null;
            }
        else
            {
                temp = first;

                while(temp.next != last)
                {
                    temp = temp.next;
                }
                last = null;
                last = temp;
            }
            System.gc();
            iCount--;
    }

    public void Display()
    {
        node temp = null;
        int iCnt = 0;
        temp = first;

        for(iCnt = 1;iCnt <= iCount;iCnt++)
            {
                System.out.print("| "+temp.data+" |->");
                temp = temp.next;
            }
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
        
        if(pos < 1 || pos > iCount+1)
            {
                return ;
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
                newn = new node(no);

                temp = first;

                for(iCnt = 1 ; iCnt < pos-1;iCnt++)
                {
                    temp = temp.next;
                }
                newn.next = temp.next;
                temp.next = newn;
                iCount++;
            }
            last.next = first;
    }

    public void DeleteAtPos(int pos)
    {
        node target = null;
        node temp = null;
        int iCnt = 0;
        
        if(pos < 1 || pos > iCount+1)
            {
                return ;
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

                for(iCnt = 1;iCnt < pos-1 ;iCnt++ )
                    {
                        temp = temp.next;
                    }
                
                target = temp.next;
                temp.next = target.next;
                target = null;
                System.gc();
                iCount--;
            }
    }

}

class program447
{
    public static void main(String A[])
    {
        SinglyCL obj = null;
        int iRet = 0;

        obj  = new SinglyCL();

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

        obj.InsertAtPos(57,3);

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