#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    int n, m;
    cin >> n >> m;

    string black_row(m, 'B');
    vector<string> result(n, black_row);
    result[0][0] = 'W';

    for (int i = 0; i < n; ++i)
    {
      cout << result[i] << endl;
    }
  }

  return 0;
}