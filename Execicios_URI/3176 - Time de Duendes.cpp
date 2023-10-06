#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Duende
{
   int age;
   string name;
};
bool compara(Duende a, Duende b)
{
   if (a.age == b.age)
      return a.name <= b.name;
   return a.age > b.age;
}
int main()
{
   int n, i, idade, times, k;
   string nome;
   Duende hue[30];
   cin >> n;
   times = n / 3;
   cin.ignore();
   for (i = 0; i < n; i++)
   {
      cin >> nome >> idade;
      hue[i].name = nome;
      hue[i].age = idade;
   }
   sort(hue, hue + n, compara);
   for (i = 0; i < times; i++)
   {
      cout << "Time " << i + 1 << endl;
      for (k = i; k < n; k += times)
      {
         cout << hue[k].name << " " << hue[k].age << endl;
      }
      cout << endl;
   }
   return 0;
}