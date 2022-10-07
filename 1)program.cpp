#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw "second value cannot be zero";
        }
        if(b==1)
        {
          throw b;
        }
        cout<<"division is "<<a/b;
    }
    catch(const  char *b)
    {
        cout<<b;
    }
    catch(const int s)
    {
        cout<<s<<" value is not allowed";
    }
    getch();
    return 0;
}


