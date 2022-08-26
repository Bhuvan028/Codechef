#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int n,x,sum=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } int c=n;
    sort(arr, arr + n, greater<int>());
    for(int i=0;i<n;i++){
        sum+=arr[i];
        c--;
        if(sum>=x){
         break;
        }
    }
    cout<<c<<endl;
  }

    return 0;
}

