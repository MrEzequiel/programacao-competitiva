#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int k;
  cin >> k;

  vector<int> centimetros(12, 0);
  for (int i = 0; i < 12; i++)
  {
    cin >> centimetros[i];
  }

  sort(centimetros.begin(), centimetros.end(), greater<>());

  int total = 0;
  int meses = 0;
  for (auto c : centimetros)
  {
    if (total >= k)
      break;
    meses++;
    total += c;
  }

  if (total < k)
    cout << "-1" << endl;
  else
    cout << meses << endl;

  return 0;
}