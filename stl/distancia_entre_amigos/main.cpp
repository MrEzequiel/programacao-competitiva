#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int N, i, j, distancia;

  cin >> N;
  int predios[N];

  for (i = 0; i < N; i++)
    cin >> predios[i];

  int maior = predios[0] - 1;
  for (i = 0; i < N - 1; i++)
  {
    for (j = i; j < N; j++)
    {
      distancia = predios[i] + (j - i) + predios[j];
      if (distancia > maior)
        maior = distancia;
    }
  }

  cout << maior << endl;

  return 0;
}
