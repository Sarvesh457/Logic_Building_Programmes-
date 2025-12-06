#include<iostream>

// oop approach generic

using namespace std;

template<class T>

class Arithmetic
{
    public:
        T No1;
        T No2;

    Arithmetic(T a ,T b)
    {
        No1 = a;
        No2 = b;
    }

    T Addition()
    {
        T Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    T Subtraction()
    {
        T Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
};

int main()
{
    Arithmetic <int> aobj1(11,10);            //change
    Arithmetic <double> aobj2(101.5,50.3);    //change        
    
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Subtraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";
    return 0;
}