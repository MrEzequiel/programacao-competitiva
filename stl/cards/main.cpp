#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd;
  cin >> qtd;

  string texto;
  cin >> texto;

  int countOne = count(texto.begin(), texto.end(), 'n');
  int countZero = count(texto.begin(), texto.end(), 'z');

  for (int i = 0; i < countOne; i++)
  {
    cout << 1 << " ";
  }
  for (int i = 0; i < countZero; i++)
  {
    cout << 0 << " ";
  }

  cout << endl;

  return 0;
}
