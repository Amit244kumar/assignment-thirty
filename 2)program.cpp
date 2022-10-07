#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
     int m;
     cout<<"Enter your marks"<<endl;
     cin>>m;
     try{
         if(m<=33)
            throw "you are fail";
         cout<<"you are pass";
     }
     catch(const char *a)
     {
         cout<<a;
     }

     getch();
     return 0;
}


