#include <iostream>
using namespace std;
#define ll long long 
#define MOD 1000000007
void solve()
{
    ll N;cin>>N;
    string S;cin>>S;
    ll X=0,y=0;
    for(auto i : S)
    {
        if(i=='U')y++;
        if(i=='L')X--;
        if(i=='D')y--;;
        if(i=='R')X++;

        if(X==1 && y==1)
        {
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
}