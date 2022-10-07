#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    string name;
    int i,c=0,d=0,s=0;
    cout<<"Enter the password"<<endl;
    cin>>name;
    try{
        for(i=0;name[i];i++)
        {
            if(name[i]>='0'&&name[i]<='9')
                d=1;
            else if(name[i]>='A' && name[i]<='Z')
                c=1;
            else if(name[i]>='a' && name[i]<='z')
                continue;
            else
                s=1;
        }
        if(i<6)
            throw "string has 6 character";
        else if(d==0)
           throw "string has no digit";
        else if(c==0)
            throw "String has no capital letter";
        else if(s==0)
            throw "String has no special symbol";
        else
            cout<<"String is correct";
    }
    catch(const char *t)
    {
        cout<<t;
    }
    getch();
    return 0;
}
