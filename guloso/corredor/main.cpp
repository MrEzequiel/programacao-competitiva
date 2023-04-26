#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define INF 1000000007

using namespace std;

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
// Kadane

int main()
{
  _ int qtd;
  cin >> qtd;

  vector<int> n(qtd, 0);

  for (int i = 0; i < qtd; i++)
  {
    cin >> n[i];
  }

  int max_so_far = INT_MIN, max_ending_here = 0;

  for (int i = 0; i < qtd; i++)
  {
    max_ending_here = max_ending_here + n[i];
    if (max_so_far < max_ending_here)
      max_so_far = max_ending_here;

    if (max_ending_here < 0)
      max_ending_here = 0;
  }

  cout << max_so_far << endl;

  return 0;
}