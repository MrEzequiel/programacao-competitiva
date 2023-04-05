#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    int n;
    cin >> n;

    vector<int> precos(n, 0);
    for (int i = 0; i < n; i++)
    {
      cin >> precos[i];
    }

    int diasRuins = 0;
    int minimo = INF;
    for (int i = n - 1; i >= 0; i--)
    {
      if (precos[i] > minimo)
        diasRuins++;
      minimo = min(minimo, precos[i]);
    }

    cout << diasRuins << endl;
  }

  return 0;
}
