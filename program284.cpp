#include<iostream>

using namespace std;
void Display()
{
    int iCnt = 0;

    iCnt = 1;
    while (iCnt <= 4)
    {    
        cout<<"Jay Ganesh...\n";
        Display();
    }
    
}
int main()
{
    Display();

return 0;
}