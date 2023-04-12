#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

void problema()
{
  int c, v;
  cin >> c >> v;

  unordered_map<string, float> moedas;

  while (c--)
  {
    string moeda;
    float valor;
    cin >> moeda >> valor;
    moedas[moeda] = valor;
  }

  float total = 0.0;
  while (v--)
  {
    string moeda;
    float valor;

    cin >> valor >> moeda;

    if (moeda == "JD")
    {
      total += valor;
      continue;
    }

    float conversao = moedas[moeda] * valor;
    total += conversao;
  }

  cout
      << fixed << setprecision(6);
  cout << total << endl;
}

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    problema();
  }

  return 0;
}
