#include<iostream>

using namespace std;

void auto_Demo()
{
    auto i = 1;
    cout<<"auto_Demo : "<<i<<"\n";
    i++;
}

void static_Demo()
{
    static int i = 1;
    cout<<"static_Demo : "<<i<<"\n";
    i++;
}
int main()
{
    auto_Demo();
    auto_Demo();
    auto_Demo();
    auto_Demo();

    static_Demo();
    static_Demo();
    static_Demo();
    static_Demo();

return 0;
}