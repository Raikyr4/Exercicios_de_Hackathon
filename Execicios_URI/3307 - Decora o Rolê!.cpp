#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
   int N, Area;
   float pi = 3.14;
   cin >> N;
   vector<pair<int,pair<float, string>>> V;
   pair<float, string> D;
   for (int i = 0; i < N; i++)
   {
      cin >> Area;
      V.push_back({Area,D});
      float r;
     // r = pow((4.0/3.0)*4*pi*Area,1.0/3.0);
      r=sqrt(Area/(4*pi));
       if (r < 12.0)
      {
         V[i].second.second = "vermelho";
         V[i].second.first = Area * 0.09;
      }
      else
      {
         if (r < 15.0 && r > 12)
         {
            V[i].second.second  = "azul";
            V[i].second.first = Area * 0.07;
         }
         else
         {

           V[i].second.second  = "amarelo";
            V[i].second.first = Area * 0.05;
         }
      }
   }
   for (int j = 0; j < V.size(); j++)
   {
      cout << fixed << setprecision(2);
      cout << V[j].second.second << " = R$ " <<  V[j].second.first<< endl;
   }
}