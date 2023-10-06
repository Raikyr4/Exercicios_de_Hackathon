#include <iostream>
#include <set>
using namespace std;
int main()
{
    int N;
    string X;
    cin >> N;
    int C;
    while (N--)
    {
        string A = "", B = "";
        int contA = 0, contB = 0;
        cin >> C;
        cin.ignore();
        getline(cin, X);


        if (C % 2 == 0)
        {
           
            for ( int i = 0; i < C; i++)
            {
                if(i<((C/2)-1))
                {
                    A += X[i];
                }
                else
                {
                    B+=X[i];
                }
                
            }
            set<char> AB;
            for(auto i : A)
            {
                AB.insert(A[i]);
            }
            contA=AB.size();
            cout<<A<<endl;
            cout<<B<<endl;
            AB.clear();
            for(auto i : B)
            {
                AB.insert(B[i]);
            }
            contB=AB.size();
            AB.clear();
            cout << contA + contB << endl;
        }
        else
        {
            for ( int i = 0; i < C; i++)
            {
                if(i<((C/2)-1))
                {
                    A += X[i];
                }
                else
                {
                    B+=X[i];
                }
                
            }
            set<char> AB;
            for(auto i : A)
            {
                AB.insert(A[i]);
            }
            contA=AB.size();
            AB.clear();
            for(auto i : B)
            {
                AB.insert(B[i]);
            }
            contB=AB.size();
            AB.clear();
            cout << contA + contB << endl;
        }


    }
}