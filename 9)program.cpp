#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    string email;
    int i,u=0;
    cout<<"Enter email id"<<endl;
    cin>>email;
    try
    {
        for(i=0;email[i];i++)
        {
            if(email[i]=='@')
                u=1;
        }
        if(u==0)
            throw "email id does not contain '@'";
        else
            cout<<"Email id is contain '@'";
    }
    catch(const char *t)
    {
        cout<<t;
    }
    getch();
    return 0;
}
