#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  long long int n_variety, quantity;

  cin >> n_variety;

  int total_quantity = 0;

  map<long long int, int> paralelogramos;

  while (n_variety--)
  {
    cin >> quantity;
    paralelogramos[quantity]++;
  }

  for (auto p : paralelogramos)
  {
    if (p.second < 2)
    {
      continue;
    }

    if (p.second % 2 != 0)
      p.second--;

    total_quantity += (p.second / 2);
  }

  cout << total_quantity / 2 << endl;

  return 0;
}