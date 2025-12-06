#include<iostream>

// oop approach

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
    Arithmetic aobj(11,10);

    cout<<aobj.Addition()<<"\n";
    cout<<aobj.Subtraction()<<"\n";
    return 0;
}
