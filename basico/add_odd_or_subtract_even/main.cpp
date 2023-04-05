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
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
      cout << 0 << endl;
      continue;
    }

    if ((a > b && ((a - b) % 2 != 0)) || (a < b && ((b - a) % 2 == 0)))
    {
      cout << 2 << endl;
      continue;
    }

    cout << 1 << endl;
  }

  return 0;
}
