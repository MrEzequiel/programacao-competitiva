#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd;
  cin >> qtd;

  while (qtd--)
  {
    string movimento;
    cin >> movimento;

    set<pair<int, int>> coordenadas;
    int y = 0, x = 0, tempX, tempY;
    int total = 0;
    for (auto m : movimento)
    {
      tempX = x;
      tempY = y;
      if (m == 'N')
        y++;
      else if (m == 'S')
        y--;
      else if (m == 'W')
        x--;
      else
        x++;

      pair<int, int> coordenadaAtual = {tempX + x, tempY + y};

      auto existe = coordenadas.count(coordenadaAtual) != 0;
      if (!existe)
      {
        total += 5;
        coordenadas.insert(coordenadaAtual);
      }
      else
      {
        total++;
      }
    }

    cout << total << endl;
  }
}
