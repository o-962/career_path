#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int i = 0;
    vector<int> arr = {};
    while (i != n)
    {
      int x;
      cin >> x;
      arr.push_back(x);
      i++;
    }

    i = 1;
    bool t = false;
    while (i != n && i+1 != n)
    {
      bool even = (i+1) % 2;
      cout << even &&
        arr[i] > arr[i+1] && arr[i] > arr[i-1]  << endl;
      if (
        even &&
        arr[i] > arr[i+1] && arr[i] > arr[i-1]
      )
      {
        t = true;
      }
      else if (arr[i+1] > arr[i] && arr[i] > arr[i-1])
      {
        t = true;
      }
      else {
        t = false;
        cout << "No" << endl;
        break;
      }
      i++;
    }
    if (t)
    {
      cout << "Yes" << endl;
    }
    
  }
  return 0;
}