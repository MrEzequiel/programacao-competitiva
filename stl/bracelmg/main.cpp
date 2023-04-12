#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

bool contains(const auto &cont, string s)
{
  return search(cont.begin(), cont.end(), s.begin(), s.end()) != cont.end();
}

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    string proibido, p;
    cin >> proibido >> p;

    string palavra;
    palavra += p;
    palavra += p;

    if (contains(palavra, proibido))
    {
      cout << "S" << endl;
      continue;
    }

    reverse(palavra.begin(), palavra.end());

    if (contains(palavra, proibido))
    {
      cout << "S" << endl;
      continue;
    }

    cout << "N" << endl;
  }

  return 0;
}
