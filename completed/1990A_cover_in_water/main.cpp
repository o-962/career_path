#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    string str;
    int size;
    cin >> size;
    cin >> str;

    bool troubleDotExists;
    int dotCounter = 0;
    bool f = false;
    for (int i = 0; i < size; i++)
    {
      if (i >= 2)
      {
        if (str[i] == '.' && str[i - 1] == '.' && str[i - 2] == '.')
        {
          cout << 2 << endl;
          f = true;
          break;
        }
      }
      if (str[i] == '.')
      {
        dotCounter++;
      }
    }
    if (!f)
    {
      cout << dotCounter << endl;
    }
    
  }
  return 0;
}