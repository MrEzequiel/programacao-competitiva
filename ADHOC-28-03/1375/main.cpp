#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd;
  vector<int> posicoes;

  while (true)
  {
    cin >> qtd;
    if (qtd == 0)
      break;

    posicoes.assign(1001, 0);

    bool tahCerto = true;
    for (int i = 0; i < qtd; i++)
    {
      int numeracao, posic;
      cin >> numeracao >> posic;

      int posicaoInicio = (i + 1) + (posic);

      if (!tahCerto)
        continue;

      if (posicaoInicio < 1 || posicaoInicio > posicoes.size() || posicaoInicio > qtd)
      {
        tahCerto = false;
        continue;
      }

      if (posicoes[posicaoInicio] == 0)
      {
        posicoes[posicaoInicio] = numeracao;
      }
      else
      {
        tahCerto = false;
      }
    }

    if (!tahCerto)
    {
      cout << "-1" << endl;
      continue;
    }

    for (int i = 1; i < posicoes.size(); i++)
    {
      if (posicoes[i] == 0)
        break;
      if (i != 1)
      {
        cout << " ";
      }

      cout << posicoes[i];
    }
    cout << endl;
  }

  return 0;
}
