#include <bits/stdc++.h>
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);


  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    bool vovaWin = 
    n % 3 == 0 && 
    (n-1 % 3 != 0) &&
    (n+1 % 3 != 0)
    ;
    if (vovaWin)
    {
      cout << "Second" << endl;
    }
    else {
      cout << "First" << endl;
    }
    
    
  }
  return 0;
}