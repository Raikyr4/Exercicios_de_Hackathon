#include <iostream>
 
using namespace std;
 
int main() {
 
   int X,soma=0;
   cin>>X;
   soma+=X*300;
   cin>>X;
   soma+=X*1500;
   cin>>X;
   soma+=X*600;
   cin>>X;
   soma+=X*1000;
   cin>>X;
   soma+=(X*150)+225;
    cout<<soma<<endl;
}
