#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int j=0;
    char email[25];
    cout<<"Enter email id ";
    cin>>email;
    try{
      for(int i=0;email[i];i++)
      {
          if(email[i]=='@'){
              j++;
              break;
          }
      }

      if(!j)
        throw "email id does not contain @";
      else
        cout<<"Email id is correct";

    }
    catch(const char *h)
    {
        cout<<h;
    }
    getch();
    return 0;
}
