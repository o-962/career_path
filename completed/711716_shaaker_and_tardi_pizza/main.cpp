#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);

  int t;
  int n, a;
  cin >> t;
  while (t--)
  {
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int sm = 0;
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
      if (a[i] < min) min = a[i];
      
      sm += a[i];
    }
    int ans = sm - n * min;
    cout << ans << endl;
  }
  return 0;
}