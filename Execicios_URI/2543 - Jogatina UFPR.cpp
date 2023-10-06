#include <iostream>
using namespace std;
int main()
{
  int X,Y,Z,W,cont=0;
  while(cin>>X>>Y)
  {
     for(int i=0;i<X;i++)
     {
       cin>>Z>>W;
       if(Z==Y && W==0)cont++;
     }
     cout<<cont<<endl;
     cont=0;
  }
   
}