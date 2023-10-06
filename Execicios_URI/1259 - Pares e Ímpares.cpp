#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int X;
    cin >> X;
    int Y[X];
    vector<int> Par, Impar;
    for (int i = 0; i < X; i++)
    {
        cin >> Y[i];
    }
    for (int i = 0; i < X; i++)
    {
        if (Y[i] % 2 == 0)
        {
            Par.push_back(Y[i]);
        }
        else
        {
            Impar.push_back(Y[i]);
        }
    }
    sort(Par.begin(), Par.end());
    sort(Impar.begin(), Impar.end());
    for (int i = 0; i < Par.size(); i++)
    {
        cout << Par[i] << endl;
    }
    for (int i = Impar.size()-1; i>=0 ; i--)
    {
        cout << Impar[i] << endl;
    }
}
