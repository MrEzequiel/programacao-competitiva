#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

void questao()
{
  string a, b, c;
  cin >> a >> b >> c;

  for (int i = 0; i < a.size(); i++)
  {
    if (c[i] != a[i] && c[i] != b[i])
    {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
  return;
}

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    questao();
  }

  return 0;
}
