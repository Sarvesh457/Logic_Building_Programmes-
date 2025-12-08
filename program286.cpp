#include<iostream>

using namespace std;
void Display()
{
    auto int iCnt = 0;               //auto storage class   // issue of version cpp 11

    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();
    
}
int main()
{
    Display();

return 0;
}