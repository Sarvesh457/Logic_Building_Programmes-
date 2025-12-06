
#include<iostream>

// oop approach specfic

using namespace std;


class Arithmetic
{
    public:
        int No1;
        int No2;

    Arithmetic(int a ,int b)
    {
        No1 = a;
        No2 = b;
    }

    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    int Subtraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
};

int main()
{
    Arithmetic aobj1(11,10);
    Arithmetic aobj2(101,50);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Subtraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";
    return 0;
}