#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

void solve(vector<int> &a, vector<int> &b, set<int> &setA, set<int> &setB)
{
  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < b.size(); j++)
    {
      if (setA.find(a[i] + b[j]) == setA.end() && setB.find(a[i] + b[j]) == setB.end())
      {
        cout << a[i] << " " << b[j] << endl;
        return;
      }
    }
  }
}

int main()
{
  _ int qtdA, qtdB;
  cin >> qtdA;

  vector<int> a(qtdA);
  set<int> setA, setB;

  for (int i = 0; i < qtdA; i++)
  {
    cin >> a[i];
    setA.insert(a[i]);
  }

  cin >> qtdB;
  vector<int> b(qtdB);

  for (int i = 0; i < qtdB; i++)
  {
    cin >> b[i];
    setB.insert(b[i]);
  }

  solve(a, b, setA, setB);

  return 0;
}
