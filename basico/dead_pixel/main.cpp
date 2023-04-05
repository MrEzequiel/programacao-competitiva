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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    cout << max(max(x, a - 1 - x) * b, a * max(y, b - 1 - y)) << endl;
  }

  return 0;
}
