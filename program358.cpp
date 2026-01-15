using namespace std;

#include<iostream>

inline int Addition(int A,int B)                //requeest
{
    return A+B;
}

int main()
{
    int Ret = 0;

    Ret = Addition(10,11);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;

}