#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ string texto;
  cin >> texto;

  bool ganhou = false;

  stack<char> s;

  for (int i = 0; i < texto.size(); i++)
  {
    if (!s.empty() && texto[i] == s.top())
    {
      ganhou = !ganhou;
      s.pop();
    }
    else
    {
      s.push(texto[i]);
    }
  }

  cout << (ganhou ? "Yes" : "No") << endl;
  return 0;
}