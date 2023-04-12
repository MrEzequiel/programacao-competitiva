#include <bits/stdc++.h>

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

using namespace std;

int main()
{
  _ int qtd, n;
  cin >> qtd;

  while (qtd--)
  {
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<int> ans;

    int left = 0, right = (n - 1);
    while (true)
    {
      if (left > right)
        break;

      if (left == right)
      {
        ans.push_back(v[left]);
        break;
      }

      ans.push_back(v[left]);
      left++;
      ans.push_back(v[right]);
      right--;
    }

    reverse(ans.begin(), ans.end());

    for (auto a : ans)
    {
      cout << a << " ";
    }

    cout << endl;
  }

  return 0;
}