#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int X, Y;
    string nome, Tra, Lingua, aux1, aux2;
    vector<pair<string, string>> P, L;
   // vector<string, string>::iterator it, it2;
    cin >> X;
    for (int i = 0; i < X; i++)
    {
        cin >> Lingua;
        cin.ignore();
        getline(cin, Tra);
        P.push_back({Lingua, Tra});
    }
    cin >> Y;
   cin.ignore();
    for (int i = 0; i < Y; i++)
    {
        getline(cin, nome);
        cin >> Lingua;
       cin.ignore();

        L.push_back({nome, Lingua});
    }
    // cout<<1<<endl;

    for (int i=0; i<L.size(); i++)
    {
        cout << L[i].first << endl;
        for (int j= 0 ; j < P.size(); j++)
        {
            aux1 = L[i].second;
            aux2 = P[j].first;
            if (aux1 == aux2)
            {
                cout << P[j].second << endl;
                cout << endl;
                break;
            }
        }
    }
}