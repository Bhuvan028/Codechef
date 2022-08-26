#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int x,arr[5],s=0;
    cin>>x;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
     
     cout<< arr[0] + arr[1] + arr[0] * (x-2) <<endl;
    }
    return 0;
}