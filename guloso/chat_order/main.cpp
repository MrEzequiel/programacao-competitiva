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

  vector<string> conversas;
  unordered_map<string, bool> pessoas;
  while (qtd--)
  {
    string pessoa;
    cin >> pessoa;

    conversas.push_back(pessoa);
  }

  for (int i = conversas.size() - 1; i >= 0; i--)
  {
    if (!pessoas[conversas[i]])
    {
      cout << conversas[i] << endl;
      pessoas[conversas[i]] = true;
    }
  }

  return 0;
}