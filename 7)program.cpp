#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    string name;
    int s=0,d=0,i=0;
    cout<<"Enter username"<<endl;
    cin>>name;
    try
    {
        for(i=0;name[i];i++)
        {
            if(name[i]>='0'&&name[i]<='9')
                d=1;
            else if(name[i]>='A' && name[i]<='Z' || name[i]>='a' && name[i]<='z')
                continue;
            else
                s=1;
        }

        if(i<6)
           throw "string is less than 6 character";
        else if(d==0)
            throw "String has no digit";
        else if(s==0)
            throw "String has no special symbol";
        else
         cout<<"The string is correct";
    }
    catch(const char *t)
    {
        cout<<t;
    }
    getch();
    return 0;
}
