#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd;
  cin >> qtd;

  vector<int> fila;

  for (int i = 0; i < qtd; i++)
  {
    int id;
    cin >> id;
    fila.push_back(id);
  }

  int qtdSairam;
  cin >> qtdSairam;

  while (qtdSairam--)
  {
    int id;
    cin >> id;
    auto it = find(fila.begin(), fila.end(), id);

    if (it != fila.end())
    {
      fila.erase(it);
    }
  }

  for (int i = 0; i < fila.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << fila[i];
  }

  cout << endl;

  return 0;
}
