#include <iostream>
 
using namespace std;
 
int main() {
 
string al={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char C;
int X;
X=al.size();
cin>>C;
for(int i=0;i<X;i++)
{
    if(al[i]==C)cout<<i<<endl;
}
    return 0;
}