#include<iostream>

using namespace std;

class Arithmetic
{
    private:
        int iNo1,iN02;

    public:
        Arithmetic(int A, int B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }

        int Addition()
        {
            return iNo1+iNo2;
        }

        int Subtraction()
        {
            return iNo1-iNo2;
        }
};

// error
        Arithmetic(int A, int B);

        int Addition();

        int Subtraction();
int main()
{
    Arithmetic aboj(11,10);

    cout<<aobj.Addition<<"\n";
    cout<<aobj.Subtraction<<"\n";


    return 0;
}