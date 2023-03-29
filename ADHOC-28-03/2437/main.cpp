#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int xm, ym, xr, yr;
  cin >> xm >> ym >> xr >> yr;

  cout << abs(abs(xr - xm) + abs(yr - ym)) << endl;

  return 0;
}
