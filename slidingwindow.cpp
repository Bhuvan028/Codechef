#include<bits/stdc++.h>
using namespace std;
int main()
{     int n,k; cin>>n>>k;
int maxsum = INT_MIN,currsum=0;
vector<int> v;
for(int i=0; i<n; i++){
    int a;
    cin>>a;
    v.push_back(a);
}
for(int i=0;i<k;i++){
        currsum += v[i]; 
}
    maxsum = currsum;
for(int i=k;i<n;i++){
    currsum += v[i]-v[i-k];
    maxsum=max(maxsum,currsum);
}
    //1, 4, 2, 10, 23, 3, 1, 0, 20
    cout<<maxsum<<endl; 
    return 0;
}
