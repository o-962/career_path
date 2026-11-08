#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);

  int n;
  cin >> n;
  vector<int> a(n);
  int total = 0;
  for (int i = 0; i < n; i++){
    cin >> a[i];
    total += a[i];
  }
  
  sort(a.begin(), a.end());
  reverse(a.begin(),a.end());

  int taken = 0;

  for (int i = 0; i < n; i++)
  {
  }
  return 0;
}