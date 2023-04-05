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
    long long a, b;
    cin >> a >> b;

    if (a % b == 0)
      cout << 0 << endl;
    else
      cout << b - (a % b) << endl;
  }

  return 0;
}
