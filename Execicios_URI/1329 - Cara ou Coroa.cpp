#include <iostream>
 
using namespace std;
 
int main() {
 
  int X;
  while(cin>>X && X)
  {
      int Y[X],cont=0,contu=0;
      for(int i=0;i<X;i++)
      {
          cin>>Y[i];
          if(Y[i]==0)
          {
              cont++;
          }
          else
          {
              contu++;
          }
      }
      cout<<"Mary won "<<cont<<" times and John won "<<contu<<" times"<<endl;
  }
    return 0;
}