#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

void solve()
{
  string palavra;
  cin >> palavra;

  for (int i = 0; i < palavra.size() - 1; i++)
  {
    if (tolower(palavra[i]) >= tolower(palavra[i + 1]))
    {
      cout << palavra << ": "
           << "N" << endl;
      return;
    }
  }

  cout << palavra << ": "
       << "O" << endl;
}

int main()
{
  _ int qtd;
  cin >> qtd;
  while (qtd--)
  {
    solve();
  }

  return 0;
}
