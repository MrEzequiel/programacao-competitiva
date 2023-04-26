#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    int vida, vazio, relampago;
    cin >> vida >> vazio >> relampago;

    while (vazio > 0 && vida >= 21)
    {
      vazio--;
      vida = (vida / 2) + 10;
    }

    vida -= (relampago * 10);

    cout << (vida <= 0 ? "YES" : "NO") << endl;
  }

  return 0;
}