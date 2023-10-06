#include <iostream>
#include <vector>
using namespace std;
int main()
{
  long long int X,Y=0,N=0,l;
  vector<long long int >L;
  cin>>X;
  for (int i = 0; i < X; i++)
  {
    cin>>l;
    L.push_back(l);
    if(L[i]==0)
    {
      Y++;
    }
    else
    {
      N++;
    }
  }
  if(N==Y || Y==0 || N>Y)
  {
   cout<<'N'<<endl;
  }
  else
  {
   if(N==0 || Y>N)
   {
      cout<<'Y'<<endl;
   }
  } 
}