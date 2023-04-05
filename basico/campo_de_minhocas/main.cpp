#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ int N, M;
  cin >> N >> M;

  int matrix[N][M];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> matrix[i][j];
    }
  }

  int maior = 0;
  for (int i = 0; i < N; i++)
  {
    int totalLinha = 0;
    for (int j = 0; j < M; j++)
    {
      totalLinha += matrix[i][j];
    }
    if (totalLinha > maior)
    {
      maior = totalLinha;
    }
  }

  for (int i = 0; i < M; i++)
  {
    int totalColuna = 0;
    for (int j = 0; j < N; j++)
    {
      totalColuna += matrix[j][i];
    }
    if (totalColuna > maior)
    {
      maior = totalColuna;
    }
  }

  cout << maior << endl;

  return 0;
}
