#include <iostream>
using namespace std;
int main()
{
   int X,Y,Z;
   while(cin>>X>>Y>>Z)
   {
      if(X==0 && Y==0 && Z==0 || X==1 && Y==1 && Z==1)
      {
         cout<<'*'<<endl;
      }
      else
      {
         if(X==1 && Y==0 && Z==0 || X==0 && Y==1 && Z==1)
         {
            cout<<'A'<<endl;
         }
         else
         {
            if(X==0 && Y==1 && Z==0 || X==1 && Y==0 && Z==1)
            {
               cout<<'B'<<endl;
            }
            else
            {
               cout<<'C'<<endl;
            }
         }
      }
   }
 
   
}
