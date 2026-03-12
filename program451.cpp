// use of this ->
#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public :
        PNODE first;                                                            // head of main
        PNODE last;
        int iCount;

        SinglyCL()                                                              // constructor
        {
            cout<<"Object of SinglyL gets created.\n";
            this->first = NULL;
            this->last = NULL;
            this->iCount = 0 ;
        }

        void InsertFirst(int no)                // updated code reduction or removal of else if 
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(iCount == 0)
            {
                this->first = newn;
                this->last = newn;
            }
            else
            {
                newn->next = this->first;
                this->first = newn;
            }
            last->next = this->first;
            this->iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(this->iCount == 0)
            {
                this->first = newn;
                this->last = newn;
            }
            else
            {
                this->last->next = newn;
                this->last = newn;
            }
            this->last->next = this->first;
            this->iCount++;
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(this->iCount == 0)
            {
                return ;
            }
            else if(this->first == this->last && this->last == this->first)
            {
                delete(this->first);
                
                this->first = NULL;
                this->last = NULL;
            }
            else
            {
                temp = this->first;

                this->first = this->first->next;

                delete(temp);

                this->last->next = this->first;
            }
            this->iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(this->iCount == 0)
            {
                return ;
            }
            else if(this->first == this->last && this->last == this->first)
            {
                free(this->first);
                
                this->first = NULL;
                this->last = NULL;
            }
            else
            {
                temp = this->first;

                while(temp->next != this->last)
                {
                    temp = temp->next;
                }
                
                free(this->last);
                last = temp;
                this->last->next = this->first;
            }
            this->iCount--;
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = this->first;

            do
            {
                cout<<"| "<<temp->data<<" |"<<"->";
                temp = temp->next;
            }while(temp != last->next);

            cout<<"\n";
            
        }

        int Count()
        {
            return this->iCount;
        }

        void InsertAtPos(int no,int pos)
        {
            int i = 0;
            PNODE newn = NULL;
            PNODE temp = NULL;

            if(pos < 0 )
            {
                return;
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

                newn->next = NULL;
                newn->data = no;

                temp = this->first;

                for(i = 1; i < pos-1; i++)
                {
                    temp = temp->next;
                }

                    newn->next = temp->next;
                    temp->next = newn;
                    this->last->next = this->first;

                    this->iCount++;
            }
        }
        
        void DeleteAtPos(int pos)
        {
            int i = 0;
            PNODE temp = NULL;
            PNODE target = NULL;

            if(pos < 0 )
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
                temp = this->first;

                for(i = 1; i < pos-1; i++)
                {
                    temp = temp->next;
                }
                
                target = temp->next;
                
                temp->next = target->next;
                free(target);

                iCount--;
            }
        }
};

int main()
{

    SinglyCL obj;

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

    obj.InsertAtPos(57,3);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteAtPos(3);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}