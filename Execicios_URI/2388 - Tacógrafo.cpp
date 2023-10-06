#include <iostream>
 
using namespace std;
 
int main() {    

    int X,soma=0,N,P;
    cin>>X;
    for(int i=0;i<X;i++)
    {
        cin>>N>>P;
        soma+=N*P;
    }
    cout<<soma<<endl;
 
    return 0;
}
