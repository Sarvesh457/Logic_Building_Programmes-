#include<iostream>
using namespace std;

void Display()                      // call  form line 18 first and rest form line 12 
{
    static int iCnt = 1;
    auto i = 1;             

    if(iCnt <= 4)                       // loop till iCnt  <= 4
    {    
        cout<<"Jay Ganesh..."<<iCnt<<" "<<i<<"\n";
        iCnt++;
        i++;
        Display();
    }
}

int main()
{
    cout<<"Inside main\n";
    Display();
    cout<<"End of main\n";
    return 0;
}