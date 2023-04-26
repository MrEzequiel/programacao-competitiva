#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ long long qtd;
  cin >> qtd;

  vector<long long> potencias(31);
  potencias[0] = 1;
  for (int i = 1; i < potencias.size(); i++)
  {
    potencias[i] = 2 * potencias[i - 1];
  }

  while (qtd--)
  {
    int n;
    cin >> n;

    long long pilhaA = 0;
    int hA = 0;
    long long pilhaB = 0;
    int hB = 0;
    for (int i = 1; i <= n / 2; i++)
    {
      long long potenciaAtual = potencias[i];
      long long potenciaProx = potencias[(n - i) + 1];
      long long total = (potenciaAtual + potenciaProx);

      if (i == (n / 2) && hA == hB)
      {
        pilhaA += potenciaAtual;
        pilhaB += potenciaProx;
        continue;
      }

      if (i % 2 != 0)
      {
        pilhaA += total;
        hA++;
      }
      else
      {
        pilhaB += total;
        hB++;
      }
    }

    cout << abs(pilhaA - pilhaB) << endl;
  }

  return 0;
}