#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int i=0;
    long int n;
    cout<<"Enter mobile number";
    cin>>n;
    try{
        cout<<n;
       while(n)
       {
           n/=10;
           i++;
       }
       if(i!=10)
           throw "number is not correct";
       else{
            cout<<i<<endl;
            cout<<"number is correct";
       }
    }
    catch(const char *s)
    {
        cout<<s;
    }
    getch();
    return 0;

}
