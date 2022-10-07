#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int pin,i=0;
    cout<<"Enter the pin code"<<endl;
    cin>>pin;
    try
    {
        while(pin)
        {
            pin/=10;
            i++;
        }
        if(i!=6)
            throw "pin not correct";
        else
        cout<<"pin correct";
    }
    catch(const char *t)
    {
        cout<<t;
    }
    getch();
    return 0;
}
