#include <iostream>
 
using namespace std;
 
int main() {
 
    string X;
    X.reserve(20);
    cin>>X;
    if(X.size()>=10)
    {
        cout<<"palavrao"<<endl;
    }
    else
    {
        cout<<"palavrinha"<<endl;
    }
    return 0;
}