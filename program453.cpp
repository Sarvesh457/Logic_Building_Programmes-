#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    public :
        PNODE first;                                                            // head of main
        int iCount;

        DoublyLL()                                                              // constructor
        {
            cout<<"Object of DoublyLL gets created.\n";
            this->first = NULL;
            this->iCount = 0 ;
        }

        void InsertFirst(int no)                // updated code reduction or removal of else if 
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->prev = NULL;
            newn->data = no;
            newn->next = NULL;

            if(iCount == 0)
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

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new NODE;

            newn->prev = NULL;
            newn->data = no;
            newn->next = NULL;

            if(iCount == 0)
            {
                first = newn;
            }
            else
            {
                temp = first;
                
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                
                temp->next = newn;
                newn->prev = temp;
            }
            iCount++;
        }
        

        void DeleteFirst()
        {
            if(first == NULL)
            {
                return ;
            }
            else if(first->next == NULL)
            {
                delete(first);
                first = NULL;
            }
            else 
            {
                first = first->next;
                delete(first->prev);
            }
            
        iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(iCount == 0)
            {
                return ;
            }
            else if(first->next == NULL)
            {
                delete(first);
                first = NULL;            
            }
            else
            {
                temp = first;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                
                delete(temp->next);
                temp->next = NULL;
            }
            iCount--;
        }


        void Display()
        {
            PNODE temp = NULL; 
            int i = 0;

            temp = first;

            for(i = 1;i <= iCount;i++)
            {
                cout<<"| "<<temp->data<<"|<=>";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no,int pos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
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
                InsertLast(no);
            }
            else
            {
                newn = new NODE;
                
                temp = first;
                
                newn->next = NULL;
                newn->data = no;
                newn->prev = NULL;

                for(iCnt = 1;iCnt < pos-1; iCnt++)
                {
                    temp = temp->next;
                }
                newn->next = temp->next;
                newn->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;

                iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;
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

                for(iCnt = 1;iCnt < pos-1;iCnt++)
                {
                    temp = temp->next;
                }
                
                target = temp->next;

                temp->next = target->next;
                temp->next->prev = temp;
                
                delete(target);

                iCount--;
            }
        }

};


int main()
{

    DoublyLL obj;

    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n"; 

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n"; 

    obj.DeleteFirst();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n"; 

    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertAtPos(1,3);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteAtPos(3);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}