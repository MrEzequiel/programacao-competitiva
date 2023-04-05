#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ int n, caso = 1;

  while (true)
  {
    cin >> n;
    if (n == 0)
      break;

    vector<int> pessoas(n, 0);

    for (int i = 0; i < n; i++)
    {
      cin >> pessoas[i];
    }

    int index;
    for (int i = 0; i < n; i++)
    {
      if (pessoas[i] == (i + 1))
      {
        index = pessoas[i];
        break;
      }
    }

    cout << "Teste " << caso << endl;
    cout << index << endl
         << endl;

    caso++;
  }

  return 0;
}
