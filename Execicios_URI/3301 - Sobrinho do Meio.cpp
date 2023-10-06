#include <iostream>

using namespace std;
int Medio(int X, int Y, int  Z)
{
  if((X>Z && X<Y) ||(X>Y && X<Z) ) 
  {
    return X;
  }
  else
  {
    if((Y<X && Y>Z) || (Y>X && Y<Z))
    {
        return Y;
    }
    else
    {
        return Z;
    }
  }
}
int main()
{

    int X, Y, Z, A;
    cin >> X >> Y >> Z;
    A = Medio(X, Y, Z);

    if (A == X)
    {
        cout << "huguinho" << endl;
    }
    else
    {
        if (A == Y)
        {
            cout << "zezinho" << endl;
        }
        else
        {
            cout << "luisinho" << endl;
        }
    }

    return 0;
}
