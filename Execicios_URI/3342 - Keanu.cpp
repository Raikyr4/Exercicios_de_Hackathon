#include <iostream>
using namespace std;
int main()
{
    int X,cont=0;
    cin>>X;
    int M[X][X];
    for(int i=0;i<X;i++)
    {
        for(int j=0;j<X;j++)
        {
            M[i][j]=1;
           // cout<<M[i][j]<<" ";
        }
       // cout<<endl;
    }
    for(int i=0;i<X;i++)
    {
        for(int j=0;j<X;j++)
        {
            if(i%2==0 && j%2!=0)
            {
                M[i][j]=0;
                cont++;
            }
            else
            {
                if(i%2!=0 && j%2==0)
                {
                    M[i][j]=0;
                    cont++;
                }
            }
           // cout<<M[i][j]<<" ";
        }
        //cout<<endl;
    }
    cout<<X*X - cont<<" casas brancas e "<<cont<<" casas pretas"<<endl;
}