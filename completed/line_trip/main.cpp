#include <bits/stdc++.h>
using namespace std;

int main()
{


  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n + 2);

    arr[0] = 0;
    arr[n + 1] = x;

    for (int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }

    int maxDiff = 0;

    for (int i = 1; i <= n + 1; i++)
    {
      int diff = arr[i] - arr[i - 1];

      if (i == n + 1)
      {
        diff *= 2;
      }

      maxDiff = max(maxDiff, diff);
    }
    cout << maxDiff << endl;
    
  }

  return 0;
}