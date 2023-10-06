#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y,Z,W;
    cin>>X>>Y>>Z>>W;
    if(X*Y==W*Z)cout<<0<<endl;
    else if(X*Y>W*Z)cout<<-1<<endl;
    else cout<<1<<endl;
    return 0;
}