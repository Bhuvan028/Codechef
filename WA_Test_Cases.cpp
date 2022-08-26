#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    vector<int> v1;
    int a[100]; string s;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    cin>>s;
    int m=101;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
           m = min(a[i],m);
        }
      
    }
    cout<<m<<endl;

  }

    return 0;
}