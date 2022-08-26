#include<bits/stdc++.h>
using namespace std;
int main()
{    vector<string>strs;
strs = {"flower","f","flight"};
sort(strs.begin(), strs.end());
for(int i=0;i<strs.size();i++){
  cout<<strs[i]<<endl;
}
}