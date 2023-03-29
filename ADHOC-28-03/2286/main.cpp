#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd, caso = 1;

  while (true)
  {

    cin >> qtd;
    if (qtd == 0)
      break;

    pair<string, string> nomes;
    cin >> nomes.first >> nomes.second;

    vector<pair<int, int>> numeros(qtd, {0, 0});

    for (int i = 0; i < qtd; i++)
    {
      cin >> numeros[i].first >> numeros[i].second;
    }

    cout << "Teste " << caso << endl;

    for (auto n : numeros)
    {
      if ((n.first + n.second) % 2 == 0)
      {
        cout << nomes.first << endl;
      }
      else
      {
        cout << nomes.second << endl;
      }
    }

    cout << endl;

    caso++;
  }

  return 0;
}
