#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
        int n,x,flag=0,e; cin>>n>>x;
     vector<int> v;
    for(int i=0;i<n;i++){
        cin>>e;
         v.push_back(e);
    }
    vector<int> :: iterator it;
    it = lower_bound(v.begin(),v.end(),x);
    cout<<*it<<endl;
    }

    return 0;
}