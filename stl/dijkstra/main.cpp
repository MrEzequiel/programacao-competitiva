#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ string joia;
  unordered_set<string> joias;

  while (cin >> joia)
  {
    joias.insert(joia);
  }

  cout << joias.size() << endl;
  return 0;
}
