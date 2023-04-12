#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int n;
  while (cin >> n)
  {
    vector<pair<int, int>> botas(61, {0, 0});

    while (n--)
    {
      int tamanho;
      char pe;

      cin >> tamanho >> pe;

      if (pe == 'D')
      {
        botas[tamanho].second++;
      }
      else
      {
        botas[tamanho].first++;
      }
    }

    int total = 0;
    for (int i = 30; i < botas.size(); i++)
    {
      total += min(botas[i].first, botas[i].second);
    }

    cout << total << endl;
  }

  return 0;
}