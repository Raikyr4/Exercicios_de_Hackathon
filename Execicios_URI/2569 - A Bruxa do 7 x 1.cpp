#include <vector>
#include <iostream>
using namespace std;
int main()
{
   int X,Y,S;
   char op;
   vector <int> Px,Py;
   cin>>X>>op>>Y;
   int ax=0,ay=0,x,y;
   string K,L;
   K=to_string(X);
   L=to_string(Y);
   y=L.size();
   x=K.size();
   
   while(x || y)
   {
      if(x)
      {
         Px.push_back(X%10);
         X/=10;
         x--;
      }
      if(y)
      {
         Py.push_back(Y%10);
         Y/=10;
         y--;
      }
   }
   for(int i=Px.size()-1;i>=0;i--)
   {
      if(Px[i]!=7)
      {
         ax=(10*ax)+Px[i];
      }
      else
      {
         ax=(10*ax)+0;
      }
   }
    for(int ii=Py.size()-1;ii>=0;ii--)
   {
      if(Py[ii]!=7)
      {
         ay=(10*ay)+Py[ii];
      }
      else
      {
         ay=(10*ay)+0;
      }
   }
   X=ax;Y=ay;//cout<<X<<" "<<Y<<endl;
   if(op=='+')S=X+Y;
   else S=X*Y;
   int aux=0;
   Px.clear();
   string O;
   int s;
   O=to_string(S);
   s=O.size();
   while(s)
   {
      Px.push_back(S%10);
      S/=10;
      s--;
   }
   for(int i=Px.size()-1;i>=0;i--)
   {
      if(Px[i]!=7)
      {
         aux=(10*aux)+Px[i];
      }
      else
      {
         aux=(10*aux)+0;
      }
   }
   cout<<aux<<endl;
}