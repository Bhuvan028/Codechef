#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    if(y == 0){
        cout<<x<<endl;
    }
    else if(x-y == 0){
        cout<< 2*y - 1 <<endl;
    }
    else
    cout<< y*2 + (x-y) <<endl;
  }

    return 0;
}