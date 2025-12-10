#include<iostream>
using namespace std;

void Display()                      // call  form line 18 first and rest form line 12 
{
    static int iCnt = 1;            

    if(iCnt <= 4)                       // loop till iCnt  <= 4
    {    
        cout<<"Jay Ganesh...\n";
        iCnt++;
        Display();
    }
    
}
int main()
{
    Display();

return 0;
}