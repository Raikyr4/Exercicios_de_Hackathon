#include <iostream>
#include <map>
using namespace std;
int main()
{
    int X,Y;
    string nome;
    map<int,string>P;
    map<int,string> :: iterator it;
    while(cin>>X)
    {
        for(int i=0;i<X;i++)
        {
            cin>>nome>>Y;
            P.insert({Y,nome});
        }
        int X=1;
       for(it=P.begin(); it!=P.end();it++,X++)
       {
        if(X!=P.size())
        {
            cout<<(*it).second<<" ";
        }
        else
        {
            cout<<(*it).second;
        }
        
       }
       cout<<endl;
       P.clear();
    }

}