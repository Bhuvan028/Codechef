#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      long long int a[n];
      for(int i = 0; i < n ; i++)
      {
          int te;
          cin>>te;
          a[i] = te;
      }
      unordered_map<int, int> MAP;
    for (int i = 0; i < n; ++i)
        MAP[a[i]]++;
    int maxF = 0;
    for (int i = 0; i < n; ++i)
        if (maxF < MAP[a[i]])
            maxF = MAP[a[i]];
    if (maxF > (n + 1) / 2)
        cout << "nO" <<endl;
       
    else
        cout << "yeS" <<endl;
        
  }
  return 0;
}