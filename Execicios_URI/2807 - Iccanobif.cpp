#include <iostream>
#include <stack>
 
using namespace std;
 void B(int X)
 {
     stack <int> Y;
     int A=0,S=1,C;
     for(int i=0;i<X;i++)
     { 
        Y.push(S);
    	 C=S;
    	 S+=A;
    	 A=C;
      }
     for(int j=0;j<X-1;j++)
     {
        cout<<Y.top()<<" ";
        Y.pop();
     }
      cout<<Y.top()<<endl;
      Y.pop();
 }
int main() 
{
 
 int X;
 cin>>X;
 B(X);
 
}