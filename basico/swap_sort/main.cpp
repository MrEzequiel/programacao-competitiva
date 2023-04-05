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
  vector<int> n(qtd, 0);

  for (int i = 0; i < qtd; i++)
  {
    cin >> n[i];
  }

  int trocas = 0;
  vector<pair<int, int>> t;
  for (int i = 0; i < qtd; i++)
  {
    auto min = min_element(n.begin() + i, n.end());
    int indexMin = min - n.begin();
    if (indexMin == i)
      continue;

    t.push_back({i, indexMin});
    swap(n[i], *min);
    trocas++;
  }

  cout << trocas << endl;
  for (auto a : t)
  {
    cout << a.first << " " << a.second << endl;
  }

  return 0;
}
