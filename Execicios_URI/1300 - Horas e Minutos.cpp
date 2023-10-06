#include <iostream>
using namespace std;
int main()
{
   int X;
   while(cin>>X)
   {
      if(X%6==0)cout<<'Y'<<endl;
      else cout<<'N'<<endl;
   }
}