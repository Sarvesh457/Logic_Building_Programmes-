#include<iostream>

using namespace std;

class Arithmetic
{
    private:
        int iNo1,iNo2;

    public:
    Arithmetic(int A, int B);

        int Addition();

        int Subtraction();
};
Arithmetic :: Arithmetic(int A, int B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }

        int Arithmetic::Addition()
        {
            return iNo1+iNo2;
        }

        int Arithmetic::Subtraction()
        {
            return iNo1-iNo2;
        }
        
int main()
{
    Arithmetic aobj(11,10);

    cout<<aobj.Addition<<"\n";
    cout<<aobj.Subtraction<<"\n";

    return 0;
}