#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int X, A, B, C, D;
    int Deno, nomi;
    char B1, B2, S;
    cin >> X;
    for (int i = 0; i < X; i++)
    {
        cin >> A >> B1 >> B;
        cin >> S;
        cin >> C >> B2 >> D;
        if (S == '+')
        {
            nomi = (A * D + C * B);
            Deno = D * B;
        }
        else
        {
            if (S =='-')
            {
                nomi = (A * D - C * B);
                Deno = D * B;
            }
            else
            {
                if (S =='*')
                {
                    nomi = A*C;
                   // cout<<nomi;
                    Deno = B*D;
                }
                else
                {
                    nomi = A * D;
                    Deno = C * B;
                }
            }
        }
        int n;
        for (int i = 1; i <= 1000; i++)
        {
            if (nomi % i == 0 && Deno % i == 0)
            {
                n = i;
            }
        }

        cout << nomi << '/' << Deno << " = " << nomi / n << '/' << Deno / n << endl;
    }
}
