#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int n,x,arr[500];
    vector<int> v;
    cin>>n>>x;
    int m=x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x+=arr[i];
        v.push_back(x);
    } 
    for(int i=0;i<n;i++){
        if(v[i]>m){
            m=v[i];
        }
    }
    int p = max(x,m);
    cout<<p<<endl;

  }

    return 0;
}