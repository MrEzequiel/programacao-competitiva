#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
  return a.second < b.second;
}

int main()
{
  _ int qtd;
  cin >> qtd;

  vector<pair<int, int>> orders(qtd, {0, 0});

  for (int i = 0; i < qtd; i++)
  {
    pair<int, int> order;
    cin >> order.first;
    cin >> order.second;
    orders[i] = order;
  }

  sort(orders.begin(), orders.end(), cmp);

  int ans = 0;
  int fim = -1;
  for (int i = 0; i < qtd; i++)
  {
    if (orders[i].first > fim)
    {
      fim = orders[i].second;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}