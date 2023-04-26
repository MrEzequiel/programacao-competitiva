#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

template <typename T>
std::ostream &operator<<(
    std::ostream &os,
    const std::vector<T> &vec)
{
  for (auto elem : vec)
  {
    os << elem << " ";
  }
  return os;
}

int main()
{
  int qtd, h;
  cin >> qtd >> h;

  vector<int> pinos(qtd, 0);
  for (int i = 0; i < qtd; i++)
  {
    cin >> pinos[i];
  }

  int ans = 0;
  for (int i = 0; i < qtd; i++)
  {
    if (pinos[i] == h)
    {
      continue;
    }

    // diferenca negativa > abaixei
    // diferenca positiva > levantei
    int difereca = h - pinos[i];
    ans += abs(difereca);

    if (i == qtd - 1)
    {
      continue;
    }

    if (pinos[i] == pinos[i + 1])
    {
      pinos[i + 1] = h;
    }
    else
    {
      pinos[i + 1] += difereca;
    }
  }

  cout << ans << endl;
  return 0;
}