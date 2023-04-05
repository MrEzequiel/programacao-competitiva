#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

int main()
{
  _ long long n;
  cin >> n;

  for (long long i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << "nao" << endl;
      return 0;
    }
  }

  cout << "sim" << endl;

  return 0;
}
