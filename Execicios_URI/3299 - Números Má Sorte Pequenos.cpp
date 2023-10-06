#include <iostream>
#include <string>
using namespace std;
 
int main() {
 
   string X;
   cin>>X;
   bool R=false;
   for(int i=0;i<X.size();i++)
   {
       if(X[i]=='1' && X[i+1]=='3')
       {
           cout<<X<<" es de Mala Suerte"<<endl;
           R=true;
           break;
           
       }
   }
   if(!R)
   {
    cout<<X<<" NO es de Mala Suerte"<<endl;
   }

    return 0;
}